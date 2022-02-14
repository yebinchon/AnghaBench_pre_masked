
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int,struct jit_ctx*) ;

__attribute__((used)) static void FUNC_6(s32 VAR_2, u32 VAR_3, struct jit_ctx *VAR_4)
{
 if (VAR_2 >= 0) {
  FUNC_5(FUNC_4(VAR_2, VAR_3), VAR_4);
  FUNC_5(FUNC_0(VAR_2, VAR_3), VAR_4);
 } else {
  u32 VAR_5 = ~(u32) VAR_2;
  u32 VAR_6 = -0x400 | (u32) VAR_2;

  FUNC_5(FUNC_4(VAR_5, VAR_3), VAR_4);
  FUNC_5(VAR_1 | VAR_0 | FUNC_2(VAR_3) | FUNC_3(VAR_6) | FUNC_1(VAR_3), VAR_4);
 }
}
