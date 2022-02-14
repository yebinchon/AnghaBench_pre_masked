
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* src; char* dst; int force; scalar_t__ pattern; } ;
struct refspec {int nr; struct refspec_item* items; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,char const*,char**) ;
 int FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*) ;

int FUNC_4(struct refspec *VAR_0, struct refspec_item *VAR_1)
{
 int VAR_2;
 int VAR_3 = !VAR_1->src;
 const char *VAR_4 = VAR_3 ? VAR_1->dst : VAR_1->src;
 char **VAR_5 = VAR_3 ? &VAR_1->src : &VAR_1->dst;

 if (VAR_3 && !VAR_1->dst)
  FUNC_0("query_refspecs: need either src or dst");

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++) {
  struct refspec_item *VAR_6 = &VAR_0->items[VAR_2];
  const char *VAR_7 = VAR_3 ? VAR_6->dst : VAR_6->src;
  const char *VAR_8 = VAR_3 ? VAR_6->src : VAR_6->dst;

  if (!VAR_6->dst)
   continue;
  if (VAR_6->pattern) {
   if (FUNC_1(VAR_7, VAR_4, VAR_8, VAR_5)) {
    VAR_1->force = VAR_6->force;
    return 0;
   }
  } else if (!FUNC_2(VAR_4, VAR_7)) {
   *VAR_5 = FUNC_3(VAR_8);
   VAR_1->force = VAR_6->force;
   return 0;
  }
 }
 return -1;
}
