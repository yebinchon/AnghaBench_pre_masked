
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ base; scalar_t__ off; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 size_t FUNC_2 (int ) ;

int FUNC_3(ptls_buffer_t *VAR_0, uint64_t VAR_1)
{
    size_t VAR_2 = FUNC_2(VAR_1);
    int VAR_3;

    if ((VAR_3 = FUNC_0(VAR_0, VAR_2)) != 0)
        return VAR_3;
    VAR_0->off = FUNC_1(VAR_0->base + VAR_0->off, VAR_1) - VAR_0->base;

    return 0;
}
