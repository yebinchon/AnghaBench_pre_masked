
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int spell_checker; scalar_t__ russian; int ** stat; } ;
struct TYPE_3__ {int spell_checker; int ** stat; int name; } ;
typedef int AspellWordList ;
typedef int AspellStringEnumeration ;


 TYPE_2__** VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int) ;
 int VAR_2 ;
 int FUNC_7 (char const*) ;
 int VAR_3 ;
 int FUNC_8 (int,char*,char const*,...) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;

int FUNC_9 (char *VAR_6, int VAR_7) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    int VAR_9 = FUNC_0 (VAR_0[VAR_8]->spell_checker, VAR_6, VAR_7);
    if (VAR_9 >= 0) {
      VAR_0[VAR_8]->stat[0][1]++;
      if (VAR_9) {
        VAR_0[VAR_8]->stat[0][0]++;
        return 1;
      }
    }
  }

  if (VAR_4) {
    int VAR_10;
    VAR_5[1]++;
    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
      if ((unsigned char) VAR_6[VAR_10] == 0xe5) {
        VAR_6[VAR_10] = 0xb8;
        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
          if (VAR_0[VAR_8]->russian && FUNC_0 (VAR_0[VAR_8]->spell_checker, VAR_6, VAR_7) == 1) {
            VAR_6[VAR_10] = 0xe5;
            VAR_5[0]++;
            return 1;
          }
        }
        VAR_6[VAR_10] = 0xe5;
      }
    }
  }

  if (!VAR_3) {
    return 0;
  }
  int VAR_11 = FUNC_6 (VAR_6, VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    VAR_1[VAR_8]->stat[1][1]++;
    const AspellWordList *VAR_12 = FUNC_2 (VAR_1[VAR_8]->spell_checker, VAR_6, VAR_7);
    if (VAR_12) {
      AspellStringEnumeration *VAR_13 = FUNC_4 (VAR_12);
      const char *VAR_14;
      int VAR_15 = 0;
      while ( (VAR_14 = FUNC_3 (VAR_13)) != ((void*)0) ) {
        FUNC_8 (3, "suggest: %s, %.*s (%s)\n", VAR_14, VAR_7, VAR_6, VAR_1[VAR_8]->name);
        if (VAR_11 != FUNC_6 (VAR_14, FUNC_7 (VAR_14))) {
          continue;
        }
        VAR_15++;
        break;
      }
      FUNC_5 (VAR_13);
      if (VAR_15) {
        VAR_1[VAR_8]->stat[1][0]++;
        return 0;
      }
    } else {
      FUNC_8 (3, "suggetsions = NULL. %s\n", FUNC_1 (VAR_1[VAR_8]->spell_checker));
    }
  }
  return -1;
}
