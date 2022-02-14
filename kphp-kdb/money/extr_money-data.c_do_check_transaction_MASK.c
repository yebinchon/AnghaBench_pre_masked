
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transaction_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;

int FUNC_2 (int VAR_0) {
  transaction_t *VAR_1 = FUNC_1 (VAR_0);
  if (!VAR_1) {
    return 0;
  }
  int VAR_2 = FUNC_0 (VAR_1);
  return VAR_2 < 0 ? VAR_2 : 3;
}
