
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ capacity; scalar_t__ off; int is_allocated; int * base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(ptls_buffer_t *VAR_2, size_t VAR_3)
{
    if (VAR_2->base == ((void*)0))
        return VAR_0;

    if (VAR_1 || VAR_2->capacity < VAR_2->off + VAR_3) {
        uint8_t *VAR_4;
        size_t VAR_5 = VAR_2->capacity;
        if (VAR_5 < 1024)
            VAR_5 = 1024;
        while (VAR_5 < VAR_2->off + VAR_3) {
            VAR_5 *= 2;
        }
        if ((VAR_4 = FUNC_0(VAR_5)) == ((void*)0))
            return VAR_0;
        FUNC_1(VAR_4, VAR_2->base, VAR_2->off);
        FUNC_2(VAR_2);
        VAR_2->base = VAR_4;
        VAR_2->capacity = VAR_5;
        VAR_2->is_allocated = 1;
    }

    return 0;
}
