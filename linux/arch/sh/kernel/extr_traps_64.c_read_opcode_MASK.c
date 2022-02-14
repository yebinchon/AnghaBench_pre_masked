
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reg_size_t ;
typedef int insn_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int FUNC_2(reg_size_t VAR_1, insn_size_t *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 insn_size_t VAR_6;

 if ((VAR_1 & 3) == 1) {

  VAR_5 = VAR_1 & ~3;
  if (VAR_3) {
   if (!FUNC_1(VAR_5, sizeof(insn_size_t))) {
    VAR_4 = -VAR_0;
   } else {
    VAR_4 = FUNC_0(VAR_6, (insn_size_t *)VAR_5);
    *VAR_2 = VAR_6;
   }
   return VAR_4;
  } else {



   *VAR_2 = *(insn_size_t *)VAR_5;
   return 0;
  }
 } else if ((VAR_1 & 1) == 0) {




  return -VAR_0;
 } else {

  return -VAR_0;
 }
}
