
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int quicly_address_t ;
struct TYPE_3__ {int len; scalar_t__ base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int const**,int const*) ;
 scalar_t__ FUNC_1 (int const**) ;

__attribute__((used)) static size_t FUNC_2(quicly_address_t *VAR_2, quicly_address_t *VAR_3, uint8_t *VAR_4, h2o_iovec_t VAR_5)
{
    const uint8_t *VAR_6 = (uint8_t *)VAR_5.base, *VAR_7 = VAR_6 + VAR_5.len;

    if (VAR_7 - VAR_6 < 6)
        goto NotForwarded;
    if (*VAR_6++ != 0x80)
        goto NotForwarded;
    if (FUNC_1(&VAR_6) != VAR_0)
        goto NotForwarded;
    if (!FUNC_0(VAR_2, &VAR_6, VAR_7))
        goto NotForwarded;
    if (!FUNC_0(VAR_3, &VAR_6, VAR_7))
        goto NotForwarded;
    if (VAR_7 - VAR_6 < 1)
        goto NotForwarded;
    *VAR_4 = *VAR_6++;

    return VAR_6 - (const uint8_t *)VAR_5.base;
NotForwarded:
    return VAR_1;
}
