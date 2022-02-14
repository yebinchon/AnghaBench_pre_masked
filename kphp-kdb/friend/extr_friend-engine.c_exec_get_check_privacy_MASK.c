
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
typedef int privacy_key_t ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,char*,int,int,int ,int) ;
 int FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (struct connection*,char const*,char*,int) ;
 int FUNC_4 (char const*,char*,int*,int*,int*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  privacy_key_t VAR_11;

  if (FUNC_4 (VAR_4, "%d~%d:%n", &VAR_6, &VAR_7, &VAR_8) >= 2 && (VAR_9 = FUNC_2 (VAR_4+VAR_8, &VAR_11, -1)) > 0) {
    VAR_9 += VAR_8;
    if (!VAR_4[VAR_9]) {
      VAR_8 = FUNC_0 (VAR_6, VAR_7, VAR_11);
      if (VAR_2 > 1) {
        FUNC_1 (VAR_1, "check_privacy(%d,%d,%016x) = %d\n", VAR_6, VAR_7, VAR_11, VAR_8);
      }
      VAR_0[0] = (VAR_8 & -4 ? '?' : '0' + VAR_8);
      VAR_0[1] = 0;

      FUNC_3 (VAR_3, VAR_4, VAR_0, 1);
      return;
    } else if (VAR_4[VAR_9] == ',') {
      VAR_10 = 0;
      while (VAR_10 < 256) {
        VAR_8 = FUNC_0 (VAR_6, VAR_7, VAR_11);
        VAR_0[VAR_10++] = (VAR_8 & -4 ? '?' : '0' + VAR_8);
        if (VAR_2 > 1) {
          FUNC_1 (VAR_1, "check_privacy(%d,%d,%016x) = %d\n", VAR_6, VAR_7, VAR_11, VAR_8);
        }
        if (VAR_4[VAR_9] != ',') {
          break;
        }
        VAR_8 = FUNC_2 (VAR_4+VAR_9+1, &VAR_11, -1);
        if (VAR_8 <= 0) {
          break;
        }
        VAR_9 = VAR_9+VAR_8+1;
      }
      if (!VAR_4[VAR_9]) {
        VAR_0[VAR_10] = 0;
        FUNC_3 (VAR_3, VAR_4, VAR_0, VAR_10);
        return;
      }
    }
  }
  return;
}
