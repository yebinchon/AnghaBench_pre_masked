
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct request {int tag; } ;
struct carm_request {scalar_t__ msg_bucket; void* msg_subtype; void* msg_type; } ;
struct carm_msg_ioctl {void* data_addr; void* handle; scalar_t__ array_id; void* subtype; void* type; } ;
struct carm_host {scalar_t__ state; int lock; int oob_q; } ;
struct carm_array_info {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct request*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,struct request*,int,int *) ;
 struct request* FUNC_6 (int ,int ,int ) ;
 struct carm_request* FUNC_7 (struct request*) ;
 int FUNC_8 (int) ;
 struct carm_msg_ioctl* FUNC_9 (struct carm_host*,int ) ;
 scalar_t__ FUNC_10 (struct carm_host*,int ) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct carm_msg_ioctl*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15 (struct carm_host *VAR_7, unsigned int VAR_8)
{
 struct carm_msg_ioctl *VAR_9;
 u32 VAR_10;
 dma_addr_t VAR_11;
 struct carm_request *VAR_12;
 struct request *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_6(VAR_7->oob_q, VAR_6, 0);
 if (FUNC_2(VAR_13)) {
  VAR_14 = -VAR_2;
  goto err_out;
 }
 VAR_12 = FUNC_7(VAR_13);

 VAR_9 = FUNC_9(VAR_7, VAR_13->tag);
 VAR_11 = FUNC_10(VAR_7, VAR_13->tag);
 VAR_10 = (u32) (VAR_11 + sizeof(struct carm_array_info));

 VAR_12->msg_type = VAR_1;
 VAR_12->msg_subtype = VAR_0;
 VAR_14 = FUNC_8(sizeof(struct carm_msg_ioctl) +
    sizeof(struct carm_array_info));
 FUNC_0(VAR_14 < 0);
 VAR_12->msg_bucket = (u32) VAR_14;

 FUNC_12(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->type = VAR_1;
 VAR_9->subtype = VAR_0;
 VAR_9->array_id = (u8) VAR_8;
 VAR_9->handle = FUNC_11(FUNC_3(VAR_13->tag));
 VAR_9->data_addr = FUNC_11(VAR_10);

 FUNC_13(&VAR_7->lock);
 FUNC_4(VAR_7->state == VAR_4 ||
        VAR_7->state == VAR_3);
 FUNC_14(&VAR_7->lock);

 FUNC_1("blk_execute_rq_nowait, tag == %u\n", VAR_13->tag);
 FUNC_5(VAR_7->oob_q, ((void*)0), VAR_13, 1, ((void*)0));

 return 0;

err_out:
 FUNC_13(&VAR_7->lock);
 VAR_7->state = VAR_5;
 FUNC_14(&VAR_7->lock);
 return VAR_14;
}
