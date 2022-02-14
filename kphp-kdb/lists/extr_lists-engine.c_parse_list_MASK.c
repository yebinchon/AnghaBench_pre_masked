
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netbuffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (int *VAR_1, int VAR_2, netbuffer_t *VAR_3, int VAR_4, int VAR_5, int *VAR_6) {
  char *VAR_7 = 0, *VAR_8 = 0;

  int VAR_9 = 0x7fffffff, VAR_10 = 0, VAR_11 = 0;
  int VAR_12 = 0;
  *VAR_6 = -1;
  unsigned VAR_13;
  long long VAR_14;
  if (!VAR_4) {
    return 0;
  }
  do {
    if (VAR_7 + 16 >= VAR_8 && VAR_8 < VAR_7 + VAR_4) {
      FUNC_0 (VAR_3, VAR_10);
      FUNC_3 (VAR_3, VAR_4 < 16 ? VAR_4 : 16);
      VAR_7 = FUNC_4 (VAR_3);
      VAR_10 = FUNC_5 (VAR_3);
      if (VAR_10 > VAR_4) {
        VAR_10 = VAR_4;
      }
      VAR_8 = VAR_7 + VAR_10;
      VAR_10 = 0;
    }
    FUNC_2 (VAR_7 < VAR_8);
    VAR_14 = 0;
    VAR_13 = 0x7fffffff;
    if (*VAR_7 == '-' && VAR_7 + 1 < VAR_8) {
      VAR_7++;
      VAR_13++;
      VAR_10++;
      VAR_4--;
    }
    if (*VAR_7 < '0' || *VAR_7 > '9') {
      FUNC_1 (VAR_3, VAR_10 + VAR_4);
      return -1;
    }
    while (VAR_7 < VAR_8 && *VAR_7 >= '0' && *VAR_7 <= '9') {
      VAR_14 = VAR_14*10 + (*VAR_7++ - '0');
      if (VAR_14 > VAR_13) {
        FUNC_1 (VAR_3, VAR_10 + VAR_4);
        return -1;
      }
      VAR_10++;
      VAR_4--;
    }
    if (VAR_11 >= VAR_2 || (VAR_4 > 0 && (VAR_7 == VAR_8))) {
      FUNC_1 (VAR_3, VAR_10 + VAR_4);
      return -1;
    }
    if (VAR_4 > 0) {
      if (VAR_12) {
        if (*VAR_7 != ((VAR_9 == 1) ? ',' : (VAR_9 == VAR_5 + 1) ? '#' : ':')) {
          FUNC_1 (VAR_3, VAR_10 + VAR_4);
          return -1;
        }
      } else {
        if (*VAR_7 == (VAR_5 ? '#' : ',')) {
          VAR_12 = 1;
          *VAR_6 = 0x7fffffff - VAR_9 + 1;
          VAR_9 = VAR_5 + 1;
        } else if (*VAR_7 != ':') {
          FUNC_1 (VAR_3, VAR_10 + VAR_4);
          return -1;
        }
      }
    } else {
      if (!VAR_12 && !VAR_5) {
        VAR_12 = 1;
        *VAR_6 = 0x7fffffff - VAR_9 + 1;
        VAR_9 = VAR_5 + 1;
      }
    }
    VAR_1[VAR_11++] = (VAR_13 & 1 ? VAR_14 : -VAR_14);
    if (!VAR_4) {
      FUNC_0 (VAR_3, VAR_10);
      return VAR_9 == 1 ? VAR_11 : -1;
    }
    FUNC_2 (*VAR_7 == (VAR_9 == 1 ? ',' : (VAR_9 == VAR_5 + 1 ? '#' : ':')));
    VAR_7++;
    VAR_10++;
    if (!--VAR_9) {
      VAR_9 = *VAR_6 + VAR_5;
    }
  } while (--VAR_4 > 0);
  FUNC_2 (!VAR_4);
  FUNC_0 (VAR_3, VAR_10);
  return -1;
}
