
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Z ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int const*) ;
 int VAR_0 ;
 int FUNC_2 (int,int const*,int,int const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,int const*,int,int const*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ,int,int const*,int,int const*,int*) ;

int FUNC_6 (int VAR_2, const int *VAR_3, int VAR_4, const int *VAR_5) {
  if (VAR_2 && VAR_4 && FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5) > 0) {
    return 0;
  }
  int VAR_6 = VAR_2 ? 0 : FUNC_1 (VAR_2, VAR_3);
  int VAR_7 = VAR_4 ? VAR_0 : FUNC_1 (VAR_4, VAR_5);
  if (VAR_6 == -2 || VAR_7 == -2) {
    return -2;
  }
  int VAR_8[3];
  FUNC_4 (VAR_8, 0, sizeof (VAR_8));
  FUNC_5 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
  if (VAR_8[1] || VAR_8[2]) {
    FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5);
    return -2;
  } else {
    FUNC_0 (VAR_8[0] + VAR_7 - VAR_6 >= 0);
    return VAR_8[0] + VAR_7 - VAR_6;
  }
}
