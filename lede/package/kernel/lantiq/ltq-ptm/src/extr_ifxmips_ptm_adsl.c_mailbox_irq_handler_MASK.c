
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ vlddes; } ;
struct TYPE_5__ {TYPE_1__* itf; } ;
struct TYPE_4__ {int napi; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int * VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
    unsigned int VAR_9;
    int VAR_10;

    VAR_9 = FUNC_0(VAR_3);
    FUNC_1(VAR_9, VAR_4);
    VAR_9 &= FUNC_0(VAR_2);

    while ( (VAR_10 = FUNC_4(VAR_9)) >= 0 ) {
        VAR_9 ^= 1 << VAR_10;

        if ( VAR_10 >= 16 ) {

            FUNC_2(1 << VAR_10, 0, VAR_2);
            VAR_10 -= 16;
            if ( VAR_10 < VAR_1 )
                FUNC_7(VAR_5[VAR_10]);
        }
        else {





            FUNC_2(1 << VAR_10, 0, VAR_2);
            FUNC_6(&VAR_6.itf[VAR_10].napi);

        }
    }

    return VAR_0;
}
