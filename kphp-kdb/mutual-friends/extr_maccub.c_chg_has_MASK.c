
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treap ;
typedef scalar_t__* changes ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;

int FUNC_2 (changes VAR_0, int VAR_1) {
  VAR_1 *= 2;


  if ((long)(VAR_0) < 0) {
    if (((-(long)(VAR_0)) & -2) == VAR_1) {
      return (-(long)(VAR_0)) & 1 ? 1 : -1;
    }
    return 0;
  } else

  if (VAR_0) {
    if (VAR_0[0] > 0) {
      int VAR_2 = 0, VAR_3, VAR_4 = FUNC_0 (VAR_0[0]);;
      for (VAR_3 = 1; VAR_3 <= VAR_4; VAR_3++) {
        if ((VAR_0[VAR_3] & -2) == VAR_1) {
          return VAR_0[VAR_3] & 1 ? 1 : -1;
        }
      }
      return VAR_2;
    } else {
      return FUNC_1 (*(treap *)(VAR_0), VAR_1);
    }

  }
  return 0;
}
