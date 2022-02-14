
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct tl_tree*) ;

void *FUNC_4 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  int VAR_6 = FUNC_2 ();



  if (FUNC_1 ()) {
    return 0;
  }
  int VAR_7 = (long)*(VAR_2 ++);
  if (VAR_6 != FUNC_3 (VAR_5[VAR_7])) {
    return 0;
  }
  VAR_0;
}
