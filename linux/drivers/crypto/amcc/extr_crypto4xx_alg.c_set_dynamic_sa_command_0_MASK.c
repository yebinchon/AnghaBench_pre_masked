
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int save_hash_state; int save_iv; int load_hash_state; int load_iv; int hdr_proc; int hash_alg; int cipher_alg; int pad_type; int extend_pad; int op_group; int opcode; int dir; } ;
struct TYPE_4__ {TYPE_1__ bf; scalar_t__ w; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_command_0; } ;



__attribute__((used)) static void FUNC_0(struct dynamic_sa_ctl *VAR_0, u32 VAR_1,
         u32 VAR_2, u32 VAR_3, u32 VAR_4,
         u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8,
         u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 VAR_0->sa_command_0.w = 0;
 VAR_0->sa_command_0.bf.save_hash_state = VAR_1;
 VAR_0->sa_command_0.bf.save_iv = VAR_2;
 VAR_0->sa_command_0.bf.load_hash_state = VAR_3;
 VAR_0->sa_command_0.bf.load_iv = VAR_4;
 VAR_0->sa_command_0.bf.hdr_proc = VAR_5;
 VAR_0->sa_command_0.bf.hash_alg = VAR_6;
 VAR_0->sa_command_0.bf.cipher_alg = VAR_7;
 VAR_0->sa_command_0.bf.pad_type = VAR_8 & 3;
 VAR_0->sa_command_0.bf.extend_pad = VAR_8 >> 2;
 VAR_0->sa_command_0.bf.op_group = VAR_9;
 VAR_0->sa_command_0.bf.opcode = VAR_10;
 VAR_0->sa_command_0.bf.dir = VAR_11;
}
