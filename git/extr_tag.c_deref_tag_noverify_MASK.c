
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {struct object* tagged; } ;
struct object {scalar_t__ type; int oid; } ;


 scalar_t__ VAR_0 ;
 struct object* FUNC_0 (int ,int *) ;
 int VAR_1 ;

struct object *FUNC_1(struct object *VAR_2)
{
 while (VAR_2 && VAR_2->type == VAR_0) {
  VAR_2 = FUNC_0(VAR_1, &VAR_2->oid);
  if (VAR_2 && VAR_2->type == VAR_0 && ((struct tag *)VAR_2)->tagged)
   VAR_2 = ((struct tag *)VAR_2)->tagged;
  else
   VAR_2 = ((void*)0);
 }
 return VAR_2;
}
