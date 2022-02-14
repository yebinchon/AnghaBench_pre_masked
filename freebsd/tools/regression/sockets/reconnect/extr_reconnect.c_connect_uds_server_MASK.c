
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
typedef int ifsun ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sockaddr_un*,char const*) ;
 int FUNC_3 (struct sockaddr_un*) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, const char *VAR_1)
{
    struct sockaddr_un VAR_2;
    int VAR_3;

    FUNC_2(&VAR_2, VAR_1);

    VAR_3 = FUNC_0(VAR_0, FUNC_3(&VAR_2), sizeof(VAR_2));
    if (VAR_3 < 0)
        FUNC_1(1, "can't connect to a socket");
}
