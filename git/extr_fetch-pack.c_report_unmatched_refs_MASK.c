
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int match_status; int name; } ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct ref **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!VAR_0[VAR_2])
   continue;
  switch (VAR_0[VAR_2]->match_status) {
  case 130:
   continue;
  case 129:
   FUNC_1(FUNC_0("no such remote ref %s"), VAR_0[VAR_2]->name);
   break;
  case 128:
   FUNC_1(FUNC_0("Server does not allow request for unadvertised object %s"),
         VAR_0[VAR_2]->name);
   break;
  }
  VAR_3 = 1;
 }
 return VAR_3;
}
