
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_4__ {int* as_uint32; } ;
typedef TYPE_1__ fe25519 ;



__attribute__((used)) static void
FUNC_0(
    fe25519* VAR_0,
    fe25519* VAR_1,
    int VAR_2
)
{
    int32 VAR_3 = VAR_2;
    uint32 VAR_4;

    VAR_3 = -VAR_3;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    {
     uint32 VAR_5 = VAR_0->as_uint32[VAR_4];
     uint32 VAR_6 = VAR_1->as_uint32[VAR_4];
     uint32 VAR_7 = VAR_5;

     VAR_5 ^= VAR_3 & (VAR_6 ^ VAR_5);
     VAR_6 ^= VAR_3 & (VAR_6 ^ VAR_7);


     VAR_0->as_uint32[VAR_4] = VAR_5;
     VAR_1->as_uint32[VAR_4] = VAR_6;
    }
}
