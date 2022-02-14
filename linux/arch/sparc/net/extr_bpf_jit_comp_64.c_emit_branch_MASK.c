
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int,struct jit_ctx*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
   struct jit_ctx *VAR_4)
{
 unsigned int VAR_5 = VAR_3 - VAR_2;

 if (VAR_1 & VAR_0)
  FUNC_2(VAR_1 | FUNC_0(VAR_5 << 2), VAR_4);
 else
  FUNC_2(VAR_1 | FUNC_1(VAR_5 << 2), VAR_4);
}
