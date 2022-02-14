
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pf_ruleset {scalar_t__ tables; TYPE_4__* anchor; TYPE_3__* rules; scalar_t__ topen; } ;
struct pf_anchor {struct pf_ruleset ruleset; int children; } ;
struct TYPE_9__ {scalar_t__ refcnt; struct pf_anchor* parent; int children; } ;
struct TYPE_7__ {scalar_t__ open; int ptr; } ;
struct TYPE_6__ {int ptr; } ;
struct TYPE_8__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pf_ruleset VAR_4 ;
 int FUNC_3 (TYPE_4__*) ;

void
FUNC_4(struct pf_ruleset *VAR_5)
{
 struct pf_anchor *VAR_6;
 int VAR_7;

 while (VAR_5 != ((void*)0)) {
  if (VAR_5 == &VAR_4 || VAR_5->anchor == ((void*)0) ||
      !FUNC_0(&VAR_5->anchor->children) ||
      VAR_5->anchor->refcnt > 0 || VAR_5->tables > 0 ||
      VAR_5->topen)
   return;
  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
   if (!FUNC_2(VAR_5->rules[VAR_7].active.ptr) ||
       !FUNC_2(VAR_5->rules[VAR_7].inactive.ptr) ||
       VAR_5->rules[VAR_7].inactive.open)
    return;
  FUNC_1(VAR_2, &VAR_1, VAR_5->anchor);
  if ((VAR_6 = VAR_5->anchor->parent) != ((void*)0))
   FUNC_1(VAR_3, &VAR_6->children,
       VAR_5->anchor);
  FUNC_3(VAR_5->anchor);
  if (VAR_6 == ((void*)0))
   return;
  VAR_5 = &VAR_6->ruleset;
 }
}
