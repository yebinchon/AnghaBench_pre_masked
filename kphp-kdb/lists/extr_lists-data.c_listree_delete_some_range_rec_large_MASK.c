
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tree_ext_small_t ;
struct TYPE_13__ {int y; scalar_t__ rpos; int x; struct TYPE_13__* right; struct TYPE_13__* left; } ;
typedef TYPE_1__ tree_ext_large_t ;
struct tree_payload {scalar_t__ text; } ;
typedef int listree_t ;
struct TYPE_14__ {int N; int A; } ;
typedef TYPE_2__ listree_direct_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 struct tree_payload* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 TYPE_1__* FUNC_13 (int ,int,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int **,int **,scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;

__attribute__((used)) static tree_ext_large_t *FUNC_18 (tree_ext_large_t **VAR_4, listree_direct_t *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  tree_ext_large_t *VAR_9;
  if (FUNC_6 (*VAR_4) == VAR_0) {
    int VAR_10;
    while (VAR_6 <= VAR_7) {
      if (!FUNC_10 ((listree_t *)VAR_5, VAR_6)) {

        VAR_9 = FUNC_13 (FUNC_4 (VAR_5->A, VAR_6), VAR_10 = FUNC_12 (), FUNC_1 (VAR_5->N - VAR_6, VAR_1));
        if (VAR_10 > VAR_8) {
          return VAR_9;
        }
        *VAR_4 = VAR_9;
        FUNC_15 (FUNC_6 (*VAR_4));
        break;
      }
      VAR_6++;
    }
    if (FUNC_6 (*VAR_4) == VAR_0) {
      return 0;
    }
  }

  tree_ext_large_t *VAR_11 = *VAR_4;

  int VAR_12 = VAR_5->N;
  int VAR_13 = VAR_12 - FUNC_2(VAR_11);
  int VAR_14 = VAR_13 - 1;
  int VAR_15 = VAR_13 + (FUNC_3(VAR_11) != VAR_2);

  FUNC_7 (VAR_15 <= VAR_7 + 1);

  VAR_9 = FUNC_18 (&VAR_11->left, VAR_5, VAR_6, VAR_14, VAR_11->y);
  if (VAR_9) {
    if (VAR_9->y > VAR_8) {
      FUNC_15 (FUNC_6 (VAR_11));
      return VAR_9;
    }
    FUNC_16 ((tree_ext_small_t **) &VAR_9->left, (tree_ext_small_t **) &VAR_9->right, FUNC_6 (VAR_11), VAR_9->x);
    *VAR_4 = VAR_11 = VAR_9;
    FUNC_15 (FUNC_6 (VAR_11));
    VAR_13 = VAR_12 - FUNC_2(VAR_11);
    VAR_15 = VAR_13 + 1;
  }




  int VAR_16 = 0;

  if (FUNC_3(VAR_11) != VAR_1 && !FUNC_11 (FUNC_6 (VAR_11))) {
    if (FUNC_3 (VAR_11) == VAR_2) {
      VAR_16 = 1;
    } else {
      struct tree_payload *VAR_17 = FUNC_5 (VAR_11);
      if (VAR_17->text) {
        if (VAR_17->text != VAR_3) {
          FUNC_17 (VAR_17->text, FUNC_9 (VAR_17->text));
        }
        VAR_17->text = 0;
      }
      VAR_11->rpos |= VAR_1;
    }

  }




  while (1) {
    VAR_9 = FUNC_18 (&VAR_11->right, VAR_5, VAR_15, VAR_7, VAR_11->y);
    if (VAR_16) {
      *VAR_4 = FUNC_0 (FUNC_14 (FUNC_6 (VAR_11->left), FUNC_6(VAR_11->right)));
      FUNC_8 (VAR_11);
      VAR_11 = *VAR_4;
      VAR_16 = 0;
    } else {
      FUNC_15 (FUNC_6 (VAR_11));
    }
    if (!VAR_9 || VAR_9->y > VAR_8) {
      return VAR_9;
    }
    FUNC_16 ((tree_ext_small_t **) &VAR_9->left, (tree_ext_small_t **) &VAR_9->right, FUNC_6 (VAR_11), VAR_9->x);
    *VAR_4 = VAR_11 = VAR_9;
    FUNC_15 (FUNC_6 (VAR_11));
    VAR_13 = VAR_12 - FUNC_2(VAR_11);
    FUNC_7 (VAR_13 >= VAR_15);
    VAR_15 = VAR_13 + 1;
  }
}
