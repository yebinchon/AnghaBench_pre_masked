
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_async_t ;


 int FUNC_0 (int ,char*,double) ;
 int VAR_0 ;

void FUNC_1(uv_async_t *VAR_1) {
    double VAR_2 = *((double*) VAR_1->data);
    FUNC_0(VAR_0, "Downloaded %.2f%%\n", VAR_2);
}
