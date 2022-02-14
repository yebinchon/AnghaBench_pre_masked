
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {scalar_t__ base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_7__ {int size; } ;
typedef TYPE_2__ h2o_buffer_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (TYPE_2__**,scalar_t__) ;
 int * FUNC_1 (int *,size_t,int ,int ,int ) ;

__attribute__((used)) static uint8_t *FUNC_2(h2o_buffer_t **VAR_1, size_t VAR_2, uint8_t VAR_3, uint8_t VAR_4, int32_t VAR_5)
{
    h2o_iovec_t VAR_6 = FUNC_0(VAR_1, VAR_0 + VAR_2);
    (*VAR_1)->size += VAR_0 + VAR_2;
    return FUNC_1((uint8_t *)VAR_6.base, VAR_2, VAR_3, VAR_4, VAR_5);
}
