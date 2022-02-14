
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int reuseaddr_flag ;
typedef int h2o_socket_t ;
typedef int addr ;
struct TYPE_4__ {int loop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 TYPE_2__ VAR_6 ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
    struct sockaddr_in VAR_8;
    int VAR_9, VAR_10 = 1;
    h2o_socket_t *VAR_11;

    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr.s_addr = FUNC_3(0x7f000001);
    VAR_8.sin_port = FUNC_4(7890);

    if ((VAR_9 = FUNC_8(VAR_0, VAR_2, 0)) == -1 ||
        FUNC_7(VAR_9, VAR_3, VAR_5, &VAR_10, sizeof(VAR_10)) != 0 ||
        FUNC_0(VAR_9, (struct sockaddr *)&VAR_8, sizeof(VAR_8)) != 0 || FUNC_5(VAR_9, VAR_4) != 0) {
        return -1;
    }

    VAR_11 = FUNC_1(VAR_6.loop, VAR_9, VAR_1);
    FUNC_2(VAR_11, VAR_7);

    return 0;
}
