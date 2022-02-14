
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {scalar_t__ cpu_architecture; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const,scalar_t__ const) ;
 int FUNC_1 (scalar_t__ const,int ,int ) ;
 int FUNC_2 (scalar_t__ const,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__ const) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct jit_ctx*) ;
 scalar_t__ FUNC_5 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_6(const s8 *VAR_3, const s8 *VAR_4,
         struct jit_ctx *VAR_5)
{
 if (FUNC_5(VAR_3[1])) {
  if (VAR_2 >= 6 ||
      VAR_5->cpu_architecture >= VAR_1) {
   FUNC_4(FUNC_1(VAR_4[1], VAR_0,
           FUNC_3(VAR_3[1])), VAR_5);
  } else {
   FUNC_4(FUNC_2(VAR_4[1], VAR_0,
           FUNC_3(VAR_3[1])), VAR_5);
   FUNC_4(FUNC_2(VAR_4[0], VAR_0,
           FUNC_3(VAR_3[0])), VAR_5);
  }
 } else {
  if (VAR_3[1] != VAR_4[1])
   FUNC_4(FUNC_0(VAR_3[1], VAR_4[1]), VAR_5);
  if (VAR_3[0] != VAR_4[0])
   FUNC_4(FUNC_0(VAR_3[0], VAR_4[0]), VAR_5);
 }
}
