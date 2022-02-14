
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user ;
typedef int data ;
struct TYPE_3__ {int v_raw_len; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *,int,TYPE_1__*,size_t,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_5 ;

int FUNC_6 (user *VAR_6, int VAR_7, int VAR_8, char *VAR_9, int VAR_10) {


  FUNC_1 (FUNC_5 (VAR_6) && !VAR_5);

  int VAR_11 = FUNC_3 (VAR_6, VAR_7);
  FUNC_1 (VAR_11 != 0);

  data *VAR_12 = FUNC_4 (VAR_6, VAR_11);
  if (VAR_12 == ((void*)0)) {
    return 0;
  }

  VAR_4 = 0;
  VAR_3[VAR_4].v_raw_len = VAR_10;
  FUNC_0 (VAR_8 ? VAR_1 : VAR_0, VAR_2, VAR_9);

  FUNC_2 (VAR_12, VAR_7, VAR_3, VAR_4, 1);

  return 1;
}
