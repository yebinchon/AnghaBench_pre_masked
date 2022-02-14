
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int,int,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct connection*,char const*,int,int,int,int ,int) ;
 int FUNC_3 (char const*,char*,int*,int *,int*) ;
 int * VAR_2 ;

void FUNC_4 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
 FUNC_0 (VAR_3);
  int VAR_6 = 0;
  int VAR_7 = *VAR_4 == '%';
  int VAR_8 = 0;
  const char *VAR_9 = VAR_4;
  int VAR_10 = VAR_5;
  if ((FUNC_3 (VAR_4, "common_friends%d,%d%n", &VAR_6, &VAR_2[0], &VAR_8) >= 2 && VAR_8 > 0) ||
      (FUNC_3 (VAR_4, "%%common_friends%d,%d%n", &VAR_6, &VAR_2[0], &VAR_8) >= 2 && VAR_8 > 0)) {
    if (VAR_5 != VAR_8) {
     return;
    }
   int VAR_11 = FUNC_1 (VAR_6, 1, VAR_2, VAR_1, VAR_0);
   FUNC_2 (VAR_3, VAR_9, VAR_10, VAR_11, -VAR_7, VAR_1, VAR_11);
  }
}
