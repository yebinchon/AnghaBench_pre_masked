
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n_narcs; int n_arcsize; int n_refcnt; struct TYPE_5__** n_arcs; } ;
typedef TYPE_1__ NODE ;


 TYPE_1__* FUNC_0 (char*) ;
 TYPE_1__** FUNC_1 (TYPE_1__**,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, char *VAR_1)
{
 NODE *VAR_2;
 NODE *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_2(VAR_0, VAR_1))
  return;

 VAR_3 = FUNC_0(VAR_1);




 for (VAR_5 = 0; VAR_5 < VAR_2->n_narcs; VAR_5++)
  if (VAR_2->n_arcs[VAR_5] == VAR_3)
   return;



 if (VAR_2->n_narcs == VAR_2->n_arcsize) {
  if (!VAR_2->n_arcsize)
   VAR_2->n_arcsize = 10;
  VAR_4 = VAR_2->n_arcsize * sizeof(*VAR_2->n_arcs) * 2;
  VAR_2->n_arcs = FUNC_1(VAR_2->n_arcs, VAR_4);
  VAR_2->n_arcsize = VAR_4 / sizeof(*VAR_2->n_arcs);
 }
 VAR_2->n_arcs[VAR_2->n_narcs++] = VAR_3;
 ++VAR_3->n_refcnt;
}
