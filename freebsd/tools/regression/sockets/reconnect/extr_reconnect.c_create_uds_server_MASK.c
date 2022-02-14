
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
typedef int sock ;
typedef int ifsun ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct sockaddr_un*,char const*) ;
 int FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct sockaddr_un*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4)
{
    struct sockaddr_un VAR_5;
    int VAR_6;

    FUNC_2(&VAR_5, VAR_4);

    FUNC_6(VAR_5.sun_path);

    VAR_6 = FUNC_4(VAR_0, VAR_1, 0);
    if (VAR_6 == -1)
        FUNC_1(1, "can't create socket");
    FUNC_3(VAR_6, VAR_2, VAR_3, &VAR_6, sizeof(VAR_6));
    if (FUNC_0(VAR_6, FUNC_5(&VAR_5), sizeof(VAR_5)) < 0)
        FUNC_1(1, "can't bind to a socket");

    return VAR_6;
}
