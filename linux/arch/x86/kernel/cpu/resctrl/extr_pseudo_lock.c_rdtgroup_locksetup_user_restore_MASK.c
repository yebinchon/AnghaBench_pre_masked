
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rdtgroup*,char*,int) ;
 int FUNC_1 (struct rdtgroup*,char*) ;

__attribute__((used)) static int FUNC_2(struct rdtgroup *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, "tasks", 0777);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, "cpus", 0777);
 if (VAR_2)
  goto err_tasks;

 VAR_2 = FUNC_0(VAR_1, "cpus_list", 0777);
 if (VAR_2)
  goto err_cpus;

 if (VAR_0) {
  VAR_2 = FUNC_0(VAR_1, "mon_groups", 0777);
  if (VAR_2)
   goto err_cpus_list;
 }

 VAR_2 = 0;
 goto out;

err_cpus_list:
 FUNC_1(VAR_1, "cpus_list");
err_cpus:
 FUNC_1(VAR_1, "cpus");
err_tasks:
 FUNC_1(VAR_1, "tasks");
out:
 return VAR_2;
}
