
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int text; unsigned int extra; int num; int level; struct tree* right; struct tree* left; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct tree*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,...) ;
 int VAR_1 ;

void FUNC_3 (struct tree *VAR_2, int VAR_3) {
  if (!VAR_2) {
    return;
  }
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_2->text);
  if (VAR_2->text != VAR_3) {
    unsigned VAR_4 = FUNC_1 (VAR_2, VAR_3);
    if (VAR_4 >= VAR_2->extra) {
      VAR_2->text = VAR_3;
      VAR_2->extra = VAR_4;
    }
  }
  if (VAR_3 != VAR_2->text) {
    if (VAR_2->text != -1) {
      if (!VAR_0) {
        FUNC_2 ("%u %d %c%c\n", VAR_2->num, VAR_2->level, (char)(VAR_2->text >> 8), (char)(VAR_2->text & 255));
      } else if (VAR_0 == 1) {
        FUNC_2 ("%u %d %02d\n", VAR_2->num, VAR_2->level, VAR_2->text);
      } else if (VAR_0 == 2) {
        if (VAR_2->text & 255) {
          FUNC_2 ("%u %d %c%c/%c%c\n", VAR_2->num, VAR_2->level, (char)(VAR_2->text >> 24), (char)(VAR_2->text >> 16), (char )(VAR_2->text >> 8), (char)(VAR_2->text));
        } else {
          FUNC_2 ("%u %d %c%c\n", VAR_2->num, VAR_2->level, (char)(VAR_2->text >> 24), (char)(VAR_2->text >> 16));
        }
      } else {
        FUNC_0 (0);
      }
    } else {
      if (!VAR_0 || VAR_0 == 2) {
        FUNC_2 ("%u %d %c%c\n", VAR_2->num, VAR_2->level, '?', '?');
      } else if (VAR_0 == 1) {
        FUNC_2 ("%u %d 00\n", VAR_2->num, VAR_2->level);
      } else {
        FUNC_0 (0);
      }
    }
    VAR_1 ++;
  }
  FUNC_3 (VAR_2->left, VAR_2->text);
  FUNC_3 (VAR_2->right, VAR_2->text);
}
