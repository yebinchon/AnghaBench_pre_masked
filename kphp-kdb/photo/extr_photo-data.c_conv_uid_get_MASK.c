
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int * VAR_4 ;

user *FUNC_2 (int VAR_5) {
  if (VAR_5 == 0) {
    return ((void*)0);
  }
  if (FUNC_0 (VAR_5) % VAR_3 != VAR_2) {
    return ((void*)0);
  }
  if (VAR_1) {
    return VAR_4;
  }

  user **VAR_6 = (user **)FUNC_1 (&VAR_0, &VAR_5);
  if (VAR_6 == ((void*)0)) {
    return ((void*)0);
  }
  return *VAR_6;
}
