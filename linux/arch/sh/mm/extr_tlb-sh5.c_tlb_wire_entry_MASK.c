
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pte_t ;


 scalar_t__ FUNC_0 (unsigned long long*) ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long long* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int ) ;
 unsigned long long FUNC_6 () ;
 int FUNC_7 (unsigned long long,unsigned long,int ,unsigned long) ;

void FUNC_8(struct vm_area_struct *VAR_4, unsigned long VAR_5, pte_t VAR_6)
{
 unsigned long long VAR_7;
 unsigned long VAR_8, VAR_9;

 FUNC_1(VAR_3 == FUNC_0(VAR_2));

 FUNC_4(VAR_9);

 VAR_7 = FUNC_6();
 VAR_2[VAR_3++] = VAR_7;

 VAR_8 = FUNC_5(VAR_6) & VAR_1;
 VAR_8 &= ~VAR_0;

 FUNC_7(VAR_7, VAR_5, FUNC_2(), VAR_8);

 FUNC_3(VAR_9);
}
