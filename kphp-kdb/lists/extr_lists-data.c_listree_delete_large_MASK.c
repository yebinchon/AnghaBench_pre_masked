
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int y; int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct TYPE_15__ {int rpos; } ;
typedef TYPE_2__ tree_ext_large_t ;
struct tree_payload {int text; } ;
typedef int object_id_t ;
struct TYPE_16__ {scalar_t__ N; TYPE_2__** root; } ;
typedef TYPE_3__ listree_direct_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 struct tree_payload* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;


 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 TYPE_2__* FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18 (listree_direct_t *VAR_4, object_id_t VAR_5) {
  tree_ext_large_t **VAR_6 = VAR_4->root;
  int VAR_7;
  tree_ext_large_t *VAR_8 = FUNC_0 (FUNC_16 (FUNC_4 (*VAR_6), VAR_5));

  if (FUNC_4(VAR_8) == VAR_1) {
    VAR_7 = FUNC_6 (VAR_4, VAR_5);
    FUNC_5 (VAR_7 > 0 && FUNC_12 (FUNC_8 (VAR_4, VAR_4->N - VAR_7), VAR_5));
    tree_ext_small_t *VAR_9 = FUNC_4 (FUNC_11 (VAR_5, FUNC_10 (), FUNC_1 (VAR_7, VAR_2)));
    *VAR_6 = FUNC_0 (FUNC_15 (FUNC_4 (*VAR_6), VAR_9->x, VAR_9->y, VAR_9));
  } else {
    struct tree_payload *VAR_10;
    switch (FUNC_2(VAR_8)) {

    case 128:
      VAR_10 = FUNC_3 (VAR_8);
      if (VAR_10->text) {
        if (VAR_10->text != VAR_3) {
          FUNC_17 (VAR_10->text, FUNC_9 (VAR_10->text));
        }
        VAR_10->text = 0;
      }
      VAR_8->rpos |= VAR_2;
      FUNC_5 (FUNC_13 (FUNC_4 (*VAR_6), VAR_5, -1) == FUNC_4(VAR_8));
      break;
    case 129:
      VAR_0 = 0;
      *VAR_6 = FUNC_0 (FUNC_14 (FUNC_4 (*VAR_6), VAR_5));
      FUNC_5 (VAR_0 == FUNC_4(VAR_8));
      FUNC_7 (VAR_8);
      break;
    default:
      FUNC_5 (0);
    }
  }
}
