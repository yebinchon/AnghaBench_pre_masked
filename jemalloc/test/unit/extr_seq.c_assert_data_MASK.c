
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* arr; } ;
typedef TYPE_1__ data_t ;


 int FUNC_0 (int,int,char*) ;

__attribute__((used)) static void
FUNC_1(data_t *VAR_0) {
 int VAR_1 = VAR_0->arr[0];
 for (int VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  FUNC_0(VAR_1, VAR_0->arr[VAR_2], "Data consistency error");
 }
}
