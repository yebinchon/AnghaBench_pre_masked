
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_socket_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_1, const char *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;

    FUNC_1(VAR_0, "write failed:%s\n", VAR_2);
    FUNC_2(VAR_1);
    FUNC_0(1);
}
