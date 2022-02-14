
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_6__ {struct mm_struct* active_mm; } ;
struct TYPE_5__ {int (* init_per_cpu ) (unsigned int) ;} ;
struct TYPE_4__ {int (* init_per_cpu ) (unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_3__* VAR_1 ;
 struct mm_struct VAR_2 ;
 int FUNC_2 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (unsigned int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;

void FUNC_14(void)
{
 struct mm_struct *VAR_5 = &VAR_2;
 unsigned int VAR_6 = FUNC_11();


 FUNC_10();

 FUNC_4(VAR_5);
 FUNC_5(VAR_5);
 VAR_1->active_mm = VAR_5;
 FUNC_1(VAR_6, FUNC_3(VAR_5));


 if (VAR_4.init_per_cpu)
  VAR_4.init_per_cpu(VAR_6);

 if (VAR_3->init_per_cpu)
  VAR_3->init_per_cpu(VAR_6);

 FUNC_6(VAR_6);
 FUNC_9(VAR_6, 1);

 FUNC_7("## CPU%u LIVE ##: Executing Code...\n", VAR_6);

 FUNC_2();
 FUNC_8();
 FUNC_0(VAR_0);
}
