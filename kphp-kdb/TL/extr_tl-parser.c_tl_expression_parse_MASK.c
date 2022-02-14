
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tl_expression {char* text; scalar_t__ type; scalar_t__ section; unsigned int magic; TYPE_1__* right; void* right_name; TYPE_2__* left; struct tl_expression* next; } ;
struct tl_compiler {int errors; struct tl_expression* expr; } ;
struct TYPE_5__ {char* text; } ;
struct TYPE_4__ {scalar_t__ next; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 void* FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,unsigned int*,char*) ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (struct tl_compiler*,struct tl_expression*,char*,int) ;
 int FUNC_7 (struct tl_expression*,struct tl_expression*) ;
 scalar_t__ FUNC_8 (struct tl_expression*) ;
 int FUNC_9 (struct tl_compiler*,char*,char*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_11 (struct tl_compiler *VAR_5, struct tl_expression *VAR_6) {
  char *VAR_7 = FUNC_5 (VAR_6->text, '=');
  if (VAR_7 == ((void*)0)) {
    VAR_6->left = FUNC_6 (VAR_5, VAR_6, VAR_6->text, 1);
    if (VAR_6->left == ((void*)0)) {
      return -1;
    }
    VAR_6->right = ((void*)0);
    VAR_6->type = VAR_3;
    if (VAR_6->section) {
      return FUNC_9 (VAR_5, "polymorphic instance in the '---functions---' section, expr: %s", VAR_6->text);
    }
    struct tl_expression *VAR_8 = VAR_5->expr[VAR_1].next;
    while (VAR_8 != VAR_6) {
      FUNC_0 (VAR_8 != &VAR_5->expr[VAR_1]);
      if (VAR_8->type == VAR_2 && FUNC_10 (VAR_8->right, VAR_6->left)) {
        FUNC_7 (VAR_6, VAR_8);
        return 0;
      }
      VAR_8 = VAR_8->next;
    }
    return FUNC_9 (VAR_5, "don't find polymorphic rule, expr: %s", VAR_6->text);
  }
  if (VAR_7 == VAR_6->text || VAR_7[-1] != ' ' || VAR_7[1] != ' ') {
    return FUNC_9 (VAR_5, "'=' should be surrounded by spaces, expr: %s", VAR_6->text);
  }
  if (FUNC_5 (VAR_7 + 1, '=') != ((void*)0)) {
    return FUNC_9 (VAR_5, "'=' occures multiple times, expr: %s", VAR_6->text);
  }

  char *VAR_9 = FUNC_3 (VAR_6->text, 0, VAR_7 - VAR_6->text - 1);
  VAR_6->left = FUNC_6 (VAR_5, VAR_6, VAR_9, 0);
  FUNC_1 (&VAR_9);

  if (VAR_6->left == ((void*)0)) {
    return FUNC_9 (VAR_5, "empty lhs, expr: %s\n", VAR_6->text);
  }

  char *VAR_10 = FUNC_5 (VAR_6->left->text, '#');
  if (VAR_10 != ((void*)0)) {
    unsigned int VAR_11 = 0;
    char VAR_12;
    int VAR_13 = FUNC_4 (VAR_10 + 1, "%x%c", &VAR_11, &VAR_12);
    if (VAR_13 != 1) {
      return FUNC_9 (VAR_5, "can't parse combinator magic number, expr: %s", VAR_6->text);
    }
    VAR_6->magic = VAR_11;
    char *VAR_14 = VAR_6->left->text;
    VAR_6->left->text = FUNC_3 (VAR_14, 0, VAR_10 - VAR_14);
    FUNC_1 (&VAR_14);
  }
  VAR_6->type = VAR_4;
  VAR_6->right = FUNC_6 (VAR_5, VAR_6, VAR_7 + 1, VAR_6->section ? 0 : 1);
  if (VAR_6->right == ((void*)0)) {
    if (!VAR_5->errors) {
      return FUNC_9 (VAR_5, "empty rhs, expr: %s\n", VAR_6->text);
    }
    return -1;
  }

  if (VAR_6->section == VAR_0) {
    VAR_6->right_name = FUNC_2 (VAR_6->right);
    return 0;
  }


  if (FUNC_8 (VAR_6)) {
    VAR_6->type = VAR_2;
    return 0;
  }

  if (VAR_6->right->next) {
    return FUNC_9 (VAR_5, "rhs contains more than one word, but it isn't polymorhic (args should be in ['alpha', 'beta', ...]), expr: %s\n", VAR_6->text);
  }

  VAR_6->right_name = FUNC_2 (VAR_6->right);

  return 0;
}
