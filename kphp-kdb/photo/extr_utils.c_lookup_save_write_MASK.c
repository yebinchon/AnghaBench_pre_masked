
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int*,int) ;

int FUNC_3 (int *VAR_0, int *VAR_1, int VAR_2, char *VAR_3, int VAR_4) {
  char *VAR_5 = VAR_3;

  FUNC_1 (VAR_4 >= (int)sizeof (int));
  FUNC_0 (VAR_3, VAR_2);
  VAR_4 -= sizeof (int);

  FUNC_1 (VAR_4 >= (int)sizeof (int) * 2 * VAR_2);
  int VAR_6 = sizeof (int) * VAR_2;
  FUNC_2 (VAR_3, VAR_0, VAR_6);
  VAR_3 += VAR_6;
  FUNC_2 (VAR_3, VAR_1, VAR_6);
  VAR_3 += VAR_6;

  return VAR_3 - VAR_5;
}
