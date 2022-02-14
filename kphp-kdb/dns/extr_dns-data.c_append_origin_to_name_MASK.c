
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* origin; int origin_len; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 size_t VAR_1 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4 (char *VAR_2, int VAR_3) {
  char *VAR_4 = VAR_0[VAR_1].origin;
  FUNC_1 (VAR_4);
  int VAR_5 = VAR_0[VAR_1].origin_len;
  char *VAR_6 = FUNC_0 (VAR_3 + VAR_5 + 1);
  FUNC_3 (VAR_6, VAR_2, VAR_3);
  VAR_6[VAR_3] = '.';
  FUNC_3 (VAR_6 + VAR_3 + 1, VAR_4, VAR_5);
  VAR_5 += VAR_3 + 1;
  if (VAR_2[0] == '@' && VAR_3 == 1) {
    VAR_6 += 2;
    VAR_5 -= 2;
  }
  return FUNC_2 (VAR_6, VAR_5, 1);
}
