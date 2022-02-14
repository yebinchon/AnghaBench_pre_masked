
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treeref_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int*,int) ;
 int VAR_2 ;

treeref_t FUNC_3 (int VAR_3) {
  FUNC_0 (VAR_3 >= 0);
  if (!VAR_3) {
    return 0;
  }
  FUNC_0 (FUNC_1 (VAR_3 * 8) >= VAR_3 * 8);
  int *VAR_4 = (int *) VAR_1;
  VAR_1 += VAR_3 * 8;
  if (!VAR_2) {
    return FUNC_2 (VAR_0, VAR_4, VAR_3);
  }
  return 0;
}
