
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* cat_ver; int fr_tree; int pr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_8__ {int cat; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_9__ {int* List; int y; } ;
typedef TYPE_3__ privacy_t ;
typedef int privacy_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,int) ;

int FUNC_5 (int VAR_5, int VAR_6, privacy_key_t VAR_7) {
  if (VAR_5 < 0 || VAR_6 <= 0 || !VAR_7) {
    return -1;
  }
  if (!VAR_5) {
    VAR_5 = -1;
  }
  if (VAR_5 == VAR_6) {
    return 3;
  }

  user_t *VAR_8 = FUNC_1 (VAR_6);
  if (!VAR_8) {
    return -1;
  }

  privacy_t *VAR_9 = FUNC_3 (VAR_8->pr_tree, VAR_7);
  if (!VAR_9) {
    return -1;
  }

  int *VAR_10 = VAR_9->List, VAR_11 = (VAR_9->y & 0xff);
  if (VAR_11 == 255) {
    VAR_11 = *VAR_10++;
    FUNC_0 (VAR_11 >= 255 && VAR_11 <= VAR_2);
  }
  FUNC_0 (VAR_10[VAR_11] == -1);

  int VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 3, VAR_16 = -1;

  while (VAR_15) {
    VAR_12 = *VAR_10++;
    if (VAR_12 == -1) {
      VAR_15 = 0;
      break;
    }
    if (!VAR_12) {
      continue;
    }
    VAR_13 = VAR_12 & VAR_4;
    if (VAR_12 & VAR_3) {
      if (VAR_13 == VAR_0) {
        break;
      }
      if (VAR_13 == VAR_1) {
        if (VAR_16 == -1) {
          tree_t *VAR_17 = FUNC_4 (VAR_8->fr_tree, VAR_5);
          VAR_16 = (VAR_17 ? VAR_17->cat : 0);
        }
        int VAR_18 = (VAR_16 > 0 ? 1 : FUNC_2 (VAR_6, VAR_5));
        if (VAR_18 > 0) {
          break;
        } else if (VAR_18 < 0) {
          if (VAR_12 >= 0) {
            VAR_14 |= VAR_15 & 1;
          }
          VAR_15 &= 2;
        }
        continue;
      }
      if (VAR_13 != VAR_8->cat_ver[VAR_13 & 0x1f]) {
        VAR_10[-1] = 0;
        continue;
      }
      if (VAR_16 == -1) {
        tree_t *VAR_19 = FUNC_4 (VAR_8->fr_tree, VAR_5);
        VAR_16 = (VAR_19 ? VAR_19->cat : 0);
      }
      if ((VAR_16 >> (VAR_13 & 0x1f)) & 1) {
        break;
      }
    } else if (VAR_13 == VAR_5) {
      break;
    }
  }

  if (VAR_12 >= 0) {
    VAR_14 |= VAR_15;
  }
  return VAR_14;
}
