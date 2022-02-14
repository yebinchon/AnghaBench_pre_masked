
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct connection*,char const*,int) ;

__attribute__((used)) static int FUNC_1 (struct connection *VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_8 == VAR_3) {
    VAR_4++;
    return FUNC_0 (VAR_6, VAR_7, 2);
  }
  if (VAR_8 == VAR_2) {
    VAR_4++;
    return FUNC_0 (VAR_6, VAR_7, 3);
  }
  if (VAR_8 == VAR_1) {
    VAR_4++;
    return FUNC_0 (VAR_6, VAR_7, 0);
  }
  if (VAR_8 == VAR_0) {
    VAR_4++;
    return FUNC_0 (VAR_6, VAR_7, 1);
  }
  VAR_5++;
  return 0;
}
