
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netrule {int type; unsigned int ip; int mask1; int mask2; int level1; int level2; } ;


 int FUNC_0 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,...) ;

int FUNC_1 (char *VAR_0, struct netrule *VAR_1) {
  unsigned VAR_2,VAR_3,VAR_4,VAR_5;
  unsigned VAR_6, VAR_7;
  int VAR_8 = 0;
  if (FUNC_0 (VAR_0, "%u.%u.%u.%u/%u /%u", &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7) == 6) {
    VAR_8 = 2;
  } else if (FUNC_0 (VAR_0, "%u.%u.%u.%u/%u", &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6) == 5) {
    VAR_8 = 1;
  }
  if (VAR_8) {
    if (VAR_2 >= 256 || VAR_3 >= 256 || VAR_4 >= 256 || VAR_5 >= 256 || VAR_6 >= 32 || (VAR_8 == 2 && VAR_7 >= 32)) {
      return 0;
    }
    VAR_1->type = VAR_8;
    VAR_1->ip = (VAR_2 << 24) + (VAR_3 << 16) + (VAR_4 << 8) + VAR_5;
    VAR_1->mask1 = (1 << (32 - VAR_6)) - 1;
    VAR_1->mask2 = (1 << (32 - VAR_7)) - 1;
    VAR_1->level1 = 32 - VAR_6;
    VAR_1->level2 = 32 - VAR_7;
    return 1;
  } else {
    return 0;
  }
}
