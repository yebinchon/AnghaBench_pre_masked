
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct promisor_remote {int name; struct promisor_remote* next; } ;
struct object_id {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct object_id*,int) ;
 int FUNC_1 (struct object_id*) ;
 int FUNC_2 () ;
 struct promisor_remote* VAR_0 ;
 int FUNC_3 (struct repository*,struct object_id**,int,int) ;

int FUNC_4(struct repository *VAR_1,
          const struct object_id *VAR_2,
          int VAR_3)
{
 struct promisor_remote *VAR_4;
 struct object_id *VAR_5 = (struct object_id *)VAR_2;
 int VAR_6 = VAR_3;
 int VAR_7 = 0;
 int VAR_8 = -1;

 FUNC_2();

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_4->name, VAR_5, VAR_6) < 0) {
   if (VAR_6 == 1)
    continue;
   VAR_6 = FUNC_3(VAR_1, &VAR_5,
        VAR_6, VAR_7);
   if (VAR_6) {
    VAR_7 = 1;
    continue;
   }
  }
  VAR_8 = 0;
  break;
 }

 if (VAR_7)
  FUNC_1(VAR_5);

 return VAR_8;
}
