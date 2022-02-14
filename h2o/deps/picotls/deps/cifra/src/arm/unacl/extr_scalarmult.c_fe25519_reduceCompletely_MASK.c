
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint64 ;
typedef int uint32 ;
struct TYPE_3__ {int* as_uint32; } ;
typedef TYPE_1__ fe25519 ;



__attribute__((used)) static void
FUNC_0(
    volatile fe25519* VAR_0
)
{
    uint32 VAR_1;
    uint32 VAR_2 = VAR_0->as_uint32[7] >>
                                                          31;
    uint64 VAR_3;
    uint8 VAR_4;
    VAR_3 = VAR_2 * 19 + 19;

    for (VAR_4 = 0; VAR_4 < 7; VAR_4++)
    {
        VAR_3 += VAR_0->as_uint32[VAR_4];
        VAR_3 >>= 32;
    }
    VAR_3 += VAR_0->as_uint32[7];

    VAR_1 = (uint32)(VAR_3 >> 31);


    VAR_3 = VAR_1 * 19;

    for (VAR_4 = 0; VAR_4 < 7; VAR_4++)
    {
        VAR_3 += VAR_0->as_uint32[VAR_4];
        VAR_0->as_uint32[VAR_4] = (uint32)VAR_3;
        VAR_3 >>= 32;
    }
    VAR_3 += VAR_0->as_uint32[7];
    VAR_0->as_uint32[7] = VAR_3 & 0x7ffffffful;
}
