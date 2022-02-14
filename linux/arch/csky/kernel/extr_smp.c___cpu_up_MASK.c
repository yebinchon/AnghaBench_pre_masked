
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;

int FUNC_6(unsigned int VAR_4, struct task_struct *VAR_5)
{
 unsigned long VAR_6 = 1 << VAR_4;

 VAR_3 =
  (unsigned int) FUNC_5(VAR_5) + VAR_0 - 8;
 VAR_2 = FUNC_2("cr31");
 VAR_1 = FUNC_2("cr18");






 FUNC_3("cr17", 0x22);

 if (VAR_6 & FUNC_2("cr<29, 0>")) {
  FUNC_4(FUNC_1(VAR_4));
 } else {

  VAR_6 |= FUNC_2("cr<29, 0>");
  FUNC_3("cr<29, 0>", VAR_6);
 }


 while (!FUNC_0(VAR_4));

 VAR_3 = 0;

 return 0;
}
