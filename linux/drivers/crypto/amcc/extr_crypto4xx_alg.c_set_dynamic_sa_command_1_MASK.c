
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crypto_mode31; int crypto_mode9_8; int feedback_mode; int sa_rev; int hmac_muting; int extended_seq_num; int seq_num_mask; int mutable_bit_proc; int copy_pad; int copy_payload; int copy_hdr; } ;
struct TYPE_4__ {TYPE_1__ bf; scalar_t__ w; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_1; } ;



__attribute__((used)) static void FUNC_0(struct dynamic_sa_ctl *VAR_0, u32 VAR_1,
         u32 VAR_2, u32 VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7,
         u32 VAR_8, u32 VAR_9)
{
 VAR_0->sa_command_1.w = 0;
 VAR_0->sa_command_1.bf.crypto_mode31 = (VAR_1 & 4) >> 2;
 VAR_0->sa_command_1.bf.crypto_mode9_8 = VAR_1 & 3;
 VAR_0->sa_command_1.bf.feedback_mode = VAR_3,
 VAR_0->sa_command_1.bf.sa_rev = 1;
 VAR_0->sa_command_1.bf.hmac_muting = VAR_2;
 VAR_0->sa_command_1.bf.extended_seq_num = VAR_4;
 VAR_0->sa_command_1.bf.seq_num_mask = VAR_5;
 VAR_0->sa_command_1.bf.mutable_bit_proc = VAR_6;
 VAR_0->sa_command_1.bf.copy_pad = VAR_7;
 VAR_0->sa_command_1.bf.copy_payload = VAR_8;
 VAR_0->sa_command_1.bf.copy_hdr = VAR_9;
}
