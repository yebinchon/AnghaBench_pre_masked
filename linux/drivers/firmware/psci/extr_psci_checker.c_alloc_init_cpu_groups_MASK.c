
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int cpumask_var_t ;
typedef int cpu_groups ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct cpumask const* VAR_2 ;
 int FUNC_1 (int ,int ,struct cpumask const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct cpumask const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int **) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int,int ) ;
 int VAR_3 ;
 struct cpumask* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(cpumask_var_t **VAR_4)
{
 int VAR_5 = 0;
 cpumask_var_t VAR_6, *VAR_7;

 if (!FUNC_0(&VAR_6, VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_3, sizeof(VAR_7),
        VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_6, VAR_2);

 while (!FUNC_4(VAR_6)) {
  const struct cpumask *VAR_8 =
   FUNC_8(FUNC_2(VAR_6));

  if (!FUNC_0(&VAR_7[VAR_5], VAR_1)) {
   FUNC_5(VAR_5, &VAR_7);
   return -VAR_0;
  }
  FUNC_3(VAR_7[VAR_5++], VAR_8);
  FUNC_1(VAR_6, VAR_6, VAR_8);
 }

 FUNC_6(VAR_6);
 *VAR_4 = VAR_7;

 return VAR_5;
}
