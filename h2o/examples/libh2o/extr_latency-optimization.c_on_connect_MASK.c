
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_socket_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*,int ,int (*) (int *,int *)) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(h2o_socket_t *VAR_3, const char *VAR_4)
{
    if (VAR_4 != ((void*)0)) {

        FUNC_1(VAR_2, "failed to connect to host:%s\n", VAR_4);
        FUNC_3(VAR_3);
        FUNC_0(1);
        return;
    }

    if (VAR_1 != ((void*)0)) {
        FUNC_4(VAR_3, VAR_1, VAR_0 ? ((void*)0) : "blahblah", FUNC_2(((void*)0), 0), FUNC_5);
    } else {
        FUNC_5(VAR_3, ((void*)0));
    }
}
