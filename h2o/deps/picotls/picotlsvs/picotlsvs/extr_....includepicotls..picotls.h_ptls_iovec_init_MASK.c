
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t len; int * base; } ;
typedef TYPE_1__ ptls_iovec_t ;



inline ptls_iovec_t FUNC_0(const void *VAR_0, size_t VAR_1)
{



    ptls_iovec_t VAR_2;
    VAR_2.base = (uint8_t *)VAR_0;
    VAR_2.len = VAR_1;
    return VAR_2;
}
