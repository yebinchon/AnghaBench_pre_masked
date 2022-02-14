
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t capacity; scalar_t__ is_allocated; scalar_t__ off; int * base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (int ) ;

inline void FUNC_1(ptls_buffer_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0));
    VAR_0->base = (uint8_t *)VAR_1;
    VAR_0->off = 0;
    VAR_0->capacity = VAR_2;
    VAR_0->is_allocated = 0;
}
