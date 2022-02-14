
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int quic; TYPE_1__* callbacks; } ;
typedef TYPE_2__ h2o_http3_conn_t ;
struct TYPE_6__ {int (* destroy_connection ) (TYPE_2__*) ;} ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(h2o_http3_conn_t *VAR_0, int VAR_1, const char *VAR_2)
{
    switch (FUNC_2(VAR_0->quic)) {
    case 128:
        VAR_0->callbacks->destroy_connection(VAR_0);
        break;
    case 129:
        FUNC_1(VAR_0->quic, VAR_1, VAR_2);
        FUNC_0(VAR_0);
        break;
    default:

        break;
    }
}
