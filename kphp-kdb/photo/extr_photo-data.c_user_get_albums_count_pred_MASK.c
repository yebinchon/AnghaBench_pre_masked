
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int predicate ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5 (user *VAR_2, predicate *VAR_3) {


  FUNC_0 (FUNC_4 (VAR_2));
  data *VAR_4 = FUNC_3 (VAR_2);

  if (VAR_3 == ((void*)0)) {
    return FUNC_1 (VAR_4, VAR_1, VAR_0, 0);
  } else {
    return FUNC_2 (VAR_4, VAR_1, VAR_0, 0, VAR_3);
  }
}
