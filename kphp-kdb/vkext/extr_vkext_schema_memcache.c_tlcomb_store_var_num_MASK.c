
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (struct tl_tree*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct tl_tree* FUNC_2 (int) ;
 int FUNC_3 (int **) ;

void *FUNC_4 (void **VAR_1, void **VAR_2, zval **VAR_3, struct tl_tree **VAR_4) {
  int VAR_5 = (long)*(VAR_1 ++);
  int VAR_6 = FUNC_3 (VAR_3);
  if (VAR_4[VAR_5]) {
    FUNC_0 (VAR_4[VAR_5]);
  }
  VAR_4[VAR_5] = FUNC_2 (VAR_6);
  FUNC_1 (VAR_6);
  VAR_0;
}
