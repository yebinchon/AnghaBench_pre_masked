
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indent_arg {int indent; scalar_t__ arg; } ;
struct devinfo_res {int dr_device; } ;
struct devinfo_dev {int dummy; } ;


 struct devinfo_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct devinfo_res*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct devinfo_res *VAR_0, void *VAR_1)
{
 struct indent_arg *VAR_2 = (struct indent_arg *)VAR_1;
 struct devinfo_dev *VAR_3 = (struct devinfo_dev *)VAR_2->arg;
 int VAR_4;

 if (FUNC_0(VAR_0->dr_device) == VAR_3) {

  if (VAR_2->indent == 0)
   return(1);
  for (VAR_4 = 0; VAR_4 < VAR_2->indent; VAR_4++)
   FUNC_2(" ");
  FUNC_1(VAR_0);
  FUNC_2("\n");
 }
 return(0);
}
