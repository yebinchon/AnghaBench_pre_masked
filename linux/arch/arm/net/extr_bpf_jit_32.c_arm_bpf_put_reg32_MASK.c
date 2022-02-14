
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct jit_ctx*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(s8 VAR_1, s8 VAR_2, struct jit_ctx *VAR_3)
{
 if (FUNC_4(VAR_1))
  FUNC_3(FUNC_1(VAR_2, VAR_0, FUNC_2(VAR_1)), VAR_3);
 else if (VAR_1 != VAR_2)
  FUNC_3(FUNC_0(VAR_1, VAR_2), VAR_3);
}
