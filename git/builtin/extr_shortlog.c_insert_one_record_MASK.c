
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int * util; } ;
struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct shortlog {char* common_repo_prefix; scalar_t__ summary; int list; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct string_list_item*) ;
 int FUNC_1 (struct strbuf*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (struct strbuf*,int *) ;
 void* FUNC_7 (char const*,char) ;
 int FUNC_8 (int *,char*) ;
 struct string_list_item* FUNC_9 (int *,char const*) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char const*) ;
 int * FUNC_12 (int,int) ;

__attribute__((used)) static void FUNC_13(struct shortlog *VAR_1,
         const char *VAR_2,
         const char *VAR_3)
{
 struct string_list_item *VAR_4;

 VAR_4 = FUNC_9(&VAR_1->list, VAR_2);

 if (VAR_1->summary)
  VAR_4->util = (void *)(FUNC_0(VAR_4) + 1);
 else {
  const char *VAR_5 = VAR_1->common_repo_prefix;
  char *VAR_6, *VAR_7;
  struct strbuf VAR_8 = VAR_0;
  const char *VAR_9;


  while (*VAR_3 && FUNC_2(*VAR_3))
   VAR_3++;
  VAR_9 = FUNC_7(VAR_3, '\n');
  if (!VAR_9)
   VAR_9 = VAR_3 + FUNC_10(VAR_3);
  if (FUNC_5(VAR_3, "[PATCH")) {
   char *VAR_10 = FUNC_7(VAR_3, ']');
   if (VAR_10 && (!VAR_9 || VAR_10 < VAR_9))
    VAR_3 = VAR_10 + 1;
  }
  while (*VAR_3 && FUNC_2(*VAR_3) && *VAR_3 != '\n')
   VAR_3++;
  FUNC_1(&VAR_8, VAR_3, " ");
  VAR_6 = FUNC_6(&VAR_8, ((void*)0));

  if (VAR_5) {
   int VAR_11 = FUNC_10(VAR_5);
   if (VAR_11 > 5) {
    while ((VAR_7 = FUNC_11(VAR_6, VAR_5)) != ((void*)0)) {
     int VAR_12 = FUNC_10(VAR_7) - VAR_11;
     FUNC_3(VAR_7, "/.../", 5);
     FUNC_4(VAR_7 + 5, VAR_7 + VAR_11, VAR_12 + 1);
    }
   }
  }

  if (VAR_4->util == ((void*)0))
   VAR_4->util = FUNC_12(1, sizeof(struct string_list));
  FUNC_8(VAR_4->util, VAR_6);
 }
}
