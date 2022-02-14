
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type_desc ;
struct TYPE_3__ {char* s; int * root; int * token_list; } ;
typedef TYPE_1__ expression ;


 int FUNC_0 (char*,char*) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

char *FUNC_8 (expression *VAR_1, char *VAR_2, type_desc *VAR_3) {
  FUNC_7();
  VAR_0 = VAR_3;

  VAR_1->s = VAR_2;
  VAR_1->token_list = FUNC_5 (VAR_2);

  if (VAR_1->token_list == ((void*)0)) {
    FUNC_0 ("can't split query [%s] into tokens", VAR_2);
  }

  VAR_1->root = FUNC_4 (VAR_1->token_list);
  if (VAR_1->root == ((void*)0)) {
    FUNC_2 (VAR_1->token_list);
    FUNC_0 ("can't parse query [%s] as arithmetic expression", VAR_2);
  }

  int VAR_4 = FUNC_6 (VAR_1->root);
  if (!VAR_4) {
    FUNC_2 (VAR_1->token_list);
    FUNC_1 (VAR_1->root);
    FUNC_0 ("can't parse query [%s] as arithmetic expression", VAR_2);
  }

  VAR_4 = FUNC_3 (VAR_1->root);
  if (!VAR_4) {
    FUNC_2 (VAR_1->token_list);
    FUNC_1 (VAR_1->root);
    FUNC_0 ("can't prepare expression [%s]", VAR_2);
  }

  return ((void*)0);
}
