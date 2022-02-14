
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
struct TYPE_2__ {int mfd; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_9 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(char *VAR_5)
{
    struct timeval VAR_6;
    fd_set VAR_7;
    int VAR_8;
    int VAR_9;
    char VAR_10;

    if (!FUNC_6() && !FUNC_7()) {






 VAR_9 = VAR_2 | VAR_3;
 FUNC_5(VAR_4.mfd, VAR_1, &VAR_9);
 return (0);
    }


    VAR_8 = -1;
    VAR_9 = 0;
    FUNC_10(240000);
    while (FUNC_8(VAR_4.mfd, &VAR_10, 1) == 1) {

 VAR_5[VAR_9++] = VAR_10;
 if ((VAR_10 == 0x08) || (VAR_10 == 0x28)) {
     FUNC_4("begin-id %02x", VAR_10);
     VAR_8 = VAR_9 - 1;
     break;
 }
 FUNC_4("%c %02x", VAR_10, VAR_10);
 if (VAR_9 >= 256)
     break;
    }
    if (VAR_8 < 0) {

 goto connect_idle;
    }

    ++VAR_10;
    for (;;) {
 FUNC_1(&VAR_7);
 FUNC_0(VAR_4.mfd, &VAR_7);
 VAR_6.tv_sec = 0;
 VAR_6.tv_usec = 240000;
 if (FUNC_9(VAR_0, &VAR_7, ((void*)0), ((void*)0), &VAR_6) <= 0)
     break;

 FUNC_8(VAR_4.mfd, &VAR_5[VAR_9], 1);
 if (VAR_5[VAR_9++] == VAR_10)
     break;
 if (VAR_9 >= 256)
     break;
    }
    if (VAR_8 > 0) {
 VAR_9 -= VAR_8;
 FUNC_3(&VAR_5[VAR_8], &VAR_5[0], VAR_9);
    }

    FUNC_4("len:%d, '%-*.*s'", VAR_9, VAR_9, VAR_9, VAR_5);

    if (VAR_5[VAR_9 - 1] == VAR_10)
 return (VAR_9);






connect_idle:


    return (FUNC_2(VAR_9, 0));
}
