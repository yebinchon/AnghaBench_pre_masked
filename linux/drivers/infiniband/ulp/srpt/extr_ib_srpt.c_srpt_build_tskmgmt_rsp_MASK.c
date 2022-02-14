
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {struct srp_rsp* buf; } ;
struct srpt_send_ioctx {TYPE_1__ ioctx; } ;
struct srpt_rdma_ch {int req_lim_delta; } ;
struct srp_rsp {int * data; void* resp_data_len; int flags; int tag; void* req_lim_delta; int opcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct srp_rsp*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct srpt_rdma_ch *VAR_2,
      struct srpt_send_ioctx *VAR_3,
      u8 VAR_4, u64 VAR_5)
{
 struct srp_rsp *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = 4;
 VAR_8 = sizeof(*VAR_6) + VAR_7;

 VAR_6 = VAR_3->ioctx.buf;
 FUNC_0(!VAR_6);
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->opcode = VAR_0;
 VAR_6->req_lim_delta =
  FUNC_2(1 + FUNC_1(&VAR_2->req_lim_delta, 0));
 VAR_6->tag = VAR_5;

 VAR_6->flags |= VAR_1;
 VAR_6->resp_data_len = FUNC_2(VAR_7);
 VAR_6->data[3] = VAR_4;

 return VAR_8;
}
