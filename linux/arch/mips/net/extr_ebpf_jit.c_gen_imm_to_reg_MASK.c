
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
struct bpf_insn {int imm; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct jit_ctx*,int ,int,int,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(const struct bpf_insn *VAR_5, int VAR_6,
      struct jit_ctx *VAR_7)
{
 if (VAR_5->imm >= VAR_2 && VAR_5->imm <= VAR_1) {
  FUNC_0(VAR_7, VAR_3, VAR_6, VAR_0, VAR_5->imm);
 } else {
  int VAR_8 = (s16)(VAR_5->imm & 0xffff);
  int VAR_9 = VAR_5->imm - VAR_8;

  FUNC_0(VAR_7, VAR_4, VAR_6, VAR_9 >> 16);
  FUNC_0(VAR_7, VAR_3, VAR_6, VAR_6, VAR_8);
 }
}
