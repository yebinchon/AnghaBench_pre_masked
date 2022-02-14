
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; int created; int dma; } ;
struct ocrdma_eq {int vector; TYPE_2__ q; } ;
struct TYPE_4__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_create_eq_rsp* mbx_cmd; } ;
struct TYPE_6__ {int rsvd_version; } ;
struct ocrdma_create_eq_rsp {int num_pages; int cnt; int vector_eqid; int * pa; int valid; TYPE_3__ req; } ;
struct ocrdma_create_eq_req {int num_pages; int cnt; int vector_eqid; int * pa; int valid; TYPE_3__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ocrdma_create_eq_rsp*,int,int *,int *) ;
 int FUNC_1 (struct ocrdma_create_eq_rsp*,int ,int) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_5, struct ocrdma_eq *VAR_6)
{
 int VAR_7;
 struct ocrdma_create_eq_req *VAR_8 = VAR_5->mbx_cmd;
 struct ocrdma_create_eq_rsp *VAR_9 = VAR_5->mbx_cmd;

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));
 FUNC_3(&VAR_8->req, VAR_0, VAR_3,
   sizeof(*VAR_8));

 VAR_8->req.rsvd_version = 2;
 VAR_8->num_pages = 4;
 VAR_8->valid = VAR_2;
 VAR_8->cnt = 4 << VAR_1;

 FUNC_2(&VAR_8->pa[0], VAR_8->num_pages, VAR_6->q.dma,
        VAR_4);
 VAR_7 = FUNC_0(VAR_5->nic_info.netdev, VAR_8, sizeof(*VAR_8), ((void*)0),
     ((void*)0));
 if (!VAR_7) {
  VAR_6->q.id = VAR_9->vector_eqid & 0xffff;
  VAR_6->vector = (VAR_9->vector_eqid >> 16) & 0xffff;
  VAR_6->q.created = 1;
 }
 return VAR_7;
}
