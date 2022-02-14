
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
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int*) ;
 TYPE_1__ VAR_14 ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(void)
{
    struct timeval VAR_15;
    fd_set VAR_16;
    int VAR_17;




    FUNC_2("alternate probe...");

    FUNC_3(VAR_14.mfd, VAR_9, &VAR_17);
    VAR_17 |= VAR_11;
    VAR_17 &= ~VAR_12;
    FUNC_3(VAR_14.mfd, VAR_10, &VAR_17);
    FUNC_6(240000);

    FUNC_5(1200, 1200, (VAR_2 | VAR_1 | VAR_0 | VAR_6));


    VAR_17 = VAR_5;
    FUNC_3(VAR_14.mfd, VAR_7, &VAR_17);
    VAR_17 = VAR_11 | VAR_12;
    FUNC_3(VAR_14.mfd, VAR_8, &VAR_17);


    FUNC_1(&VAR_16);
    FUNC_0(VAR_14.mfd, &VAR_16);
    VAR_15.tv_sec = 0;
    VAR_15.tv_usec = 240000;
    if (FUNC_4(VAR_4, &VAR_16, ((void*)0), ((void*)0), &VAR_15) > 0) {
 FUNC_2("pnpwakeup2(): valid response.");
 return (VAR_13);
    }

    return (VAR_3);
}
