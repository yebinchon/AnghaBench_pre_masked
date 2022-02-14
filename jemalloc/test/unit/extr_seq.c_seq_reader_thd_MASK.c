
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ thd_data_t ;
struct TYPE_6__ {int* arr; } ;
typedef TYPE_2__ data_t ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_0) {
 thd_data_t *VAR_1 = (thd_data_t *)VAR_0;
 int VAR_2 = 0;
 data_t VAR_3;
 while (VAR_2 < 1000 * 1000 - 1) {
  bool VAR_4 = FUNC_2(&VAR_3, &VAR_1->data);
  if (VAR_4) {
   FUNC_1(&VAR_3);
   FUNC_0(VAR_2, VAR_3.arr[0],
       "Seq read went back in time.");
   VAR_2 = VAR_3.arr[0];
  }
 }
 return ((void*)0);
}
