
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int vidclk; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_8__ {double avdelay; double avdiff; } ;
struct TYPE_10__ {TYPE_1__ stat; } ;
typedef TYPE_3__ FFPlayer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 double FUNC_0 (int ,double) ;
 double FUNC_1 (int ,double) ;
 int FUNC_2 (int *,int ,char*,double,double) ;
 scalar_t__ FUNC_3 (double) ;
 double FUNC_4 (int *) ;
 double FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (double) ;

__attribute__((used)) static double FUNC_8(FFPlayer *VAR_6, double VAR_7, VideoState *VAR_8)
{
    double VAR_9, VAR_10 = 0;


    if (FUNC_6(VAR_8) != VAR_5) {


        VAR_10 = FUNC_4(&VAR_8->vidclk) - FUNC_5(VAR_8);




        VAR_9 = FUNC_0(VAR_4, FUNC_1(VAR_3, VAR_7));

        if (!FUNC_7(VAR_10) && FUNC_3(VAR_10) < VAR_1) {
            if (VAR_10 <= -VAR_9)
                VAR_7 = FUNC_0(0, VAR_7 + VAR_10);
            else if (VAR_10 >= VAR_9 && VAR_7 > VAR_2)
                VAR_7 = VAR_7 + VAR_10;
            else if (VAR_10 >= VAR_9)
                VAR_7 = 2 * VAR_7;
        }
    }

    if (VAR_6) {
        VAR_6->stat.avdelay = VAR_7;
        VAR_6->stat.avdiff = VAR_10;
    }





    return VAR_7;
}
