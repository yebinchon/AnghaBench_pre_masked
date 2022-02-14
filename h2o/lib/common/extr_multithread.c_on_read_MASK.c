
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; TYPE_3__* input; } ;
typedef TYPE_1__ h2o_socket_t ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (TYPE_3__**,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_0, const char *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        FUNC_1("on_read: %s", VAR_1);
    }

    FUNC_0(&VAR_0->input, VAR_0->input->size);
    FUNC_2(VAR_0->data);
}
