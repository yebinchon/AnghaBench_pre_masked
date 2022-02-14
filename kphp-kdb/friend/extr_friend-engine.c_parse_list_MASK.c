
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netbuffer_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (int *VAR_0, int VAR_1, netbuffer_t *VAR_2, int VAR_3) {
  char *VAR_4 = 0, *VAR_5 = 0;
  int VAR_6 = 0, VAR_7 = 0, VAR_8;
  if (!VAR_3) {
    return 0;
  }
  do {
    if (VAR_4 + 16 >= VAR_5 && VAR_5 < VAR_4 + VAR_3) {
      FUNC_0 (VAR_2, VAR_6);
      FUNC_3 (VAR_2, VAR_3 < 16 ? VAR_3 : 16);
      VAR_4 = FUNC_4 (VAR_2);
      VAR_6 = FUNC_5 (VAR_2);
      if (VAR_6 > VAR_3) {
        VAR_6 = VAR_3;
      }
      VAR_5 = VAR_4 + VAR_6;
      VAR_6 = 0;
    }
    FUNC_2 (VAR_4 < VAR_5);
    VAR_8 = 0;
    while (VAR_4 < VAR_5 && *VAR_4 >= '0' && *VAR_4 <= '9') {
      if (VAR_8 >= 0x7fffffff / 10) {
        return -1;
      }
      VAR_8 = VAR_8*10 + (*VAR_4++ - '0');
      VAR_6++;
      VAR_3--;
    }
    if (VAR_7 >= VAR_1 || (VAR_3 > 0 && (VAR_4 == VAR_5 || *VAR_4 != ','))) {
      FUNC_1 (VAR_2, VAR_6 + VAR_3);
      return -1;
    }
    VAR_0[VAR_7++] = VAR_8;
    if (!VAR_3) {
      FUNC_0 (VAR_2, VAR_6);
      return VAR_7;
    }
    FUNC_2 (*VAR_4 == ',');
    VAR_4++;
    VAR_6++;
  } while (--VAR_3 > 0);
  FUNC_2 (!VAR_3);
  FUNC_0 (VAR_2, VAR_6);
  return VAR_7;
}
