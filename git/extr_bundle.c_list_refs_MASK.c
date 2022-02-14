
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_list {int nr; TYPE_1__* list; } ;
struct TYPE_2__ {char* name; int oid; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct ref_list *VAR_0, int VAR_1, const char **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  if (VAR_1 > 1) {
   int VAR_4;
   for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
    if (!FUNC_2(VAR_0->list[VAR_3].name, VAR_2[VAR_4]))
     break;
   if (VAR_4 == VAR_1)
    continue;
  }
  FUNC_1("%s %s\n", FUNC_0(&VAR_0->list[VAR_3].oid),
    VAR_0->list[VAR_3].name);
 }
 return 0;
}
