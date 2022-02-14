
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void**,void**,int **,struct tl_tree**) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int **) ;
 int ** FUNC_5 (int *,int ,int) ;
 int VAR_3 ;

void *FUNC_6 (void **VAR_4, void **VAR_5, zval **VAR_6, struct tl_tree **VAR_7) {
  void **VAR_8 = *(VAR_4 ++);
  if (FUNC_1 (VAR_6) != VAR_0) {
    return 0;
  }

  int VAR_9 = FUNC_4 (VAR_6);
  FUNC_2 (VAR_9);

  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    zval **VAR_11 = FUNC_5 (*VAR_6, 0, VAR_10);



    if (!VAR_11) { return 0; }
    *(++VAR_6) = *VAR_11;
    if (FUNC_0 (VAR_8, VAR_5, VAR_6, VAR_7) != VAR_2) {
      -- VAR_6;
      return 0;
    }
    -- VAR_6;
  }
  VAR_1;
}
