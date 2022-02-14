
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct socketlist {int dummy; } ;
struct TYPE_2__ {int * string; } ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,int,struct socketlist*) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_0, int VAR_1, struct socketlist *VAR_2)
{
 if (!VAR_0->nr)
  FUNC_1(((void*)0), VAR_1, VAR_2);
 else {
  int VAR_3, VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
   VAR_4 = FUNC_1(VAR_0->items[VAR_3].string,
         VAR_1, VAR_2);

   if (VAR_4 == 0)
    FUNC_0("unable to allocate any listen sockets for host %s on port %u",
      VAR_0->items[VAR_3].string, VAR_1);
  }
 }
}
