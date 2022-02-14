
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_server_timing_filter_t {scalar_t__ enforce; } ;
struct TYPE_5__ {int content_length; } ;
struct TYPE_6__ {int send_server_timing; int version; TYPE_1__ res; } ;
typedef TYPE_2__ h2o_req_t ;
typedef int h2o_ostream_t ;
typedef int h2o_filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int **) ;

__attribute__((used)) static void FUNC_1(h2o_filter_t *VAR_3, h2o_req_t *VAR_4, h2o_ostream_t **VAR_5)
{
    struct st_server_timing_filter_t *VAR_6 = (struct st_server_timing_filter_t *)VAR_3;


    VAR_4->send_server_timing = VAR_0 | VAR_1;


    if (0x101 <= VAR_4->version && VAR_4->version < 0x200 && VAR_6->enforce)
        VAR_4->res.content_length = VAR_2;

    FUNC_0(VAR_4, VAR_5);
}
