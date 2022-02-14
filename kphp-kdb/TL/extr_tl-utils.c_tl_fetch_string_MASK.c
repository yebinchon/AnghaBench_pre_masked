
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int) ;
 char* FUNC_1 (unsigned int) ;

int FUNC_2 (int *VAR_0, int VAR_1, char **VAR_2, int *VAR_3, int VAR_4) {
  *VAR_2 = ((void*)0);
  int *VAR_5 = VAR_0 + VAR_1;
  if (VAR_0 >= VAR_5) {
    return -1;
  }
  unsigned VAR_6 = *VAR_0;
  if ((VAR_6 & 0xff) < 0xfe) {
    VAR_6 &= 0xff;
    if (VAR_3) {
      *VAR_3 = VAR_6;
    }
    if (VAR_5 >= VAR_0 + (VAR_6 >> 2) + 1) {
      char *VAR_7 = ((char *) VAR_0) + 1;
      if (VAR_4) {
        *VAR_2 = FUNC_1 (VAR_6 + 1);
        FUNC_0 (*VAR_2, VAR_7, VAR_6);
        (*VAR_2)[VAR_6] = 0;
      } else {
        *VAR_2 = VAR_7;
      }
      return (VAR_6 >> 2) + 1;
    } else {
      return -1;
    }
  } else if ((VAR_6 & 0xff) == 0xfe) {
    VAR_6 >>= 8;
    if (VAR_3) {
      *VAR_3 = VAR_6;
    }
    if (VAR_6 >= 0xfe && VAR_5 >= VAR_0 + ((VAR_6 + 7) >> 2)) {
      char *VAR_8 = (char *) &VAR_0[1];
      if (VAR_4) {
        *VAR_2 = FUNC_1 (VAR_6 + 1);
        FUNC_0 (*VAR_2, VAR_8, VAR_6);
        (*VAR_2)[VAR_6] = 0;
      } else {
        *VAR_2 = VAR_8;
      }
      return (VAR_6 + 7) >> 2;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}
