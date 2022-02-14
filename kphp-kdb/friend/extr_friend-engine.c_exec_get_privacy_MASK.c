
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
typedef int privacy_key_t ;


 scalar_t__ FUNC_0 (char const*,int *,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct connection*,char const*,char*,int) ;
 int FUNC_3 (char const*,char*,int*,int*) ;
 char* VAR_0 ;

void FUNC_4 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  int VAR_4, VAR_5;
  privacy_key_t VAR_6;

  if (FUNC_3 (VAR_2, "privacy%d_%n", &VAR_4, &VAR_5) >= 1 && FUNC_0 (VAR_2+VAR_5, &VAR_6, 1) > 0) {
    VAR_5 = FUNC_1 (VAR_0, VAR_4, VAR_6);
    if (VAR_5 >= 0) {
      FUNC_2 (VAR_1, VAR_2, VAR_0, VAR_5);
    } else {
      FUNC_2 (VAR_1, VAR_2, "?", 1);
    }
    return;
  }
  return;
}
