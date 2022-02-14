
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ option; int length; } ;
struct TYPE_4__ {TYPE_1__ objectname; } ;
struct used_atom {TYPE_2__ u; } ;
struct object_id {int dummy; } ;
struct atom_value {void* s; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct object_id const*,int ) ;
 int FUNC_2 (struct object_id const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const struct object_id *VAR_5,
      struct atom_value *VAR_6, struct used_atom *VAR_7)
{
 if (FUNC_3(VAR_4, "objectname")) {
  if (VAR_7->u.objectname.option == VAR_3) {
   VAR_6->s = FUNC_4(FUNC_1(VAR_5, VAR_0));
   return 1;
  } else if (VAR_7->u.objectname.option == VAR_1) {
   VAR_6->s = FUNC_4(FUNC_2(VAR_5));
   return 1;
  } else if (VAR_7->u.objectname.option == VAR_2) {
   VAR_6->s = FUNC_4(FUNC_1(VAR_5, VAR_7->u.objectname.length));
   return 1;
  } else
   FUNC_0("unknown %%(objectname) option");
 }
 return 0;
}
