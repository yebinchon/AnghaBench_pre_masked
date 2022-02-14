
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long int_; } ;
struct TYPE_6__ {int mti; unsigned long* mt; TYPE_1__ gen; } ;
typedef TYPE_2__ mt_state ;


 unsigned long VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (TYPE_2__*,unsigned long) ;

unsigned long FUNC_1(mt_state *VAR_4)
{
    unsigned long VAR_5;
    static const unsigned long VAR_6[2]={0x0UL, 128};


    if (VAR_4->mti >= VAR_2) {
        int VAR_7;

        if (VAR_4->mti == VAR_2+1)
            FUNC_0(VAR_4, 5489UL);

        for (VAR_7=0;VAR_7<VAR_2-VAR_1;VAR_7++) {
            VAR_5 = (VAR_4->mt[VAR_7]&VAR_3)|(VAR_4->mt[VAR_7+1]&VAR_0);
            VAR_4->mt[VAR_7] = VAR_4->mt[VAR_7+VAR_1] ^ (VAR_5 >> 1) ^ VAR_6[VAR_5 & 0x1UL];
        }
        for (;VAR_7<VAR_2-1;VAR_7++) {
            VAR_5 = (VAR_4->mt[VAR_7]&VAR_3)|(VAR_4->mt[VAR_7+1]&VAR_0);
            VAR_4->mt[VAR_7] = VAR_4->mt[VAR_7+(VAR_1-VAR_2)] ^ (VAR_5 >> 1) ^ VAR_6[VAR_5 & 0x1UL];
        }
        VAR_5 = (VAR_4->mt[VAR_2-1]&VAR_3)|(VAR_4->mt[0]&VAR_0);
        VAR_4->mt[VAR_2-1] = VAR_4->mt[VAR_1-1] ^ (VAR_5 >> 1) ^ VAR_6[VAR_5 & 0x1UL];

        VAR_4->mti = 0;
    }

    VAR_5 = VAR_4->mt[VAR_4->mti++];


    VAR_5 ^= (VAR_5 >> 11);
    VAR_5 ^= (VAR_5 << 7) & 0x9d2c5680UL;
    VAR_5 ^= (VAR_5 << 15) & 0xefc60000UL;
    VAR_5 ^= (VAR_5 >> 18);

    VAR_4->gen.int_ = VAR_5;

    return VAR_5;
}
