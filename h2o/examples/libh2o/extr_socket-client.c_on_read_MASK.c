
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* input; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_5__ {int size; int bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_3, const char *VAR_4)
{
    if (VAR_4 != ((void*)0)) {

        FUNC_0(VAR_1, "read failed:%s\n", VAR_4);
        FUNC_2(VAR_3);
        VAR_0 = 1;
        return;
    }

    FUNC_1(VAR_3->input->bytes, 1, VAR_3->input->size, VAR_2);
}
