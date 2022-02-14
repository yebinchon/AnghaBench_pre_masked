
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {size_t len; } ;
struct todo_list {int nr; int alloc; struct todo_item* items; struct strbuf buf; } ;
struct todo_item {int command; size_t offset_in_buf; size_t arg_offset; size_t arg_len; } ;
struct string_list {int nr; TYPE_1__* items; } ;
typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (struct todo_item*,int,int) ;
 int FUNC_1 (struct todo_item*,struct todo_item*,int) ;
 int FUNC_2 (struct todo_item*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct todo_item*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char*) ;
 size_t FUNC_7 (char*) ;
 struct todo_item* FUNC_8 (int,int) ;

void FUNC_9(struct todo_list *VAR_3,
     struct string_list *VAR_4)
{
 struct strbuf *VAR_5 = &VAR_3->buf;
 size_t VAR_6 = VAR_5->len;
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
 struct todo_item *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

 VAR_12 = FUNC_8(VAR_4->nr, sizeof(struct todo_item));
 for (VAR_7 = 0; VAR_7 < VAR_4->nr; VAR_7++) {
  size_t VAR_13 = FUNC_7(VAR_4->items[VAR_7].string);

  FUNC_6(VAR_5, VAR_4->items[VAR_7].string);
  FUNC_5(VAR_5, '\n');

  VAR_12[VAR_7].command = VAR_0;
  VAR_12[VAR_7].offset_in_buf = VAR_6;
  VAR_12[VAR_7].arg_offset = VAR_6 + FUNC_7("exec ");
  VAR_12[VAR_7].arg_len = VAR_13 - FUNC_7("exec ");

  VAR_6 += VAR_13 + 1;
 }
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->nr; VAR_7++) {
  enum todo_command VAR_14 = VAR_3->items[VAR_7].command;
  if (VAR_8 && !FUNC_4(VAR_14)) {
   FUNC_0(VAR_11, VAR_9 + VAR_4->nr, VAR_10);
   FUNC_1(VAR_11 + VAR_9, VAR_12, VAR_4->nr);
   VAR_9 += VAR_4->nr;

   VAR_8 = 0;
  }

  FUNC_0(VAR_11, VAR_9 + 1, VAR_10);
  VAR_11[VAR_9++] = VAR_3->items[VAR_7];

  if (VAR_14 == VAR_2 || VAR_14 == VAR_1)
   VAR_8 = 1;
 }


 if (VAR_8 || VAR_9 == VAR_3->nr) {
  FUNC_0(VAR_11, VAR_9 + VAR_4->nr, VAR_10);
  FUNC_1(VAR_11 + VAR_9, VAR_12, VAR_4->nr);
  VAR_9 += VAR_4->nr;
 }

 FUNC_3(VAR_12);
 FUNC_2(VAR_3->items);
 VAR_3->items = VAR_11;
 VAR_3->nr = VAR_9;
 VAR_3->alloc = VAR_10;
}
