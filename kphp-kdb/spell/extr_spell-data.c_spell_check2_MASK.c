
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dyn_mark_t ;
struct TYPE_5__ {int name; int spell_checker; } ;
struct TYPE_4__ {int offset; int len; } ;
typedef TYPE_1__ AspellToken ;
typedef int AspellDocumentChecker ;
typedef int AspellCanHaveError ;


 TYPE_3__** VAR_0 ;
 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int ) ;
 int * FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int,char*,...) ;
 char* FUNC_13 (int) ;

int FUNC_14 (const char *VAR_2, int VAR_3[3]) {
  int VAR_4 = FUNC_10 (VAR_2);
  VAR_3[0] = VAR_3[1] = VAR_3[2] = 0;
  dyn_mark_t VAR_5;
  FUNC_5 (VAR_5);
  char *VAR_6 = FUNC_13 (VAR_4 + 3), *VAR_7 = FUNC_13 (VAR_4 + 3);
  FUNC_9 (VAR_6, VAR_2);
  int VAR_8, VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_9 = 0;
    FUNC_12 (3, "%s (%s)\n", VAR_6, VAR_0[VAR_8]->name);
    char *VAR_10 = VAR_7;
    AspellCanHaveError *VAR_11 = FUNC_8 (VAR_0[VAR_8]->spell_checker);
    if (FUNC_2 (VAR_11) != 0) {
      FUNC_12 (1, "%s\n",FUNC_3 (VAR_11));
      return -1;
    }
    AspellDocumentChecker *VAR_12 = FUNC_11 (VAR_11);
    FUNC_1 (VAR_12, VAR_6, -1);
    while (1) {
      AspellToken VAR_13 = FUNC_0 (VAR_12);
      if (!VAR_13.len) {
        break;
      }
      FUNC_12 (3, "%.*s (%s)\n", VAR_13.len, VAR_6 + VAR_13.offset, VAR_0[VAR_8]->name);
      FUNC_7 (VAR_10, VAR_6 + VAR_13.offset, VAR_13.len);
      VAR_10 += VAR_13.len;
      *VAR_10++ = ' ';
      VAR_9++;
    }
    FUNC_12 (3, "words = %d\n", VAR_9);
    *VAR_10 = 0;
    VAR_10 = VAR_6; VAR_6 = VAR_7; VAR_7 = VAR_10;
    FUNC_4 (VAR_12);
    if (!VAR_9) {
      break;
    }
  }
  FUNC_6 (VAR_5);
  VAR_3[0] = VAR_4;
  VAR_3[1] = VAR_9;
  return 0;
}
