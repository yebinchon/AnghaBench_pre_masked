
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_var_value_t ;
struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct tl_constructor {char* id; int name; int real_id; scalar_t__ right; scalar_t__ left; int type; } ;
struct tl_combinator_tree {int dummy; } ;
struct TYPE_2__ {int len; int text; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,struct tl_combinator_tree**,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int **) ;
 int FUNC_5 (char*,int,char*,char*,...) ;
 int FUNC_6 (char*) ;
 struct tl_constructor* FUNC_7 (int ,char*,int ,int) ;
 struct tl_constructor* FUNC_8 (int ,char*,int ,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct tl_constructor*) ;
 struct tl_constructor* FUNC_12 (int ,int ) ;
 struct tl_constructor* FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (struct tl_constructor*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int * FUNC_17 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_18 (char*) ;

int FUNC_19 (struct tree *VAR_8, int VAR_9) {
  FUNC_2 (VAR_8->type == VAR_7);

  struct tl_constructor *VAR_10 = !VAR_9 ? FUNC_12 (VAR_8->c[0]->text, VAR_8->c[0]->len) : FUNC_13 (VAR_8->c[0]->text, VAR_8->c[0]->len);
  if (!VAR_10) {
    FUNC_0 ("Can not make partial app for undefined combinator\n");
    return 0;
  }




  FUNC_1 (VAR_0);
  FUNC_1 (VAR_1);
  VAR_0 = FUNC_16 (VAR_10->left);
  VAR_1 = FUNC_16 (VAR_10->right);


  tree_var_value_t *VAR_11 = 0;
  FUNC_4 (VAR_10->left, VAR_0, &VAR_11);
  FUNC_4 (VAR_10->right, VAR_1, &VAR_11);
  VAR_11 = FUNC_17 (VAR_11);

  int VAR_12;
  FUNC_10 ();
  for (VAR_12 = 1; VAR_12 < VAR_8->nc; VAR_12++) {
    FUNC_1 (VAR_3);
    FUNC_1 (VAR_4);
    VAR_3 = FUNC_14 (VAR_8->c[VAR_12], 0);
    struct tl_combinator_tree *VAR_13 = 0;
    if (!(VAR_4 = FUNC_3 (VAR_0, &VAR_13, VAR_3))) {
      VAR_2;
    }
    VAR_0 = VAR_4;
    if (!VAR_13) {
      FUNC_0 ("Partial app: not enougth variables (i = %d)\n", VAR_12);
      VAR_2;
    }
    if (!(VAR_4 = FUNC_3 (VAR_1, &VAR_13, VAR_3))) {
      VAR_2;
    }
    FUNC_2 (VAR_4 == VAR_1);
    FUNC_9 (VAR_3, 1);
  }

  static char VAR_14[100000];
  FUNC_5 (VAR_14, 100000, "%s%.*s", VAR_10->id, VAR_6, VAR_5);


  struct tl_constructor *VAR_15 = !VAR_9 ? FUNC_7 (VAR_10->type, VAR_14, FUNC_6 (VAR_14), 1) : FUNC_8 (VAR_10->type, VAR_14, FUNC_6 (VAR_14), 1);
  VAR_15->left = VAR_0;
  VAR_15->right = VAR_1;
  FUNC_5 (VAR_14, 100000, "%s", VAR_10->id);
  VAR_15->real_id = FUNC_18 (VAR_14);
  if (!VAR_15->name) {
    FUNC_11 (VAR_15);
  }
  FUNC_15 (VAR_15);
  return 1;
}
