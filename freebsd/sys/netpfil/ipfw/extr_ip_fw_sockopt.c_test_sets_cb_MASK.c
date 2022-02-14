
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct namedobj_instance {int dummy; } ;
struct named_object {scalar_t__ set; int name; int etlv; } ;
struct manage_sets_args {int new_set; scalar_t__ set; } ;


 int VAR_0 ;
 int * FUNC_0 (struct namedobj_instance*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct namedobj_instance *VAR_1, struct named_object *VAR_2,
    void *VAR_3)
{
 struct manage_sets_args *VAR_4;

 VAR_4 = (struct manage_sets_args *)VAR_3;
 if (VAR_2->set != (uint8_t)VAR_4->set)
  return (0);
 if (FUNC_0(VAR_1, VAR_4->new_set,
     VAR_2->etlv, VAR_2->name) != ((void*)0))
  return (VAR_0);
 return (0);
}
