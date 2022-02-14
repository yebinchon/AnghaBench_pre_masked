
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwdpm_struct {int dummy; } ;
typedef int * iwdpm_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

iwdpm_t FUNC_2(int VAR_0, char **VAR_1, int *VAR_2) {
  iwdpm_t VAR_3 = FUNC_0(sizeof(struct iwdpm_struct));
  if (!VAR_3) {
    return ((void*)0);
  }
  FUNC_1(VAR_3, 0, sizeof(struct iwdpm_struct));
  return VAR_3;
}
