
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int read_frame; } ;
struct st_h2o_http2client_conn_t {scalar_t__ state; TYPE_1__ input; } ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ h2o_http2_frame_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int const*,size_t,int ,char const**) ;
 int FUNC_2 (struct st_h2o_http2client_conn_t*,TYPE_2__*,char const**) ;

__attribute__((used)) static ssize_t FUNC_3(struct st_h2o_http2client_conn_t *VAR_5, const uint8_t *VAR_6, size_t VAR_7, const char **VAR_8)
{
    FUNC_0(VAR_5->state != VAR_0);

    h2o_http2_frame_t VAR_9;
    ssize_t VAR_10;

    if ((VAR_10 = FUNC_1(&VAR_9, VAR_6, VAR_7, VAR_3, VAR_8)) < 0)
        return VAR_10;

    if (VAR_9.type != VAR_2)
        return VAR_1;

    int VAR_11 = FUNC_2(VAR_5, &VAR_9, VAR_8);
    if (VAR_11 != 0)
        return VAR_11;

    VAR_5->input.read_frame = VAR_4;
    return VAR_10;
}
