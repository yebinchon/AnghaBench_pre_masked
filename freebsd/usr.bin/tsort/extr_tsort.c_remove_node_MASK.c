
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* n_name; int n_narcs; TYPE_1__** n_prevp; TYPE_1__* n_next; int n_refcnt; struct TYPE_5__** n_arcs; } ;
struct TYPE_4__ {struct TYPE_4__** n_prevp; } ;
typedef TYPE_2__ NODE ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(NODE *VAR_0)
{
 NODE **VAR_1;
 int VAR_2;

 (void)FUNC_0("%s\n", VAR_0->n_name);
 for (VAR_1 = VAR_0->n_arcs, VAR_2 = VAR_0->n_narcs; --VAR_2 >= 0; VAR_1++)
  --(*VAR_1)->n_refcnt;
 VAR_0->n_narcs = 0;
 *VAR_0->n_prevp = VAR_0->n_next;
 if (VAR_0->n_next)
  VAR_0->n_next->n_prevp = VAR_0->n_prevp;
}
