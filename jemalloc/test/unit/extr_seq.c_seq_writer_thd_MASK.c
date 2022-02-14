
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
typedef TYPE_1__ thd_data_t ;
typedef int local_data ;
typedef int data_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_0) {
 thd_data_t *VAR_1 = (thd_data_t *)VAR_0;
 data_t VAR_2;
 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 for (int VAR_3 = 0; VAR_3 < 1000 * 1000; VAR_3++) {
  FUNC_2(&VAR_2, VAR_3);
  FUNC_1(&VAR_1->data, &VAR_2);
 }
 return ((void*)0);
}
