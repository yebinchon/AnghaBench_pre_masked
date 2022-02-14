
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accelx; int remainx; int accely; int remainy; } ;


 int FUNC_0 (float) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(int VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
    float VAR_5, VAR_6;

    if (VAR_1 == 0 && VAR_2 == 0) {
 *VAR_3 = *VAR_4 = 0;
 return;
    }
    VAR_5 = VAR_1 * VAR_0.accelx + VAR_0.remainx;
    VAR_6 = VAR_2 * VAR_0.accely + VAR_0.remainy;
    *VAR_3 = FUNC_0(VAR_5);
    *VAR_4 = FUNC_0(VAR_6);
    VAR_0.remainx = VAR_5 - *VAR_3;
    VAR_0.remainy = VAR_6 - *VAR_4;
}
