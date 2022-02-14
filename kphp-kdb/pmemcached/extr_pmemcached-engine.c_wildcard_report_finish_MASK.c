
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Out; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,char const*,int,int,int,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char const*,int,int,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int FUNC_5 (int *,char*,int) ;

void FUNC_6 (const char *VAR_7, int VAR_8) {
  if (VAR_6 == '#') {
    if (VAR_0) {
      FUNC_1 (VAR_3 + VAR_4, "}", 1);
      VAR_4 ++;
    } else {
      VAR_4 ++;
      FUNC_5 (&VAR_2->Out, "}\r\n", 3);
    }
    if (VAR_0) {
      static char VAR_9[12];
      FUNC_3 (VAR_9, "%09d", VAR_5);
      FUNC_1 (VAR_3 + 2, VAR_9, 9);
      FUNC_2 (VAR_2, VAR_7, VAR_8, VAR_3, VAR_4, 1);
      FUNC_4 (VAR_7, VAR_8 - 1, VAR_3, VAR_4);
      FUNC_0 (VAR_3);
      VAR_1 --;
    } else {
      static char VAR_10[12];
      FUNC_3 (VAR_10, "%09d", VAR_4);
      FUNC_1 (VAR_3, VAR_10, 9);
      FUNC_3 (VAR_10, "%09d", VAR_5);
      FUNC_1 (VAR_3 + 13, VAR_10, 9);
    }
  }
}
