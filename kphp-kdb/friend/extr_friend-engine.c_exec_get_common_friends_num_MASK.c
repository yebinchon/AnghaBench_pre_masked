
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int*,int ) ;
 int FUNC_2 (struct connection*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct connection*,char const*,int,int,int,int ,int) ;
 int FUNC_4 (char const*,char*,int*,int*) ;
 int* VAR_2 ;

void FUNC_5 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6 = 0;
  int VAR_7 = *VAR_4 == '%';
  int VAR_8 = 0;
  const char *VAR_9 = VAR_4;
  int VAR_10 = VAR_5;
  if ((FUNC_4 (VAR_4, "common_friends_num%d:%n", &VAR_6, &VAR_8) >= 1 && VAR_8 > 0) ||
      (FUNC_4 (VAR_4, "%%common_friends_num%d:%n", &VAR_6, &VAR_8) >= 1 && VAR_8 > 0)) {
    VAR_4 += VAR_8;
    VAR_5 -= VAR_8;
    int VAR_11 = 0;
    if (*VAR_4 == '-') {
      int VAR_12;
      if (FUNC_4 (VAR_4, "%d%n", &VAR_12, &VAR_8) < 1) {
        return;
      }
      if (VAR_8 != VAR_5) {
        return;
      }
      VAR_11 = FUNC_2 (VAR_3, VAR_12);
    } else {
      while (1) {
        if (FUNC_4 (VAR_4, "%d%n", &VAR_2[VAR_11++], &VAR_8) < 1) {
          return;
        }
        VAR_4 += VAR_8;
        VAR_5 -= VAR_8;
        if (!VAR_5) {
          break;
        }
        if (VAR_11 == VAR_0 || *VAR_4 != ',') {
          return;
        }
        VAR_4 ++;
        VAR_5 --;
      }
    }
    FUNC_0 (VAR_11 <= VAR_0);
    FUNC_1 (VAR_6, VAR_11, VAR_2, VAR_1);
    FUNC_3 (VAR_3, VAR_9, VAR_10, 1, -VAR_7, VAR_1, VAR_11);
  }
}
