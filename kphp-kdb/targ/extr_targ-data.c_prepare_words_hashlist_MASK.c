
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_t ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_8 (char*,int) ;

int FUNC_9 (const char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11) {
  int VAR_12;
  static char VAR_13[256];
  if (!VAR_8) {
    VAR_1 = 0;
  }
  if (VAR_7) {
    while (*VAR_7) {
      VAR_12 = FUNC_1 (VAR_7);
      if (VAR_12 < 0) {
        break;
      }
      for (; VAR_12 > 0; VAR_12--) {
        if (*VAR_7++ == 9) {
          VAR_9 >>= 1;
        }
      }
      VAR_12 = FUNC_2 (VAR_7);
      if (VAR_12 < 0 || VAR_1 >= VAR_2) { break; }
      if (!VAR_12) {
        continue;
      }
      if (VAR_12 < VAR_3 && (VAR_9 & 1)) {
 int VAR_14 = VAR_12;
 if (VAR_10) {
   FUNC_4 (VAR_4, VAR_7, VAR_12);
 } else {
   VAR_14 = FUNC_5 (VAR_4, VAR_7, VAR_12);
 }
 VAR_0[VAR_1++] = (FUNC_8 (VAR_4, VAR_14) + VAR_11) | (1ULL << 63);
 if (VAR_10 && VAR_1 < VAR_2) {
   FUNC_7 (VAR_13, 250, VAR_4, VAR_12);
   if (FUNC_6 (VAR_13, VAR_4)) {
     VAR_0[VAR_1++] = (FUNC_8 (VAR_13, -1) + VAR_11) | (1ULL << 63);
     if (VAR_6 > 4) {
       FUNC_0 (VAR_5, "translit: '%s' -> '%s'\n", VAR_4, VAR_13);
     }
   }
 }
      }
      VAR_7 += VAR_12;
    }
  }
  if (VAR_8 <= 0 && VAR_1 > 0) {
    int VAR_15, VAR_16 = 1;
    hash_t VAR_17;
    FUNC_3 (0, VAR_1-1);
    VAR_17 = VAR_0[0];
    for (VAR_15 = 1; VAR_15 < VAR_1; VAR_15++) {
      if (VAR_0[VAR_15] != VAR_17) {
 VAR_0[VAR_16++] = VAR_17 = VAR_0[VAR_15];
      }
    }
    VAR_1 = VAR_16;
  }
  return VAR_1;
}
