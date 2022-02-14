
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct refspec_item {char* src; char* dst; scalar_t__ pattern; } ;
struct refspec {int nr; struct refspec_item* items; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,char const*,char**) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct string_list*,char const*) ;
 int FUNC_4 (struct string_list*,char*) ;

__attribute__((used)) static void FUNC_5(struct refspec *VAR_0,
        struct refspec_item *VAR_1,
        struct string_list *VAR_2)
{
 int VAR_3;
 int VAR_4 = !VAR_1->src;

 if (VAR_4 && !VAR_1->dst)
  FUNC_0("query_refspecs_multiple: need either src or dst");

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  struct refspec_item *VAR_5 = &VAR_0->items[VAR_3];
  const char *VAR_6 = VAR_4 ? VAR_5->dst : VAR_5->src;
  const char *VAR_7 = VAR_4 ? VAR_5->src : VAR_5->dst;
  const char *VAR_8 = VAR_4 ? VAR_1->dst : VAR_1->src;
  char **VAR_9 = VAR_4 ? &VAR_1->src : &VAR_1->dst;

  if (!VAR_5->dst)
   continue;
  if (VAR_5->pattern) {
   if (FUNC_1(VAR_6, VAR_8, VAR_7, VAR_9))
    FUNC_4(VAR_2, *VAR_9);
  } else if (!FUNC_2(VAR_8, VAR_6)) {
   FUNC_3(VAR_2, VAR_7);
  }
 }
}
