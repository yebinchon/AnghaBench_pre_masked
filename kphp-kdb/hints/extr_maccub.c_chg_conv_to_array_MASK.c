
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treap ;
typedef scalar_t__* changes ;


 int FUNC_0 (int ,int*) ;

int FUNC_1 (changes VAR_0, int *VAR_1) {

  if ((long)(VAR_0) < 0) {
    VAR_1[0] = -(long)(VAR_0);
    return 1;
  } else

  if (VAR_0) {
    if (VAR_0[0] > 0) {
      int VAR_2, VAR_3;
      for (VAR_3 = VAR_0[0]; !VAR_0[VAR_3]; VAR_3--) ;
      for (VAR_2 = VAR_3; VAR_2 >= 1; VAR_2--) {
        *VAR_1++ = VAR_0[VAR_2];
      }
      return VAR_3;
    } else {
      return FUNC_0 (*(treap *)(VAR_0), VAR_1);
    }
  }
  return 0;
}
