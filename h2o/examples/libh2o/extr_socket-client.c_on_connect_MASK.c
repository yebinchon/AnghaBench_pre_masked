
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ h2o_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(h2o_socket_t *VAR_6, const char *VAR_7)
{
    if (VAR_7 != ((void*)0)) {

        FUNC_0(VAR_5, "failed to connect to host:%s\n", VAR_7);
        FUNC_2(VAR_6);
        VAR_0 = 1;
        return;
    }

    if (VAR_4 != ((void*)0)) {
        FUNC_3(VAR_6, VAR_4, VAR_1, FUNC_1(((void*)0), 0), VAR_2);
    } else {
        FUNC_4(VAR_6, VAR_6->data, 1, VAR_3);
    }
}
