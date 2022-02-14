
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {unsigned char* as_uint8; } ;
typedef TYPE_1__ fe25519 ;



__attribute__((used)) static void
FUNC_0(
    volatile fe25519* VAR_0,
    const unsigned char VAR_1[32]
)
{
    uint8 VAR_2;

    for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
    {
        VAR_0->as_uint8[VAR_2] = VAR_1[VAR_2];
    }
    VAR_0->as_uint8[31] &= 0x7f;
}
