
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (struct tl_tree*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct tl_tree* FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;

void *FUNC_7 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  int VAR_6 = FUNC_6 ();



  if (FUNC_5 ()) {
    return 0;
  }
  FUNC_1 (*VAR_4);
  FUNC_2 (*VAR_4, VAR_6);
  int VAR_7 = (long)*(VAR_2 ++);
  if (VAR_5[VAR_7]) {
    FUNC_0 (VAR_5[VAR_7]);
  }
  VAR_5[VAR_7] = FUNC_4 (VAR_6);

  VAR_0;
}
