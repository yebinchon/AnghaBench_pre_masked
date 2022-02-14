
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t max_buffer_size; } ;
typedef TYPE_1__ h2o_httpclient_ctx_t ;


 size_t VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(h2o_httpclient_ctx_t *VAR_1)
{
    size_t VAR_2 = VAR_1->max_buffer_size;
    if (VAR_2 > VAR_0)
        VAR_2 = VAR_0;
    return (uint32_t)VAR_2;
}
