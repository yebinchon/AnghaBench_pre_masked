
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* dst; char* src; scalar_t__ matching; scalar_t__ pattern; scalar_t__ force; } ;
struct refspec {int nr; struct refspec_item* items; } ;
struct ref {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,char const*,char**) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(const struct refspec *VAR_1, const struct ref *VAR_2,
      int VAR_3, int VAR_4,
      const struct refspec_item **VAR_5)
{
 const struct refspec_item *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_1->nr; VAR_8++) {
  const struct refspec_item *VAR_10 = &VAR_1->items[VAR_8];
  if (VAR_10->matching &&
      (VAR_9 == -1 || VAR_10->force)) {
   VAR_9 = VAR_8;
   continue;
  }

  if (VAR_10->pattern) {
   const char *VAR_11 = VAR_10->dst ? VAR_10->dst : VAR_10->src;
   int VAR_12;
   if (VAR_4 == VAR_0)
    VAR_12 = FUNC_0(VAR_10->src, VAR_2->name, VAR_11, &VAR_7);
   else
    VAR_12 = FUNC_0(VAR_11, VAR_2->name, VAR_10->src, &VAR_7);
   if (VAR_12) {
    VAR_9 = VAR_8;
    break;
   }
  }
 }
 if (VAR_9 == -1)
  return ((void*)0);

 VAR_6 = &VAR_1->items[VAR_9];
 if (VAR_6->matching) {





  if (!VAR_3 && !FUNC_1(VAR_2->name, "refs/heads/"))
   return ((void*)0);
  VAR_7 = FUNC_2(VAR_2->name);
 }
 if (VAR_5)
  *VAR_5 = VAR_6;
 return VAR_7;
}
