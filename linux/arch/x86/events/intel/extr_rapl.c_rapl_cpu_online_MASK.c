
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_pmu {unsigned int cpu; int timer_interval; int * pmu; int active_list; int lock; } ;
struct TYPE_2__ {struct rapl_pmu** pmus; int pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 struct rapl_pmu* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned int,int *) ;
 struct rapl_pmu* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct rapl_pmu*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned int) ;
 size_t FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(unsigned int VAR_6)
{
 struct rapl_pmu *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (!VAR_7) {
  VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1, FUNC_1(VAR_6));
  if (!VAR_7)
   return -VAR_0;

  FUNC_8(&VAR_7->lock);
  FUNC_0(&VAR_7->active_list);
  VAR_7->pmu = &VAR_4->pmu;
  VAR_7->timer_interval = FUNC_6(VAR_5);
  FUNC_7(VAR_7);

  VAR_4->pmus[FUNC_10(VAR_6)] = VAR_7;
 }





 VAR_8 = FUNC_3(&VAR_3, FUNC_9(VAR_6));
 if (VAR_8 < VAR_2)
  return 0;

 FUNC_4(VAR_6, &VAR_3);
 VAR_7->cpu = VAR_6;
 return 0;
}
