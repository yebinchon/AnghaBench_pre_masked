
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int ** FUNC_1 (int *,char*,int) ;
 int VAR_1 ;

void *FUNC_2 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  char *VAR_6 = *(VAR_2 ++);
  int VAR_7 = (long)*(VAR_2 ++);




  zval **VAR_8 = FUNC_1 (*VAR_4, VAR_6, VAR_7);




  if (!VAR_8) { return 0; }
  *(++VAR_4) = *VAR_8;
  VAR_0;
}
