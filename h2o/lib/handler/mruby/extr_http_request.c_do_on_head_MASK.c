
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_mruby_http_request_context_t {int * client; } ;
typedef int headers ;
typedef int h2o_iovec_t ;
struct TYPE_3__ {struct st_h2o_mruby_http_request_context_t* data; } ;
typedef TYPE_1__ h2o_httpclient_t ;
typedef int * h2o_httpclient_body_cb ;
typedef int h2o_header_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct st_h2o_mruby_http_request_context_t*,char const*) ;
 int FUNC_1 (struct st_h2o_mruby_http_request_context_t*,int,int *,size_t,int) ;
 int FUNC_2 (int *,size_t,int,int ) ;

__attribute__((used)) static h2o_httpclient_body_cb FUNC_3(h2o_httpclient_t *VAR_3, const char *VAR_4, int VAR_5, int VAR_6, h2o_iovec_t VAR_7,
                                         h2o_header_t *VAR_8, size_t VAR_9, int VAR_10)
{
    struct st_h2o_mruby_http_request_context_t *VAR_11 = VAR_3->data;

    if (VAR_4 != ((void*)0)) {
        if (VAR_4 != VAR_0) {

            FUNC_0(VAR_11, VAR_4);
            return ((void*)0);
        }

        VAR_11->client = ((void*)0);
    }

    FUNC_2(VAR_8, VAR_9, sizeof(VAR_8[0]), VAR_1);
    FUNC_1(VAR_11, VAR_6, VAR_8, VAR_9, VAR_10);

    return VAR_2;
}
