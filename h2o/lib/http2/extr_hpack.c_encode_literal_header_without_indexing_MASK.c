
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static uint8_t *FUNC_1(uint8_t *VAR_0, const h2o_iovec_t *VAR_1, const h2o_iovec_t *VAR_2)
{

    *VAR_0++ = 0;
    VAR_0 += FUNC_0(VAR_0, VAR_1->base, VAR_1->len);
    VAR_0 += FUNC_0(VAR_0, VAR_2->base, VAR_2->len);
    return VAR_0;
}
