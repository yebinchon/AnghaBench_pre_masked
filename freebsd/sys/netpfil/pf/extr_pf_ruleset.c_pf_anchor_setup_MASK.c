
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_ruleset {TYPE_1__* anchor; } ;
struct pf_rule {int anchor_relative; int anchor_wildcard; TYPE_1__* anchor; } ;
struct TYPE_2__ {char const* path; int refcnt; } ;


 int VAR_0 ;
 struct pf_ruleset* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 char* FUNC_7 (char*,char) ;

int
FUNC_8(struct pf_rule *VAR_1, const struct pf_ruleset *VAR_2,
    const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 struct pf_ruleset *VAR_6;

 VAR_1->anchor = ((void*)0);
 VAR_1->anchor_relative = 0;
 VAR_1->anchor_wildcard = 0;
 if (!VAR_3[0])
  return (0);
 VAR_5 = (char *)FUNC_3(VAR_0);
 if (VAR_5 == ((void*)0))
  return (1);
 if (VAR_3[0] == '/')
  FUNC_6(VAR_5, VAR_3 + 1, VAR_0);
 else {

  VAR_1->anchor_relative = 1;
  if (VAR_2->anchor == ((void*)0) || !VAR_2->anchor->path[0])
   VAR_5[0] = 0;
  else
   FUNC_6(VAR_5, VAR_2->anchor->path, VAR_0);
  while (VAR_3[0] == '.' && VAR_3[1] == '.' && VAR_3[2] == '/') {
   if (!VAR_5[0]) {
    FUNC_1("pf_anchor_setup: .. beyond root\n");
    FUNC_2(VAR_5);
    return (1);
   }
   if ((VAR_4 = FUNC_7(VAR_5, '/')) != ((void*)0))
    *VAR_4 = 0;
   else
    VAR_5[0] = 0;
   VAR_1->anchor_relative++;
   VAR_3 += 3;
  }
  if (VAR_5[0])
   FUNC_5(VAR_5, "/", VAR_0);
  FUNC_5(VAR_5, VAR_3, VAR_0);
 }
 if ((VAR_4 = FUNC_7(VAR_5, '/')) != ((void*)0) && !FUNC_4(VAR_4, "/*")) {
  VAR_1->anchor_wildcard = 1;
  *VAR_4 = 0;
 }
 VAR_6 = FUNC_0(VAR_5);
 FUNC_2(VAR_5);
 if (VAR_6 == ((void*)0) || VAR_6->anchor == ((void*)0)) {
  FUNC_1("pf_anchor_setup: ruleset\n");
  return (1);
 }
 VAR_1->anchor = VAR_6->anchor;
 VAR_1->anchor->refcnt++;
 return (0);
}
