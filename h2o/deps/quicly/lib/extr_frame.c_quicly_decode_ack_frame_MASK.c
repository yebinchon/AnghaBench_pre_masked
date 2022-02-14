
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ largest_acknowledged; scalar_t__ ack_delay; scalar_t__ smallest_acknowledged; scalar_t__ num_gaps; scalar_t__* ack_block_lengths; scalar_t__* gaps; } ;
typedef TYPE_1__ quicly_ack_frame_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const**,int const*) ;

int FUNC_1(const uint8_t **VAR_3, const uint8_t *VAR_4, quicly_ack_frame_t *VAR_5, int VAR_6)
{
    uint64_t VAR_7, VAR_8, VAR_9, VAR_10;

    if ((VAR_5->largest_acknowledged = FUNC_0(VAR_3, VAR_4)) == VAR_2)
        goto Error;
    if ((VAR_5->ack_delay = FUNC_0(VAR_3, VAR_4)) == VAR_2)
        goto Error;
    if ((VAR_8 = FUNC_0(VAR_3, VAR_4)) == VAR_2)
        goto Error;

    if ((VAR_10 = FUNC_0(VAR_3, VAR_4)) == VAR_2)
        goto Error;
    if (VAR_5->largest_acknowledged < VAR_10)
        goto Error;
    VAR_5->smallest_acknowledged = VAR_5->largest_acknowledged - VAR_10;
    VAR_5->ack_block_lengths[0] = VAR_10 + 1;
    VAR_5->num_gaps = 0;

    for (VAR_7 = 0; VAR_7 != VAR_8; ++VAR_7) {
        if ((VAR_9 = FUNC_0(VAR_3, VAR_4)) == VAR_2)
            goto Error;
        if ((VAR_10 = FUNC_0(VAR_3, VAR_4)) == VAR_2)
            goto Error;
        if (VAR_7 < VAR_0) {
            if (VAR_5->smallest_acknowledged < VAR_9 + VAR_10 + 2)
                goto Error;
            VAR_5->gaps[VAR_7] = VAR_9 + 1;
            VAR_5->ack_block_lengths[VAR_7 + 1] = VAR_10 + 1;
            VAR_5->smallest_acknowledged -= VAR_9 + VAR_10 + 2;
            ++VAR_5->num_gaps;
        }
    }

    if (VAR_6) {

        for (VAR_7 = 0; VAR_7 != 3; ++VAR_7)
            if (FUNC_0(VAR_3, VAR_4) == VAR_2)
                goto Error;
    }
    return 0;
Error:
    return VAR_1;
}
