
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv_jit_context {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct rv_jit_context*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(u8 VAR_1, s64 VAR_2, struct rv_jit_context *VAR_3)
{
 s64 VAR_4 = (VAR_2 + (1 << 11)) >> 12, VAR_5 = VAR_2 & 0xfff;
 int VAR_6;

 if (FUNC_2(VAR_2)) {
  if (VAR_4)
   FUNC_1(FUNC_5(VAR_1, VAR_4), VAR_3);

  if (!VAR_4) {
   FUNC_1(FUNC_3(VAR_1, VAR_0, VAR_5), VAR_3);
   return;
  }

  FUNC_1(FUNC_4(VAR_1, VAR_1, VAR_5), VAR_3);
  return;
 }

 VAR_6 = FUNC_0(VAR_4);
 VAR_4 >>= VAR_6;
 VAR_6 += 12;

 FUNC_7(VAR_1, VAR_4, VAR_3);

 FUNC_1(FUNC_6(VAR_1, VAR_1, VAR_6), VAR_3);
 if (VAR_5)
  FUNC_1(FUNC_3(VAR_1, VAR_1, VAR_5), VAR_3);
}
