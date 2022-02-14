
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accelx; int accely; float expoffset; float remainx; float remainy; int expoaccel; } ;


 int FUNC_0 (float) ;
 float FUNC_1 (float,int ) ;
 TYPE_1__ VAR_0 ;
 float FUNC_2 (float) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
    static float VAR_5[3] = {0.0, 0.0, 0.0};
    float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    if (VAR_1 == 0 && VAR_2 == 0) {
 *VAR_3 = *VAR_4 = 0;
 return;
    }
    VAR_6 = VAR_1 * VAR_0.accelx;
    VAR_7 = VAR_2 * VAR_0.accely;
    VAR_8 = FUNC_2((VAR_6 * VAR_6) + (VAR_7 * VAR_7));
    VAR_8 = (VAR_8 + VAR_5[0] + VAR_5[1] + VAR_5[2]) / 4;
    VAR_9 = VAR_8 / VAR_0.expoffset;
    VAR_10 = FUNC_1(VAR_9, VAR_0.expoaccel) / VAR_9;
    VAR_6 = VAR_6 * VAR_10 + VAR_0.remainx;
    VAR_7 = VAR_7 * VAR_10 + VAR_0.remainy;
    *VAR_3 = FUNC_0(VAR_6);
    *VAR_4 = FUNC_0(VAR_7);
    VAR_0.remainx = VAR_6 - *VAR_3;
    VAR_0.remainy = VAR_7 - *VAR_4;
    VAR_5[2] = VAR_5[1];
    VAR_5[1] = VAR_5[0];
    VAR_5[0] = VAR_8;
}
