
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int nl_pid; int nl_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int pid_t ;
typedef int l_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (struct sockaddr_nl*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(pid_t *VAR_4)
{
    struct sockaddr_nl VAR_5;
    socklen_t VAR_6;

    int VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_1);
    if(VAR_7 < 0)
    {
        return -1;
    }

    FUNC_3(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.nl_family = VAR_0;
    if(FUNC_0(VAR_7, (struct sockaddr *)&VAR_5, sizeof(VAR_5)) < 0)
    {
        FUNC_1(VAR_7);
        return -1;
    }

    VAR_6 = sizeof(VAR_5);
    if(FUNC_2(VAR_7, (struct sockaddr *)&VAR_5, &VAR_6) < 0)
    {
        FUNC_1(VAR_7);
        return -1;
    }
    *VAR_4 = VAR_5.nl_pid;

    return VAR_7;
}
