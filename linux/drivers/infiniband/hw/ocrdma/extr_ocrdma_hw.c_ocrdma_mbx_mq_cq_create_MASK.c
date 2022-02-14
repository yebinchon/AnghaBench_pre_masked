
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ocrdma_queue_info {int size; int created; scalar_t__ id; int dma; int va; } ;
struct ocrdma_mcqe {int dummy; } ;
struct TYPE_3__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_create_cq_cmd_rsp* mbx_cmd; } ;
struct TYPE_4__ {int rsvd_version; } ;
struct ocrdma_create_cq_cmd_rsp {int pgsz_pgcnt; int pdid_cqecnt; int cq_id; int * pa; scalar_t__ eqn; int ev_cnt_flags; TYPE_2__ req; } ;
struct ocrdma_create_cq_cmd {int pgsz_pgcnt; int pdid_cqecnt; int cq_id; int * pa; scalar_t__ eqn; int ev_cnt_flags; TYPE_2__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int FUNC_1 (int ,struct ocrdma_create_cq_cmd_rsp*,int,int *,int *) ;
 int FUNC_2 (struct ocrdma_create_cq_cmd_rsp*,int ,int) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_8,
       struct ocrdma_queue_info *VAR_9,
       struct ocrdma_queue_info *VAR_10)
{
 struct ocrdma_create_cq_cmd *VAR_11 = VAR_8->mbx_cmd;
 struct ocrdma_create_cq_cmd_rsp *VAR_12 = VAR_8->mbx_cmd;
 int VAR_13;

 FUNC_2(VAR_11, 0, sizeof(*VAR_11));
 FUNC_4(&VAR_11->req, VAR_0,
   VAR_6, sizeof(*VAR_11));

 VAR_11->req.rsvd_version = VAR_4;
 VAR_11->pgsz_pgcnt = (VAR_9->size / VAR_5) <<
  VAR_2;
 VAR_11->pgsz_pgcnt |= FUNC_0(VAR_9->va, VAR_9->size);

 VAR_11->ev_cnt_flags = VAR_1;
 VAR_11->eqn = VAR_10->id;
 VAR_11->pdid_cqecnt = VAR_9->size / sizeof(struct ocrdma_mcqe);

 FUNC_3(&VAR_11->pa[0], VAR_9->size / VAR_5,
        VAR_9->dma, VAR_7);
 VAR_13 = FUNC_1(VAR_8->nic_info.netdev,
     VAR_11, sizeof(*VAR_11), ((void*)0), ((void*)0));
 if (!VAR_13) {
  VAR_9->id = (u16) (VAR_12->cq_id & VAR_3);
  VAR_9->created = 1;
 }
 return VAR_13;
}
