
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_h2o_http2client_conn_t {int dummy; } ;
struct TYPE_6__ {scalar_t__ dependency; } ;
typedef TYPE_1__ h2o_http2_priority_t ;
struct TYPE_7__ {scalar_t__ stream_id; } ;
typedef TYPE_2__ h2o_http2_frame_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,char const**) ;

__attribute__((used)) static int FUNC_1(struct st_h2o_http2client_conn_t *VAR_1, h2o_http2_frame_t *VAR_2, const char **VAR_3)
{
    h2o_http2_priority_t VAR_4;
    int VAR_5;

    if ((VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_3)) != 0)
        return VAR_5;
    if (VAR_2->stream_id == VAR_4.dependency) {
        *VAR_3 = "stream cannot depend on itself";
        return VAR_0;
    }


    return 0;
}
