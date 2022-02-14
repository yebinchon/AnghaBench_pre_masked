
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {TYPE_1__* tagged; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct TYPE_2__ {struct object_id oid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char const*) ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 struct object* FUNC_2 (struct repository*,struct object_id*) ;
 int FUNC_3 (char const*) ;

struct object *FUNC_4(struct repository *VAR_1, struct object *VAR_2, const char *VAR_3, int VAR_4)
{
 struct object_id *VAR_5 = ((void*)0);
 while (VAR_2 && VAR_2->type == VAR_0)
  if (((struct tag *)VAR_2)->tagged) {
   VAR_5 = &((struct tag *)VAR_2)->tagged->oid;
   VAR_2 = FUNC_2(VAR_1, VAR_5);
  } else {
   VAR_5 = ((void*)0);
   VAR_2 = ((void*)0);
  }
 if (!VAR_2 && VAR_3) {
  if (VAR_5 && FUNC_1(VAR_5))
   return ((void*)0);
  if (!VAR_4)
   VAR_4 = FUNC_3(VAR_3);
  FUNC_0("missing object referenced by '%.*s'", VAR_4, VAR_3);
 }
 return VAR_2;
}
