
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int quicly_ranges_t ;
struct TYPE_3__ {int ack_delay; int num_gaps; int largest_acknowledged; int* ack_block_lengths; int* gaps; } ;
typedef TYPE_1__ quicly_ack_frame_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const**,int const*,TYPE_1__*,int ) ;
 int const* FUNC_2 (int const*,int const*,int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
    quicly_ranges_t VAR_0;
    uint8_t VAR_1[256], *VAR_2;
    const uint8_t *VAR_3;
    quicly_ack_frame_t VAR_4;

    FUNC_5(&VAR_0);
    FUNC_3(&VAR_0, 0x12, 0x14);


    VAR_2 = FUNC_2(VAR_1, VAR_1 + sizeof(VAR_1), &VAR_0, 63);
    FUNC_0(VAR_2 - VAR_1 == 5);

    VAR_3 = VAR_1 + 1;
    FUNC_0(FUNC_1(&VAR_3, VAR_2, &VAR_4, 0) == 0);
    FUNC_0(VAR_3 == VAR_2);
    FUNC_0(VAR_4.ack_delay == 63);
    FUNC_0(VAR_4.num_gaps == 0);
    FUNC_0(VAR_4.largest_acknowledged == 0x13);
    FUNC_0(VAR_4.ack_block_lengths[0] == 2);

    FUNC_3(&VAR_0, 0x10, 0x11);


    VAR_2 = FUNC_2(VAR_1, VAR_1 + sizeof(VAR_1), &VAR_0, 63);
    FUNC_0(VAR_2 - VAR_1 == 7);

    VAR_3 = VAR_1 + 1;
    FUNC_0(FUNC_1(&VAR_3, VAR_2, &VAR_4, 0) == 0);
    FUNC_0(VAR_3 == VAR_2);
    FUNC_0(VAR_4.ack_delay == 63);
    FUNC_0(VAR_4.num_gaps == 1);
    FUNC_0(VAR_4.largest_acknowledged == 0x13);
    FUNC_0(VAR_4.ack_block_lengths[0] == 2);
    FUNC_0(VAR_4.gaps[0] == 1);
    FUNC_0(VAR_4.ack_block_lengths[1] == 1);

    FUNC_4(&VAR_0);
}
