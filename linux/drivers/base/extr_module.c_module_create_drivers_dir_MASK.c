
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_kobject {int kobj; scalar_t__ drivers_dir; } ;
typedef int DEFINE_MUTEX ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct module_kobject *VAR_0)
{
 static DEFINE_MUTEX(VAR_1);

 FUNC_1(&VAR_1);
 if (VAR_0 && !VAR_0->drivers_dir)
  VAR_0->drivers_dir = FUNC_0("drivers", &VAR_0->kobj);
 FUNC_2(&VAR_1);
}
