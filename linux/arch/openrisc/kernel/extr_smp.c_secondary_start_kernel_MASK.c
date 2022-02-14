
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mm_count; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 TYPE_1__* VAR_2 ;
 struct mm_struct VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (unsigned int) ;

void FUNC_14(void)
{
 struct mm_struct *VAR_4 = &VAR_3;
 unsigned int VAR_5 = FUNC_12();




 FUNC_0(&VAR_4->mm_count);
 VAR_2->active_mm = VAR_4;
 FUNC_3(VAR_5, FUNC_5(VAR_4));

 FUNC_8("CPU%u: Booted secondary processor\n", VAR_5);

 FUNC_11();
 FUNC_7();

 FUNC_6(VAR_5);




 FUNC_1(&VAR_1);

 FUNC_13(VAR_5);
 FUNC_10(VAR_5, 1);

 FUNC_4();

 FUNC_9();



 FUNC_2(VAR_0);
}
