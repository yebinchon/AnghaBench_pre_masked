
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int local_id; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

user *FUNC_2 (int VAR_6) {
  if (VAR_6 <= 0) {
    return ((void*)0);
  }
  if (VAR_6 % VAR_3 != VAR_2) {
    return ((void*)0);
  }
  user **VAR_7 = (user **)FUNC_1 (&VAR_1, &VAR_6);
  if (*VAR_7 == (user *)&VAR_6) {
    FUNC_0 (VAR_0 + 1 < VAR_4);

    *VAR_7 = &VAR_5[++VAR_0];
    (*VAR_7)->id = VAR_6;
    (*VAR_7)->local_id = VAR_0;
  }
  return *VAR_7;
}
