
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int insert_count; } ;
typedef TYPE_1__ h2o_qpack_decoder_t ;


 scalar_t__* FUNC_0 (scalar_t__*,int ,int) ;

size_t FUNC_1(h2o_qpack_decoder_t *VAR_0, uint8_t *VAR_1)
{
    if (VAR_0->insert_count == 0)
        return 0;

    uint8_t *VAR_2 = VAR_1;
    *VAR_2 = 0;
    VAR_2 = FUNC_0(VAR_2, VAR_0->insert_count, 6);
    VAR_0->insert_count = 0;

    return VAR_2 - VAR_1;
}
