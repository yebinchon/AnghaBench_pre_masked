
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
typedef int h2o_buffer_t ;


 int VAR_0 ;
 int * FUNC_0 (int **,int ,int ,int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(h2o_buffer_t **VAR_1, uint32_t VAR_2, int VAR_3, h2o_iovec_t VAR_4)
{
    uint8_t *VAR_5 = FUNC_0(VAR_1, 8 + VAR_4.len, VAR_0, 0, 0);
    VAR_5 = FUNC_1(VAR_5, VAR_2);
    VAR_5 = FUNC_1(VAR_5, (uint32_t)-VAR_3);
    FUNC_2(VAR_5, VAR_4.base, VAR_4.len);
}
