
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int largest_acknowledged; scalar_t__ num_gaps; int* ack_block_lengths; int smallest_acknowledged; int* gaps; scalar_t__ ack_delay; } ;
typedef TYPE_1__ quicly_ack_frame_t ;
typedef int pat ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const**,int const*,TYPE_1__*,int ) ;
 int* FUNC_2 (int*,int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
    {
        const uint8_t VAR_2[] = {0x34, 0x00, 0x00, 0x11}, *VAR_3 = VAR_2;
        quicly_ack_frame_t VAR_4;
        FUNC_0(FUNC_1(&VAR_3, VAR_2 + sizeof(VAR_2), &VAR_4, 0) == 0);
        FUNC_0(VAR_3 == VAR_2 + sizeof(VAR_2));
        FUNC_0(VAR_4.largest_acknowledged == 0x34);
        FUNC_0(VAR_4.num_gaps == 0);
        FUNC_0(VAR_4.ack_block_lengths[0] == 0x12);
        FUNC_0(VAR_4.smallest_acknowledged == 0x34 - 0x12 + 1);
    }

    {
        const uint8_t VAR_5[] = {0x34, 0x00, 0x02, 0x00, 0x01, 0x02, 0x03, 0x04}, *VAR_6 = VAR_5;
        quicly_ack_frame_t VAR_7;
        FUNC_0(FUNC_1(&VAR_6, VAR_5 + sizeof(VAR_5), &VAR_7, 0) == 0);
        FUNC_0(VAR_6 == VAR_5 + sizeof(VAR_5));
        FUNC_0(VAR_7.largest_acknowledged == 0x34);
        FUNC_0(VAR_7.num_gaps == 2);
        FUNC_0(VAR_7.ack_block_lengths[0] == 1);
        FUNC_0(VAR_7.gaps[0] == 2);
        FUNC_0(VAR_7.ack_block_lengths[1] == 3);
        FUNC_0(VAR_7.gaps[1] == 4);
        FUNC_0(VAR_7.ack_block_lengths[2] == 5);
        FUNC_0(VAR_7.smallest_acknowledged == 0x34 - 1 - 2 - 3 - 4 - 5 + 1);
    }

    {
        uint8_t VAR_8[1024], *VAR_9 = VAR_8;
        const uint8_t *VAR_10 = VAR_8;
        int VAR_11, VAR_12;
        quicly_ack_frame_t VAR_13;
        VAR_9 = FUNC_2(VAR_9, 0xFA00);
        VAR_9 = FUNC_2(VAR_9, 0);
        VAR_9 = FUNC_2(VAR_9, VAR_0 + 30);
        VAR_9 = FUNC_2(VAR_9, 8);
        for (VAR_11 = 0; VAR_11 < VAR_0 + 30; ++VAR_11) {
            VAR_9 = FUNC_2(VAR_9, VAR_11);
            VAR_9 = FUNC_2(VAR_9, VAR_11 % 10);
        }

        FUNC_0(FUNC_1(&VAR_10, VAR_9, &VAR_13, 0) == 0);
        FUNC_0(VAR_13.largest_acknowledged == 0xFA00);
        FUNC_0(VAR_13.ack_delay == 0);
        FUNC_0(VAR_13.num_gaps == VAR_0);
        FUNC_0(VAR_13.ack_block_lengths[0] == 8 + 1);
        VAR_12 = VAR_13.ack_block_lengths[0];
        for (VAR_11 = 0; VAR_11 < VAR_13.num_gaps; ++VAR_11) {
            FUNC_0(VAR_13.gaps[VAR_11] == VAR_11 + 1);
            FUNC_0(VAR_13.ack_block_lengths[VAR_11 + 1] == (VAR_11 % 10) + 1);
            VAR_12 += VAR_13.gaps[VAR_11] + VAR_13.ack_block_lengths[VAR_11 + 1];
        }
        FUNC_0(VAR_10 == VAR_9);
        FUNC_0(VAR_13.smallest_acknowledged == 0xFA00 - VAR_12 + 1);
    }

    FUNC_3("underflow", VAR_1);
}
