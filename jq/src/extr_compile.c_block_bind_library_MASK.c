
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* symbol; int op; struct TYPE_10__* prev; } ;
typedef TYPE_1__ inst ;
struct TYPE_11__ {TYPE_1__* last; } ;
typedef TYPE_2__ block ;
struct TYPE_12__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__,int,int ) ;
 int FUNC_2 (TYPE_2__,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

block FUNC_9(block VAR_3, block VAR_4, int VAR_5, const char *VAR_6) {
  VAR_5 |= VAR_0;
  int VAR_7 = 0;
  int VAR_8 = (VAR_6 == ((void*)0)) ? 0 : FUNC_8(VAR_6);
  char *VAR_9 = FUNC_5(VAR_8+2+1);
  VAR_9[0] = '\0';
  if (VAR_6 != ((void*)0) && VAR_6[0] != '\0') {
    FUNC_7(VAR_9,VAR_6);
    FUNC_7(VAR_9+VAR_8, "::");
    VAR_8 += 2;
  }
  FUNC_0(FUNC_2(VAR_3, VAR_5));
  for (inst *VAR_10 = VAR_3.last; VAR_10; VAR_10 = VAR_10->prev) {
    int VAR_11 = VAR_5;
    char* VAR_12 = VAR_10->symbol;
    char* VAR_13 = FUNC_5(FUNC_8(VAR_10->symbol)+VAR_8+1);
    FUNC_7(VAR_13, VAR_9);
    FUNC_7(VAR_13+VAR_8, VAR_10->symbol);


    if ((FUNC_6(VAR_10->op)->flags & (VAR_2 | VAR_1)))
      VAR_11 = VAR_2 | VAR_0;


    VAR_10->symbol = VAR_13;
    VAR_7 += FUNC_1(FUNC_4(VAR_10), VAR_4, VAR_11, 0);
    VAR_10->symbol = VAR_12;
    FUNC_3(VAR_13);
  }
  FUNC_3(VAR_9);
  return VAR_4;
}
