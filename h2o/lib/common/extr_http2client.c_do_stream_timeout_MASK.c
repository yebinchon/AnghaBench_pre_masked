
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ res; } ;
struct st_h2o_http2client_stream_t {TYPE_1__ state; int * conn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct st_h2o_http2client_stream_t*,char const*) ;
 int FUNC_1 (struct st_h2o_http2client_stream_t*) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (struct st_h2o_http2client_stream_t*,int ) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_http2client_stream_t *VAR_4)
{
    if (VAR_4->conn == ((void*)0)) {
        FUNC_2(VAR_4, VAR_1);
        return;
    }
    const char *VAR_5 =
        VAR_4->state.res == VAR_0 ? VAR_2 : VAR_3;
    FUNC_0(VAR_4, VAR_5);
    FUNC_1(VAR_4);
}
