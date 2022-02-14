
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn_target {int dummy; } ;


 struct conn_target* VAR_0 ;
 int VAR_1 ;
 struct conn_target* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct conn_target*) ;
 int FUNC_1 (int,int,struct conn_target*) ;

int FUNC_2 (int VAR_5, int VAR_6, struct conn_target *VAR_7) {
  if (VAR_5 == VAR_3 && VAR_6 == VAR_4 && VAR_7 == VAR_2) {
    return VAR_1;
  }
  if (VAR_1 != -1) {
    struct conn_target *VAR_8 = &VAR_0[VAR_1];
    FUNC_0 (VAR_8);
  }
  VAR_3 = VAR_5;
  VAR_4 = VAR_6;
  VAR_2 = VAR_7;
  VAR_1 = FUNC_1 (VAR_5, VAR_6, VAR_7);

  return VAR_1;
}
