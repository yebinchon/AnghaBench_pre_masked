
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtx; int x; } ;
typedef TYPE_1__ thd_start_arg_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_1) {
 thd_start_arg_t *VAR_2 = (thd_start_arg_t *)VAR_1;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_2->mtx);
  VAR_2->x++;
  FUNC_1(&VAR_2->mtx);
 }
 return ((void*)0);
}
