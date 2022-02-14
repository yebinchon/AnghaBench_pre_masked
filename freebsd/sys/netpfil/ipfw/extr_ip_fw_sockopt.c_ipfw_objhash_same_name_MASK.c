
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int dummy; } ;
struct named_object {scalar_t__ set; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    struct named_object *VAR_2)
{

 if ((FUNC_0(VAR_1->name, VAR_2->name) == 0) && VAR_1->set == VAR_2->set)
  return (1);

 return (0);
}
