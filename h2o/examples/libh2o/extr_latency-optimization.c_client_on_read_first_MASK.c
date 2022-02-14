
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__* input; } ;
typedef TYPE_1__ h2o_socket_t ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_13__ {int bytes_received; int bytes_before_sig; int resp_start_at; } ;
struct TYPE_12__ {int size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (TYPE_7__**,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(h2o_socket_t *VAR_4, const char *VAR_5)
{
    if (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_3, "connection closed unexpectedly:%s\n", VAR_5);
        FUNC_1(1);
        return;
    }

    VAR_2.resp_start_at = FUNC_4(FUNC_5(VAR_4));
    VAR_2.bytes_before_sig = VAR_4->input->size;
    VAR_2.bytes_received = VAR_4->input->size;
    FUNC_3(&VAR_4->input, VAR_4->input->size);

    h2o_iovec_t VAR_6 = {FUNC_0("!")};
    FUNC_7(VAR_4, &VAR_6, 1, VAR_1);
    FUNC_6(VAR_4, VAR_0);
}
