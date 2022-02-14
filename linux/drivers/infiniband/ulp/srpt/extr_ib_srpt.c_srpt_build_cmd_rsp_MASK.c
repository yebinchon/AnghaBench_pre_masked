
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int scsi_sense_length; } ;
struct TYPE_3__ {struct srp_rsp* buf; } ;
struct srpt_send_ioctx {TYPE_2__ cmd; int * sense_data; TYPE_1__ ioctx; } ;
struct srpt_rdma_ch {int max_ti_iu_len; int req_lim_delta; } ;
struct srp_rsp {int status; void* sense_data_len; int flags; int tag; void* req_lim_delta; int opcode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct srp_rsp*,int const*,int) ;
 int FUNC_6 (struct srp_rsp*,int ,int) ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct srpt_rdma_ch *VAR_3,
         struct srpt_send_ioctx *VAR_4, u64 VAR_5,
         int VAR_6)
{
 struct srp_rsp *VAR_7;
 const u8 *VAR_8;
 int VAR_9, VAR_10;





 FUNC_2(VAR_6 & 1);

 VAR_7 = VAR_4->ioctx.buf;
 FUNC_0(!VAR_7);

 VAR_8 = VAR_4->sense_data;
 VAR_9 = VAR_4->cmd.scsi_sense_length;
 FUNC_2(VAR_9 > sizeof(VAR_4->sense_data));

 FUNC_6(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->opcode = VAR_1;
 VAR_7->req_lim_delta =
  FUNC_4(1 + FUNC_3(&VAR_3->req_lim_delta, 0));
 VAR_7->tag = VAR_5;
 VAR_7->status = VAR_6;

 if (VAR_9) {
  FUNC_1(VAR_0 <= sizeof(*VAR_7));
  VAR_10 = VAR_3->max_ti_iu_len - sizeof(*VAR_7);
  if (VAR_9 > VAR_10) {
   FUNC_7("truncated sense data from %d to %d bytes\n",
    VAR_9, VAR_10);
   VAR_9 = VAR_10;
  }

  VAR_7->flags |= VAR_2;
  VAR_7->sense_data_len = FUNC_4(VAR_9);
  FUNC_5(VAR_7 + 1, VAR_8, VAR_9);
 }

 return sizeof(*VAR_7) + VAR_9;
}
