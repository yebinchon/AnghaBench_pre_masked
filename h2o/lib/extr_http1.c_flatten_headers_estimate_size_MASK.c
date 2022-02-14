
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; TYPE_6__* entries; } ;
struct TYPE_11__ {TYPE_1__ headers; int reason; } ;
struct TYPE_12__ {TYPE_4__ res; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_13__ {TYPE_3__ value; TYPE_2__* name; } ;
typedef TYPE_6__ h2o_header_t ;
struct TYPE_9__ {scalar_t__ len; } ;
typedef int H2O_UINT64_LONGEST_STR ;


 int FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(h2o_req_t *VAR_0, size_t VAR_1)
{
    size_t VAR_2 = sizeof("HTTP/1.1  \r\nserver: \r\nconnection: \r\ncontent-length: \r\n\r\n") + 3 + FUNC_0(VAR_0->res.reason) +
                 VAR_1 + sizeof(H2O_UINT64_LONGEST_STR) - 1 + sizeof("cache-control: private") - 1;
    const h2o_header_t *VAR_3, *VAR_4;

    for (VAR_3 = VAR_0->res.headers.entries, VAR_4 = VAR_3 + VAR_0->res.headers.size; VAR_3 != VAR_4; ++VAR_3)
        VAR_2 += VAR_3->name->len + VAR_3->value.len + 4;

    return VAR_2;
}
