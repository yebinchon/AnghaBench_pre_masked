
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (int,struct sockaddr*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(int VAR_1, struct sockaddr *VAR_2, socklen_t *VAR_3)
{
    int VAR_4;
    FUNC_2(&VAR_0);

    if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3)) == -1)
        goto Exit;
    if (FUNC_4(VAR_4) != 0) {
        FUNC_1(VAR_4);
        VAR_4 = -1;
        goto Exit;
    }

Exit:
    FUNC_3(&VAR_0);
    return VAR_4;
}
