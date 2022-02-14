
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; struct string_list* util; } ;
struct string_list {int nr; int strdup_strings; struct string_list_item* items; } ;
struct strbuf {int len; int buf; } ;
struct shortlog {int mailmap; struct string_list list; int file; scalar_t__ wrap_lines; scalar_t__ summary; scalar_t__ sort_by_number; } ;


 int FUNC_0 (struct string_list_item*,int,int ) ;
 struct strbuf VAR_0 ;
 scalar_t__ FUNC_1 (struct string_list_item const*) ;
 int FUNC_2 (struct strbuf*,char const*,struct shortlog*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct string_list*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct string_list*,int) ;

void FUNC_11(struct shortlog *VAR_3)
{
 int VAR_4, VAR_5;
 struct strbuf VAR_6 = VAR_0;

 if (VAR_3->sort_by_number)
  FUNC_0(VAR_3->list.items, VAR_3->list.nr,
        VAR_3->summary ? VAR_1 : VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->list.nr; VAR_4++) {
  const struct string_list_item *VAR_7 = &VAR_3->list.items[VAR_4];
  if (VAR_3->summary) {
   FUNC_4(VAR_3->file, "%6d\t%s\n",
    (int)FUNC_1(VAR_7), VAR_7->string);
  } else {
   struct string_list *VAR_8 = VAR_7->util;
   FUNC_4(VAR_3->file, "%s (%d):\n",
    VAR_7->string, VAR_8->nr);
   for (VAR_5 = VAR_8->nr - 1; VAR_5 >= 0; VAR_5--) {
    const char *VAR_9 = VAR_8->items[VAR_5].string;

    if (VAR_3->wrap_lines) {
     FUNC_9(&VAR_6);
     FUNC_2(&VAR_6, VAR_9, VAR_3);
     FUNC_6(VAR_6.buf, VAR_6.len, 1, VAR_3->file);
    }
    else
     FUNC_4(VAR_3->file, "      %s\n", VAR_9);
   }
   FUNC_7('\n', VAR_3->file);
   VAR_8->strdup_strings = 1;
   FUNC_10(VAR_8, 0);
   FUNC_5(VAR_8);
  }

  VAR_3->list.items[VAR_4].util = ((void*)0);
 }

 FUNC_8(&VAR_6);
 VAR_3->list.strdup_strings = 1;
 FUNC_10(&VAR_3->list, 1);
 FUNC_3(&VAR_3->mailmap);
}
