
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int * as_uint32; } ;
typedef TYPE_1__ fe25519 ;



__attribute__((used)) static void
FUNC_0(
    fe25519* VAR_0,
    const fe25519* VAR_1
)
{
    uint32 VAR_2;

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    {
        VAR_0->as_uint32[VAR_2] = VAR_1->as_uint32[VAR_2];
    }
}
