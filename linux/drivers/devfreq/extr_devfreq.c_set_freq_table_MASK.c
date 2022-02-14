
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq_dev_profile {int max_state; unsigned long* freq_table; } ;
struct TYPE_2__ {int parent; } ;
struct devfreq {TYPE_1__ dev; struct devfreq_dev_profile* profile; } ;
struct dev_pm_opp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 unsigned long* FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct devfreq *VAR_3)
{
 struct devfreq_dev_profile *VAR_4 = VAR_3->profile;
 struct dev_pm_opp *VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8;


 VAR_8 = FUNC_3(VAR_3->dev.parent);
 if (VAR_8 <= 0)
  return -VAR_0;

 VAR_4->max_state = VAR_8;
 VAR_4->freq_table = FUNC_5(VAR_3->dev.parent,
     VAR_4->max_state,
     sizeof(*VAR_4->freq_table),
     VAR_2);
 if (!VAR_4->freq_table) {
  VAR_4->max_state = 0;
  return -VAR_1;
 }

 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < VAR_4->max_state; VAR_7++, VAR_6++) {
  VAR_5 = FUNC_2(VAR_3->dev.parent, &VAR_6);
  if (FUNC_0(VAR_5)) {
   FUNC_6(VAR_3->dev.parent, VAR_4->freq_table);
   VAR_4->max_state = 0;
   return FUNC_1(VAR_5);
  }
  FUNC_4(VAR_5);
  VAR_4->freq_table[VAR_7] = VAR_6;
 }

 return 0;
}
