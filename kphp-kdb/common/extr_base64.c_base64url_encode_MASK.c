
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (unsigned char const* const,int,int*) ;
 char* VAR_0 ;

int FUNC_3 (const unsigned char *const VAR_1, int VAR_2, char *VAR_3, int VAR_4) {
  int VAR_5, VAR_6 = 0;
  char VAR_7[4];
  for (VAR_5 = 0; VAR_5 < VAR_2; ) {
    int VAR_8 = VAR_5;
    int VAR_9 = FUNC_2 (VAR_1, VAR_2, &VAR_5);
    VAR_9 <<= 8;
    VAR_9 |= FUNC_2 (VAR_1, VAR_2, &VAR_5);
    VAR_9 <<= 8;
    VAR_9 |= FUNC_2 (VAR_1, VAR_2, &VAR_5);
    int VAR_10 = VAR_5 - VAR_8;
    FUNC_0 (VAR_10 > 0 && VAR_10 <= 3);
    int VAR_11;
    for (VAR_11 = 3; VAR_11 >= 0; VAR_11--) {
      VAR_7[VAR_11] = VAR_0[VAR_9 & 63];
      VAR_9 >>= 6;
    }
    VAR_10++;
    if (VAR_6 + VAR_10 >= VAR_4) {
      return -1;
    }
    FUNC_1 (&VAR_3[VAR_6], VAR_7, VAR_10);
    VAR_6 += VAR_10;
  }
  if (VAR_6 >= VAR_4) {
    return -1;
  }
  VAR_3[VAR_6++] = 0;
  return 0;
}
