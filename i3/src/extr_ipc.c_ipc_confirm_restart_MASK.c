
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ ipc_client ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int const*) ;
 int FUNC_3 (char const*) ;

void FUNC_4(ipc_client *VAR_1) {
    FUNC_0("ipc_confirm_restart(fd %d)\n", VAR_1->fd);
    static const char *VAR_2 = "[{\"success\":true}]";
    FUNC_2(
        VAR_1, FUNC_3(VAR_2), VAR_0,
        (const uint8_t *)VAR_2);
    FUNC_1(VAR_1);
}
