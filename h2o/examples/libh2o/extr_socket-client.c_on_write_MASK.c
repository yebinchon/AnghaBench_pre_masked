
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_3, const char *VAR_4)
{
    if (VAR_4 != ((void*)0)) {

        FUNC_0(VAR_2, "write failed:%s\n", VAR_4);
        FUNC_1(VAR_3);
        VAR_0 = 1;
        return;
    }

    FUNC_2(VAR_3, VAR_1);
}
