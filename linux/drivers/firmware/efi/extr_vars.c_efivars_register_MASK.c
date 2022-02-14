
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct efivars {struct kobject* kobject; struct efivar_operations const* ops; } ;
struct efivar_operations {int dummy; } ;


 int VAR_0 ;
 struct efivars* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct efivars *VAR_3,
       const struct efivar_operations *VAR_4,
       struct kobject *VAR_5)
{
 if (FUNC_0(&VAR_2))
  return -VAR_0;

 VAR_3->ops = VAR_4;
 VAR_3->kobject = VAR_5;

 VAR_1 = VAR_3;

 FUNC_1("Registered efivars operations\n");

 FUNC_2(&VAR_2);

 return 0;
}
