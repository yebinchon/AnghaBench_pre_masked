
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int data ;
typedef int actual_object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int const,int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

int FUNC_6 (user *VAR_0, int VAR_1, const int VAR_2, actual_object *VAR_3) {
  FUNC_0 (FUNC_5 (VAR_0));

  int VAR_4 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_4 == 0) {
    FUNC_1 ("no album found (pid->aid)\n");
    return -1;
  }
  data *VAR_5 = FUNC_4 (VAR_0, VAR_4);
  if (VAR_5 == ((void*)0)) {
    FUNC_1 ("no album data found\n");
    return -1;
  }
  return FUNC_3 (VAR_5, VAR_1, VAR_2, VAR_3);
}
