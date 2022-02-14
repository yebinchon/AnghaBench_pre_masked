
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mm_struct {int dummy; } ;
struct TYPE_5__ {int (* cpu_postboot ) () ;} ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_3__** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 () ;
 struct mm_struct VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (char*,unsigned int,unsigned long,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (unsigned int,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 unsigned int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;

void FUNC_23(void)
{
 u64 VAR_8 = FUNC_14() & VAR_3;
 struct mm_struct *VAR_9 = &VAR_7;
 unsigned int VAR_10;

 VAR_10 = FUNC_20(VAR_6);
 FUNC_16(FUNC_10(VAR_10));





 FUNC_7(VAR_9);
 VAR_6->active_mm = VAR_9;





 FUNC_3();

 if (FUNC_19())
  FUNC_5();

 FUNC_12();
 FUNC_21();






 FUNC_0();

 if (VAR_4[VAR_10]->cpu_postboot)
  VAR_4[VAR_10]->cpu_postboot();




 FUNC_4();




 FUNC_8(VAR_10);

 FUNC_17(VAR_10);
 FUNC_9(VAR_10);






 FUNC_11("CPU%u: Booted secondary processor 0x%010lx [0x%08x]\n",
      VAR_10, (unsigned long)VAR_8,
      FUNC_13());
 FUNC_22(VAR_1);
 FUNC_15(VAR_10, 1);
 FUNC_1(&VAR_5);

 FUNC_6(VAR_2);




 FUNC_2(VAR_0);
}
