
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (int VAR_2, int VAR_3, int VAR_4) {
  FUNC_0 (VAR_0 || VAR_1);
  if (VAR_0) {
    return (FUNC_1 (VAR_4) || FUNC_1 (VAR_3)) && (VAR_2 >= 20) && (VAR_2 <= 24);
  } else {
    return (VAR_2 >= 0) && (VAR_2 <= 31);
  }
}
