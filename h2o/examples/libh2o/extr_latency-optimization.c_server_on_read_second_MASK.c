
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_socket_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(h2o_socket_t *VAR_2, const char *VAR_3)
{
    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_1, "connection closed unexpectedly:%s\n", VAR_3);
        FUNC_0(1);
        return;
    }

    FUNC_1(VAR_1, "received the flag\n");
    VAR_0 = 1;
}
