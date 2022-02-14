
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdump_args {int error; int sd; } ;
struct table_value {int spare1; } ;
struct TYPE_2__ {int kidx; } ;
struct table_val_link {TYPE_1__ no; int pval; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct table_value*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct namedobj_instance *VAR_1, struct named_object *VAR_2, void *VAR_3)
{
 struct vdump_args *VAR_4;
 struct table_val_link *VAR_5;
 struct table_value *VAR_6;

 VAR_4 = (struct vdump_args *)VAR_3;
 VAR_5 = (struct table_val_link *)VAR_2;

 VAR_6 = (struct table_value *)FUNC_0(VAR_4->sd, sizeof(*VAR_6));

 if (VAR_6 == ((void*)0)) {
  VAR_4->error = VAR_0;
  return (VAR_0);
 }

 FUNC_1(VAR_6, VAR_5->pval, sizeof(*VAR_6));
 VAR_6->spare1 = VAR_5->no.kidx;
 return (0);
}
