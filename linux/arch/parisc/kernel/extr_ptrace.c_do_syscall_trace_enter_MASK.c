
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pt_regs {unsigned long* gr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*,unsigned long) ;
 int FUNC_5 (struct pt_regs*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

long FUNC_7(struct pt_regs *VAR_3)
{
 if (FUNC_3(VAR_1)) {
  int VAR_4 = FUNC_5(VAR_3);





  VAR_3->gr[28] = -VAR_0;

  if (VAR_4) {
   VAR_3->gr[20] = -1UL;
   return -1;
  }
 }


 if (FUNC_2(((void*)0)) == -1)
  return -1;
  FUNC_0(VAR_3->gr[20] & 0xffffffff,
   VAR_3->gr[26] & 0xffffffff,
   VAR_3->gr[25] & 0xffffffff,
   VAR_3->gr[24] & 0xffffffff,
   VAR_3->gr[23] & 0xffffffff);





 return (int) ((u32) VAR_3->gr[20]);
}
