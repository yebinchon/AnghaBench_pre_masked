
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (unsigned char*,int*) ;
 int* VAR_0 ;

int FUNC_3 (const char *VAR_1, int *VAR_2) {
  int VAR_3, VAR_4 = FUNC_2 ((unsigned char *)VAR_1, VAR_0);
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    VAR_0[VAR_3] = FUNC_0 (VAR_0[VAR_3]);
  }
  VAR_0[VAR_4] = -1;
  return FUNC_1 (VAR_4, VAR_2);
}
