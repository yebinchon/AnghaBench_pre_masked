
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
struct TYPE_2__ {int mfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ,int*) ;
 TYPE_1__ VAR_16 ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(void)
{
    struct timeval VAR_17;
    fd_set VAR_18;
    int VAR_19;






    FUNC_2("PnP COM device rev 1.0 probe...");


    FUNC_3(VAR_16.mfd, VAR_10, &VAR_19);
    VAR_19 |= VAR_13;
    VAR_19 &= ~VAR_14;
    FUNC_3(VAR_16.mfd, VAR_11, &VAR_19);
    FUNC_6(240000);







    FUNC_3(VAR_16.mfd, VAR_10, &VAR_19);
    FUNC_2("modem status 0%o", VAR_19);
    if ((VAR_19 & VAR_12) == 0)
 return (VAR_3);


    FUNC_5(1200, 1200, (VAR_2 | VAR_1 | VAR_0 | VAR_6));
    VAR_19 = VAR_13 | VAR_14;
    FUNC_3(VAR_16.mfd, VAR_8, &VAR_19);
    FUNC_6(240000);
    VAR_19 = VAR_13;
    FUNC_3(VAR_16.mfd, VAR_9, &VAR_19);
    FUNC_6(240000);


    VAR_19 = VAR_5;
    FUNC_3(VAR_16.mfd, VAR_7, &VAR_19);
    VAR_19 = VAR_14;
    FUNC_3(VAR_16.mfd, VAR_9, &VAR_19);


    FUNC_1(&VAR_18);
    FUNC_0(VAR_16.mfd, &VAR_18);
    VAR_17.tv_sec = 0;
    VAR_17.tv_usec = 240000;
    if (FUNC_4(VAR_4, &VAR_18, ((void*)0), ((void*)0), &VAR_17) > 0) {
 FUNC_2("pnpwakeup1(): valid response in first phase.");
 return (VAR_15);
    }


    VAR_19 = VAR_13 | VAR_14;
    FUNC_3(VAR_16.mfd, VAR_8, &VAR_19);
    FUNC_6(240000);


    VAR_19 = VAR_5;
    FUNC_3(VAR_16.mfd, VAR_7, &VAR_19);
    VAR_19 = VAR_13 | VAR_14;
    FUNC_3(VAR_16.mfd, VAR_9, &VAR_19);


    FUNC_1(&VAR_18);
    FUNC_0(VAR_16.mfd, &VAR_18);
    VAR_17.tv_sec = 0;
    VAR_17.tv_usec = 240000;
    if (FUNC_4(VAR_4, &VAR_18, ((void*)0), ((void*)0), &VAR_17) > 0) {
 FUNC_2("pnpwakeup1(): valid response in second phase.");
 return (VAR_15);
    }

    return (VAR_3);
}
