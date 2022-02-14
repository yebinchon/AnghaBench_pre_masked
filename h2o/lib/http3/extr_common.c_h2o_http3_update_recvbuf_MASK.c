
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ bytes; } ;
typedef TYPE_1__ h2o_buffer_t ;


 int FUNC_0 (TYPE_1__**,size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

int FUNC_2(h2o_buffer_t **VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
    size_t VAR_4 = VAR_1 + VAR_3;

    if ((*VAR_0)->size < VAR_4) {
        FUNC_0(VAR_0, VAR_4 - (*VAR_0)->size);
        (*VAR_0)->size = VAR_4;
    }

    FUNC_1((*VAR_0)->bytes + VAR_1, VAR_2, VAR_3);
    return 0;
}
