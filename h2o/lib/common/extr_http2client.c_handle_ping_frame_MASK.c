
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
struct st_h2o_http2client_conn_t {TYPE_1__ output; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ h2o_http2_ping_payload_t ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_3__ h2o_http2_frame_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,char const**) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static int FUNC_3(struct st_h2o_http2client_conn_t *VAR_1, h2o_http2_frame_t *VAR_2, const char **VAR_3)
{
    h2o_http2_ping_payload_t VAR_4;
    int VAR_5;

    if ((VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3)) != 0)
        return VAR_5;

    if ((VAR_2->flags & VAR_0) == 0) {
        FUNC_1(&VAR_1->output.buf, 1, VAR_4.data);
        FUNC_2(VAR_1);
    }

    return 0;
}
