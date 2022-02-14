
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct st_h2o_http2client_stream_t {int dummy; } ;
struct st_h2o_http2client_conn_t {int streams; } ;
typedef scalar_t__ khiter_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static struct st_h2o_http2client_stream_t *FUNC_3(struct st_h2o_http2client_conn_t *VAR_1, uint32_t VAR_2)
{
    khiter_t VAR_3 = FUNC_1(VAR_0, VAR_1->streams, VAR_2);
    if (VAR_3 != FUNC_0(VAR_1->streams))
        return (struct st_h2o_http2client_stream_t *)FUNC_2(VAR_1->streams, VAR_3);
    return ((void*)0);
}
