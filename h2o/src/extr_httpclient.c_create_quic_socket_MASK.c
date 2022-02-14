
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
typedef int sin ;
typedef int h2o_socket_t ;
typedef int h2o_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static h2o_socket_t *FUNC_6(h2o_loop_t *VAR_4)
{
    int VAR_5;
    struct sockaddr_in VAR_6;

    if ((VAR_5 = FUNC_5(VAR_2, VAR_3, 0)) == -1) {
        FUNC_4("failed to create UDP socket");
        FUNC_1(VAR_0);
    }
    FUNC_3(&VAR_6, 0, sizeof(VAR_6));
    if (FUNC_0(VAR_5, (void *)&VAR_6, sizeof(VAR_6)) != 0) {
        FUNC_4("failed to bind bind UDP socket");
        FUNC_1(VAR_0);
    }

    return FUNC_2(VAR_4, VAR_5, VAR_1);
}
