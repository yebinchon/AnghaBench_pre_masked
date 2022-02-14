
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_5__ {int* as_uint32; } ;
typedef TYPE_1__ fe25519 ;



__attribute__((used)) static void
FUNC_0(
    fe25519* VAR_0,
    const fe25519* VAR_1,
    const fe25519* VAR_2
)
{
    uint16 VAR_3 = 0;
    uint64 VAR_4 = 0;



    VAR_4 = VAR_1->as_uint32[7];
    VAR_4 += VAR_2->as_uint32[7];
    VAR_0->as_uint32[7] = ((uint32)VAR_4) & 0x7ffffffful;

    VAR_4 = ((uint32)(VAR_4 >> 31)) * 19;

    for (VAR_3 = 0; VAR_3 < 7; VAR_3 += 1)
    {
        VAR_4 += VAR_1->as_uint32[VAR_3];
        VAR_4 += VAR_2->as_uint32[VAR_3];

        VAR_0->as_uint32[VAR_3] = (uint32)VAR_4;
        VAR_4 >>= 32;
    }
    VAR_4 += VAR_0->as_uint32[7];
    VAR_0->as_uint32[7] = (uint32)VAR_4;
}
