
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ max_open; } ;
struct TYPE_5__ {scalar_t__ max_open; } ;
struct TYPE_7__ {TYPE_2__ pull_stream_ids; TYPE_1__ push_stream_ids; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(h2o_http2_conn_t *VAR_0, uint32_t VAR_1)
{
    return (FUNC_0(VAR_1) ? VAR_0->push_stream_ids.max_open : VAR_0->pull_stream_ids.max_open) < VAR_1;
}
