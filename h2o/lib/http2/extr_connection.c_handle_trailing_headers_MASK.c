
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int path; int authority; int scheme; int method; } ;
struct TYPE_10__ {int headers; TYPE_1__ input; int pool; } ;
struct TYPE_11__ {TYPE_2__ req; } ;
typedef TYPE_3__ h2o_http2_stream_t ;
struct TYPE_12__ {int _input_header_table; } ;
typedef TYPE_4__ h2o_http2_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int *,int *,int *,int *,int *,int *,size_t*,int *,int const*,size_t,char const**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(h2o_http2_conn_t *VAR_1, h2o_http2_stream_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                                   const char **VAR_5)
{
    size_t VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_0(&VAR_2->req.pool, VAR_0, &VAR_1->_input_header_table,
                                       &VAR_2->req.input.method, &VAR_2->req.input.scheme, &VAR_2->req.input.authority,
                                       &VAR_2->req.input.path, &VAR_2->req.headers, ((void*)0), &VAR_6, ((void*)0), VAR_3, VAR_4,
                                       VAR_5)) != 0)
        return VAR_7;
    FUNC_2(VAR_1, VAR_2, FUNC_1(((void*)0), 0), 1);
    return 0;
}
