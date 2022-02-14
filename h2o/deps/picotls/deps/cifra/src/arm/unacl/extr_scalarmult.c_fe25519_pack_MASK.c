
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {unsigned char* as_uint8; } ;
typedef TYPE_1__ fe25519 ;


 int FUNC_0 (TYPE_1__ volatile*) ;

__attribute__((used)) static void
FUNC_1(
    unsigned char VAR_0[32],
    volatile fe25519* VAR_1
)
{
    uint8 VAR_2;

    FUNC_0(VAR_1);

    for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
    {
        VAR_0[VAR_2] = VAR_1->as_uint8[VAR_2];
    }
}
