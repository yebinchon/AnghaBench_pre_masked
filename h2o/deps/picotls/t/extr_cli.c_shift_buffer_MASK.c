
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t off; scalar_t__ base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_2(ptls_buffer_t *VAR_0, size_t VAR_1)
{
    if (VAR_1 != 0) {
        FUNC_0(VAR_1 <= VAR_0->off);
        if (VAR_1 != VAR_0->off)
            FUNC_1(VAR_0->base, VAR_0->base + VAR_1, VAR_0->off - VAR_1);
        VAR_0->off -= VAR_1;
    }
}
