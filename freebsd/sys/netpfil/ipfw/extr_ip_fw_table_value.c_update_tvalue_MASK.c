
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdump_args {struct table_value* pval; } ;
struct table_value {int dummy; } ;
struct TYPE_2__ {size_t kidx; char* name; } ;
struct table_val_link {TYPE_1__ no; struct table_value* pval; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct namedobj_instance *VAR_0, struct named_object *VAR_1, void *VAR_2)
{
 struct vdump_args *VAR_3;
 struct table_val_link *VAR_4;
 struct table_value *VAR_5;

 VAR_3 = (struct vdump_args *)VAR_2;
 VAR_4 = (struct table_val_link *)VAR_1;

 VAR_5 = VAR_3->pval;
 VAR_4->pval = &VAR_5[VAR_4->no.kidx];
 VAR_4->no.name = (char *)&VAR_5[VAR_4->no.kidx];
 return (0);
}
