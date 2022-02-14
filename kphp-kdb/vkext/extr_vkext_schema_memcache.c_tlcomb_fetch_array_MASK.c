
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (void**,void**,int **,struct tl_tree**) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_6 (void*) ;

void *FUNC_7 (void **VAR_3, void **VAR_4, zval **VAR_5, struct tl_tree **VAR_6) {
  void **VAR_7 = *(VAR_3 ++);
  int VAR_8 = FUNC_6 (*(--VAR_4));



  FUNC_1 (*VAR_4);
  int VAR_9;
  FUNC_0 (*VAR_5);
  FUNC_4 (*VAR_5);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    *(++VAR_5) = 0;
    if (FUNC_2 (VAR_7, VAR_4, VAR_5, VAR_6) != VAR_1) {
      -- VAR_5;
      return 0;
    }
    FUNC_3 (*(VAR_5 - 1), VAR_9, *VAR_5);
    -- VAR_5;
  }
  VAR_0;
}
