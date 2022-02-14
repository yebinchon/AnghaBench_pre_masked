
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int,long long) ;

__attribute__((used)) static int FUNC_1 (int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, char *VAR_5, long long VAR_6) {
  if (VAR_1 < 0) {
    return -1;
  }
  if (VAR_1 > 16384) {
    VAR_1 = 16384;
  }

  int VAR_7 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_7 < 0) {
    return -1;
  }
  if (VAR_7 > VAR_1) {
    VAR_7 = VAR_1;
  }
  if (VAR_2 & 7) {
    VAR_7 *= (VAR_2 & 1) + ((VAR_2 >> 1) & 1) + ((VAR_2 >> 2) & 1) + 1;
  }

  return VAR_7;
}
