
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {struct object* tagged; } ;
struct repository {int dummy; } ;
struct object {int type; int oid; int parsed; } ;
struct commit {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {struct object object; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,char const*,int ,int ) ;
 int FUNC_1 (struct repository*,int *) ;
 TYPE_1__* FUNC_2 (struct repository*,struct commit*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;

struct object *FUNC_5(struct repository *VAR_3, const char *VAR_4, int VAR_5,
     struct object *VAR_6, enum object_type VAR_7)
{
 if (VAR_4 && !VAR_5)
  VAR_5 = FUNC_3(VAR_4);
 while (1) {
  if (!VAR_6 || (!VAR_6->parsed && !FUNC_1(VAR_3, &VAR_6->oid)))
   return ((void*)0);
  if (VAR_7 == VAR_0 || VAR_6->type == VAR_7)
   return VAR_6;
  if (VAR_6->type == VAR_2)
   VAR_6 = ((struct tag*) VAR_6)->tagged;
  else if (VAR_6->type == VAR_1)
   VAR_6 = &(FUNC_2(VAR_3, ((struct commit *)VAR_6))->object);
  else {
   if (VAR_4)
    FUNC_0("%.*s: expected %s type, but the object "
          "dereferences to %s type",
          VAR_5, VAR_4, FUNC_4(VAR_7),
          FUNC_4(VAR_6->type));
   return ((void*)0);
  }
 }
}
