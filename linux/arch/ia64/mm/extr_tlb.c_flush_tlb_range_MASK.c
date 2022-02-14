
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct vm_area_struct *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 if (FUNC_4(VAR_2 - VAR_1 >= 1024*1024*1024*1024UL
   || FUNC_0(VAR_1) != FUNC_0(VAR_2 - 1))) {





  FUNC_2();
 } else {

  FUNC_1(VAR_0, VAR_1, VAR_2);

  FUNC_1(VAR_0, FUNC_3(VAR_1), FUNC_3(VAR_2));
 }
}
