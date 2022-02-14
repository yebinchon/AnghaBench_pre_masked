
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int largest_acknowledged; int num_gaps; int* ack_block_lengths; scalar_t__ smallest_acknowledged; } ;
typedef TYPE_1__ quicly_ack_frame_t ;
typedef int pat ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const**,int const*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    quicly_ack_frame_t VAR_0;

    {
        const uint8_t VAR_1[] = {0, 0, 0, 0}, *VAR_2 = VAR_1;
        FUNC_0(FUNC_1(&VAR_2, VAR_1 + sizeof(VAR_1), &VAR_0, 0) == 0);
        FUNC_0(VAR_2 == VAR_1 + sizeof(VAR_1));
        FUNC_0(VAR_0.largest_acknowledged == 0);
        FUNC_0(VAR_0.num_gaps == 0);
        FUNC_0(VAR_0.ack_block_lengths[0] == 1);
        FUNC_0(VAR_0.smallest_acknowledged == 0);
    }
    {
        const uint8_t VAR_3[] = {0, 0, 0, 1}, *VAR_4 = VAR_3;
        FUNC_0(FUNC_1(&VAR_4, VAR_3 + sizeof(VAR_3), &VAR_0, 0) != 0);
    }

    {
        const uint8_t VAR_5[] = {2, 0, 1, 0, 0, 0}, *VAR_6 = VAR_5;
        FUNC_0(FUNC_1(&VAR_6, VAR_5 + sizeof(VAR_5), &VAR_0, 0) == 0);
        FUNC_0(VAR_6 == VAR_5 + sizeof(VAR_5));
        FUNC_0(VAR_0.largest_acknowledged == 2);
        FUNC_0(VAR_0.num_gaps == 1);
        FUNC_0(VAR_0.ack_block_lengths[0] == 1);
        FUNC_0(VAR_0.ack_block_lengths[1] == 1);
        FUNC_0(VAR_0.smallest_acknowledged == 0);
    }

    {
        const uint8_t VAR_7[] = {2, 0, 1, 0, 0, 1}, *VAR_8 = VAR_7;
        FUNC_0(FUNC_1(&VAR_8, VAR_7 + sizeof(VAR_7), &VAR_0, 0) != 0);
    }
    {
        const uint8_t VAR_9[] = {2, 0, 1, 0, 3, 0}, *VAR_10 = VAR_9;
        FUNC_0(FUNC_1(&VAR_10, VAR_9 + sizeof(VAR_9), &VAR_0, 0) != 0);
    }
}
