
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct namedobj_instance {int dummy; } ;
struct named_object {scalar_t__ set; } ;
struct manage_sets_args {scalar_t__ new_set; scalar_t__ set; } ;



__attribute__((used)) static int
FUNC_0(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{
 struct manage_sets_args *VAR_3;

 VAR_3 = (struct manage_sets_args *)VAR_2;
 if (VAR_1->set == (uint8_t)VAR_3->set)
  VAR_1->set = VAR_3->new_set;
 return (0);
}
