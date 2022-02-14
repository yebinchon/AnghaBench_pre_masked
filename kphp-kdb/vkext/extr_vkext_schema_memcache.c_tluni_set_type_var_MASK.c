
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (struct tl_tree*) ;
 int FUNC_1 (struct tl_tree*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tl_tree*) ;

void *FUNC_3 (void **VAR_1, void **VAR_2, zval **VAR_3, struct tl_tree **VAR_4) {
  long VAR_5 = (long)*(VAR_1 ++);
  if (VAR_4[VAR_5]) {
    FUNC_0 (VAR_4[VAR_5]);
  }
  VAR_4[VAR_5] = 0;

  VAR_4[VAR_5] = *(--VAR_2);
  if (FUNC_2 (VAR_4[VAR_5])) { return 0; }
  FUNC_1 (VAR_4[VAR_5]);
  VAR_0;
}
