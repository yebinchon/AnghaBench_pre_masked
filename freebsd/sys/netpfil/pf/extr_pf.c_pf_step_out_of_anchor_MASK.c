
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pf_ruleset {TYPE_3__* rules; } ;
struct pf_rule {int quick; TYPE_1__* anchor; } ;
struct pf_anchor_stackframe {struct pf_ruleset* rs; TYPE_4__* child; } ;
struct pf_anchor_node {int dummy; } ;
struct TYPE_9__ {struct pf_ruleset ruleset; } ;
struct TYPE_7__ {int ptr; } ;
struct TYPE_8__ {TYPE_2__ active; } ;
struct TYPE_6__ {struct pf_anchor_node children; } ;


 scalar_t__ FUNC_0 (struct pf_anchor_stackframe*) ;
 struct pf_rule* FUNC_1 (struct pf_anchor_stackframe*) ;
 int FUNC_2 (struct pf_anchor_stackframe*) ;
 int FUNC_3 () ;
 TYPE_4__* FUNC_4 (int ,struct pf_anchor_node*,TYPE_4__*) ;
 struct pf_rule* FUNC_5 (int ) ;
 struct pf_rule* FUNC_6 (struct pf_rule*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_7(struct pf_anchor_stackframe *VAR_2, int *VAR_3,
    struct pf_ruleset **VAR_4, int VAR_5, struct pf_rule **VAR_6, struct pf_rule **VAR_7,
    int *VAR_8)
{
 struct pf_anchor_stackframe *VAR_9;
 struct pf_rule *VAR_10;
 int VAR_11 = 0;

 FUNC_3();

 do {
  if (*VAR_3 <= 0)
   break;
  VAR_9 = VAR_2 + *VAR_3 - 1;
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_9->child != ((void*)0)) {
   struct pf_anchor_node *VAR_12;





   VAR_12 = &VAR_10->anchor->children;
   if (VAR_8 != ((void*)0) && *VAR_8) {





    FUNC_2(VAR_9);
    *VAR_8 = 0;
   }
   VAR_9->child = FUNC_4(VAR_1, VAR_12, VAR_9->child);
   if (VAR_9->child != ((void*)0)) {
    *VAR_4 = &VAR_9->child->ruleset;
    *VAR_6 = FUNC_5((*VAR_4)->rules[VAR_5].active.ptr);
    if (*VAR_6 == ((void*)0))
     continue;
    else
     break;
   }
  }
  (*VAR_3)--;
  if (*VAR_3 == 0 && VAR_7 != ((void*)0))
   *VAR_7 = ((void*)0);
  *VAR_4 = VAR_9->rs;
  if (FUNC_0(VAR_9) || (VAR_8 != ((void*)0) && *VAR_8))
   VAR_11 = VAR_10->quick;
  *VAR_6 = FUNC_6(VAR_10, VAR_0);
 } while (*VAR_6 == ((void*)0));

 return (VAR_11);
}
