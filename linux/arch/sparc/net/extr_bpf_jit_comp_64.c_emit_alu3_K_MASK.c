
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int tmp_1_used; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 size_t VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_4 (unsigned int,struct jit_ctx*) ;
 int FUNC_5 (unsigned int,unsigned int,struct jit_ctx*) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, struct jit_ctx *VAR_7)
{
 bool VAR_8 = FUNC_6(VAR_5);
 unsigned int VAR_9 = VAR_3;

 VAR_9 |= FUNC_1(VAR_4) | FUNC_0(VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_9 | VAR_0 | FUNC_3(VAR_5), VAR_7);
 } else {
  unsigned int VAR_10 = VAR_2[VAR_1];

  VAR_7->tmp_1_used = 1;

  FUNC_5(VAR_5, VAR_10, VAR_7);
  FUNC_4(VAR_9 | FUNC_2(VAR_10), VAR_7);
 }
}
