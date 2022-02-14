
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {char* text; scalar_t__ type; size_t section; struct tl_expression* rnext; struct tl_expression* rtail; int * right_name; int flag_expanded; struct tl_expression* prev; struct tl_expression* next; } ;
struct tl_compiler {int hm_composite_typename; int * hm_combinator; int * hm_magic; } ;


 size_t VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (struct tl_compiler*,struct tl_expression*) ;
 int FUNC_4 (struct tl_expression*) ;
 char* FUNC_5 (struct tl_compiler*,struct tl_expression*,int ) ;
 scalar_t__ FUNC_6 (struct tl_compiler*,struct tl_expression*) ;
 int FUNC_7 (struct tl_compiler*,char*,char*,char*) ;
 struct tl_expression* FUNC_8 (int *,struct tl_expression*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_9 (struct tl_compiler *VAR_4, struct tl_expression *VAR_5) {
  struct tl_expression *VAR_6, *VAR_7;
  for (VAR_6 = VAR_5->next; VAR_6 != VAR_5; VAR_6 = VAR_7) {
    VAR_7 = VAR_6->next;
    if (FUNC_6 (VAR_4, VAR_6) < 0) {
      return -1;
    }
    char *VAR_8 = FUNC_5 (VAR_4, VAR_6, 0);
    if (VAR_8 == ((void*)0)) {
      return -1;
    }
    FUNC_0 (&VAR_6->text);
    VAR_6->text = VAR_8;
    if (FUNC_3 (VAR_4, VAR_6) < 0) {
      return -1;
    }
    if (VAR_6->type == VAR_2) {
      struct tl_expression *VAR_9 = FUNC_8 (&VAR_4->hm_magic[VAR_6->section], VAR_6, 1);
      if (VAR_9 != VAR_6) {
        if (!FUNC_2 (VAR_9->text, VAR_6->text)) {
          if (VAR_3 >= 1) {
            FUNC_1 (VAR_1, "duplicate expression: %s\n", VAR_6->text);
          }
          struct tl_expression *VAR_10 = VAR_6->prev, *VAR_11 = VAR_6->next;
          VAR_10->next = VAR_11; VAR_11->prev = VAR_10;
          FUNC_4 (VAR_6);
          continue;
        } else {
          return FUNC_7 (VAR_4, "magic collision for expressions %s and %s", VAR_9->text, VAR_6->text);
        }
      }

      if (!(VAR_6->flag_expanded)) {
        VAR_9 = FUNC_8 (&VAR_4->hm_combinator[VAR_6->section], VAR_6, 1);
        if (VAR_9 != VAR_6) {
          return FUNC_7 (VAR_4, "combinator collision for expressions %s and %s", VAR_9->text, VAR_6->text);
        }
      }

      if (VAR_6->type == VAR_2 && VAR_6->right_name != ((void*)0) && VAR_6->section == VAR_0) {
        struct tl_expression *VAR_12 = FUNC_8 (&VAR_4->hm_composite_typename, VAR_6, 1);
        if (VAR_12 == VAR_6) {
          VAR_6->rtail = VAR_6;
        } else {
          VAR_12->rtail->rnext = VAR_6;
          VAR_12->rtail = VAR_6;
        }
        VAR_6->rnext = ((void*)0);
      }
    }
  }
  return 0;
}
