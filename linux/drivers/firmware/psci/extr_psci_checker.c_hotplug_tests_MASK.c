
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int **) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_3, VAR_4, VAR_5 = -VAR_0;
 cpumask_var_t VAR_6, *VAR_7;
 char *VAR_8;

 if (!FUNC_1(&VAR_6, VAR_1))
  return VAR_5;

 VAR_4 = FUNC_2(&VAR_7);
 if (VAR_4 < 0)
  goto out_free_cpus;
 VAR_8 = (char *)FUNC_0(VAR_1);
 if (!VAR_8)
  goto out_free_cpu_groups;

 VAR_5 = 0;




 FUNC_8("Trying to turn off and on again all CPUs\n");
 VAR_5 += FUNC_4(VAR_2, VAR_6);





 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  ssize_t VAR_9 = FUNC_3(1, VAR_8,
            VAR_7[VAR_3]);

  VAR_8[VAR_9 - 1] = '\0';
  FUNC_8("Trying to turn off and on again group %d (CPUs %s)\n",
   VAR_3, VAR_8);
  VAR_5 += FUNC_4(VAR_7[VAR_3], VAR_6);
 }

 FUNC_7((unsigned long)VAR_8);
out_free_cpu_groups:
 FUNC_5(VAR_4, &VAR_7);
out_free_cpus:
 FUNC_6(VAR_6);
 return VAR_5;
}
