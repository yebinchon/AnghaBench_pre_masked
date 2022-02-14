
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int field ;
typedef int data ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int *,int) ;

inline int FUNC_4 (data *VAR_0, int VAR_1, field *VAR_2, int VAR_3, int VAR_4) {


  FUNC_0 (VAR_0 != ((void*)0));
  int VAR_5 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_5 == -1) {
    return 0;
  }

  if (!VAR_4 && FUNC_1 (VAR_0, VAR_1) != 0) {
    return 0;
  }

  return FUNC_3 (VAR_0, VAR_5, VAR_2, VAR_3);
}
