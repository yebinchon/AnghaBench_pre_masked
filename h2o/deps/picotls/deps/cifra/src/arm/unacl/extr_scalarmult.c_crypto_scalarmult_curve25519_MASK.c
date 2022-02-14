
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_6__ {unsigned char* as_uint8; } ;
struct TYPE_7__ {int nextScalarBitToProcess; size_t previousProcessedBit; int xp; int zp; int x0; int zq; int xq; int * pXp; int * pZp; int * pZq; int * pXq; TYPE_1__ s; } ;
typedef TYPE_2__ ST_curve25519ladderstepWorkingState ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (unsigned char*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned char const*) ;

int
FUNC_11(
    unsigned char* VAR_0,
    const unsigned char* VAR_1,
    const unsigned char* VAR_2
)
{
    ST_curve25519ladderstepWorkingState VAR_3;
    unsigned char VAR_4;



    for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
    {
        VAR_3.s.as_uint8 [VAR_4] = VAR_1[VAR_4];
    }




    VAR_3.s.as_uint8 [0] &= 248;

    VAR_3.s.as_uint8 [31] &= 127;
    VAR_3.s.as_uint8 [31] |= 64;


    FUNC_10 (&VAR_3.x0, VAR_2);



    FUNC_8 (&VAR_3.zq);
    FUNC_3 (&VAR_3.xq, &VAR_3.x0);

    FUNC_8(&VAR_3.xp);
    FUNC_9(&VAR_3.zp);

    VAR_3.nextScalarBitToProcess = 254;
    VAR_3.previousProcessedBit = 0;






    while (VAR_3.nextScalarBitToProcess >= 0)

    {
     uint8 VAR_5 = VAR_3.nextScalarBitToProcess >> 3;
     uint8 VAR_6 = VAR_3.nextScalarBitToProcess & 7;
        uint8 VAR_7;
        uint8 VAR_8;

        VAR_7 = 1 & (VAR_3.s.as_uint8 [VAR_5] >> VAR_6);
        VAR_8 = VAR_7 ^ VAR_3.previousProcessedBit;
        VAR_3.previousProcessedBit = VAR_7;
        FUNC_0(&VAR_3, VAR_8);
        FUNC_2(&VAR_3);
        VAR_3.nextScalarBitToProcess --;
    }

    FUNC_0(&VAR_3,VAR_3.previousProcessedBit);
    FUNC_4 (&VAR_3.zp, &VAR_3.zp, &VAR_3.xq, &VAR_3.zq, &VAR_3.x0);
    FUNC_5(&VAR_3.xp, &VAR_3.xp, &VAR_3.zp);
    FUNC_7(&VAR_3.xp);

    FUNC_6 (VAR_0, &VAR_3.xp);


    return 0;
}
