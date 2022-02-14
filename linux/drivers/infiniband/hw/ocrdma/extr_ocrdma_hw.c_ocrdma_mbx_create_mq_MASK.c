
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_queue_info {int id; int created; int dma; int len; int size; int va; } ;
struct ocrdma_pa {int dummy; } ;
struct TYPE_3__ {int netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; struct ocrdma_create_mq_rsp* mbx_cmd; } ;
struct TYPE_4__ {int rsvd_version; } ;
struct ocrdma_create_mq_rsp {int cqid_pages; int async_cqid_ringsize; int id; struct ocrdma_pa* pa; int valid; int async_event_bitmap; int async_cqid_valid; TYPE_2__ req; } ;
struct ocrdma_create_mq_req {int cqid_pages; int async_cqid_ringsize; int id; struct ocrdma_pa* pa; int valid; int async_event_bitmap; int async_cqid_valid; TYPE_2__ req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int ,struct ocrdma_create_mq_rsp*,int,int *,int *) ;
 int FUNC_3 (struct ocrdma_create_mq_rsp*,int ,int) ;
 int FUNC_4 (struct ocrdma_pa*,int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_10,
    struct ocrdma_queue_info *VAR_11,
    struct ocrdma_queue_info *VAR_12)
{
 int VAR_13, VAR_14;
 struct ocrdma_create_mq_req *VAR_15 = VAR_10->mbx_cmd;
 struct ocrdma_create_mq_rsp *VAR_16 = VAR_10->mbx_cmd;
 struct ocrdma_pa *VAR_17;

 FUNC_3(VAR_15, 0, sizeof(*VAR_15));
 VAR_13 = FUNC_1(VAR_11->va, VAR_11->size);

 FUNC_6(&VAR_15->req, VAR_3,
   VAR_8, sizeof(*VAR_15));
 VAR_15->req.rsvd_version = 1;
 VAR_15->cqid_pages = VAR_13;
 VAR_15->cqid_pages |= (VAR_12->id << VAR_5);
 VAR_15->async_cqid_valid = VAR_4;

 VAR_15->async_event_bitmap = FUNC_0(VAR_0);
 VAR_15->async_event_bitmap |= FUNC_0(VAR_2);

 VAR_15->async_event_bitmap |= FUNC_0(VAR_1);

 VAR_15->async_cqid_ringsize = VAR_12->id;
 VAR_15->async_cqid_ringsize |= (FUNC_5(VAR_11->len) <<
    VAR_6);
 VAR_15->valid = VAR_7;
 VAR_17 = &VAR_15->pa[0];

 FUNC_4(VAR_17, VAR_13, VAR_11->dma, VAR_9);
 VAR_14 = FUNC_2(VAR_10->nic_info.netdev,
     VAR_15, sizeof(*VAR_15), ((void*)0), ((void*)0));
 if (!VAR_14) {
  VAR_11->id = VAR_16->id;
  VAR_11->created = 1;
 }
 return VAR_14;
}
