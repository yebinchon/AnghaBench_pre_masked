
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_governor {int governor_list; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cpufreq_governor *VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0())
  return -VAR_2;

 FUNC_3(&VAR_4);

 VAR_6 = -VAR_0;
 if (!FUNC_1(VAR_5->name)) {
  VAR_6 = 0;
  FUNC_2(&VAR_5->governor_list, &VAR_3);
 }

 FUNC_4(&VAR_4);
 return VAR_6;
}
