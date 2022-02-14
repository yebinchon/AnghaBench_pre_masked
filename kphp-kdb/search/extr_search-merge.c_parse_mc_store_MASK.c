
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (int,struct connection*,char*,int,int,int,int,int) ;
 int FUNC_1 (char*,char**,int) ;

int FUNC_2 (int VAR_0, struct connection *VAR_1, char *VAR_2, int VAR_3) {
  char *VAR_4, *VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

  while (*VAR_2 == ' ') VAR_2++;
  VAR_4 = VAR_2;
  while (*VAR_2 > ' ') VAR_2++;
  VAR_6 = VAR_2 - VAR_4;
  if (!VAR_6 || *VAR_2 != ' ') return -1;

  VAR_7 = FUNC_1 (VAR_2, &VAR_5, 10);
  if (VAR_5 == VAR_2) return -1;
  VAR_2 = VAR_5;

  VAR_8 = FUNC_1 (VAR_2, &VAR_5, 10);
  if (VAR_5 == VAR_2) return -1;
  VAR_2 = VAR_5;

  VAR_9 = FUNC_1 (VAR_2, &VAR_5, 10);
  if (VAR_5 == VAR_2) return -1;
  VAR_2 = VAR_5;

  VAR_10 = FUNC_1 (VAR_2, &VAR_5, 10);
  if (VAR_5 == VAR_2) { VAR_10 = 0; } else { VAR_2 = VAR_5; }

  while (*VAR_2 == ' ') VAR_2++;
  if (*VAR_2) return -1;

  return FUNC_0 (VAR_0, VAR_1, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
