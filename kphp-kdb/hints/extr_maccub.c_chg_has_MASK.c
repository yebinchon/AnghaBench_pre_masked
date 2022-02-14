
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treap ;
typedef int* changes ;


 int FUNC_0 (int ,int) ;

int FUNC_1 (changes VAR_0, int VAR_1) {
  VAR_1 *= 2;


  if ((long)(VAR_0) < 0) {
    if (((-(long)(VAR_0)) & -2) == VAR_1) {
      return (-(long)(VAR_0)) & 1 ? 1 : -1;
    }
    return 0;
  } else

  if (VAR_0) {
    if (VAR_0[0] > 0) {
      int VAR_2, VAR_3 = VAR_0[0];

      for (VAR_2 = 1; VAR_2 <= VAR_3; VAR_2++) {
        if ((VAR_0[VAR_2] & -2) == VAR_1) {
          return VAR_0[VAR_2] & 1 ? 1 : -1;
        }
      }
      return 0;
    } else {
      return FUNC_0 (*(treap *)(VAR_0), VAR_1);
    }

  }
  return 0;
}
