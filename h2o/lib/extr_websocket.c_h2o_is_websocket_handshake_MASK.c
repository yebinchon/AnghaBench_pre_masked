
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_15__ {TYPE_5__* entries; } ;
struct TYPE_11__ {int len; int * base; } ;
struct TYPE_9__ {int len; int base; } ;
struct TYPE_10__ {TYPE_1__ method; } ;
struct TYPE_14__ {TYPE_8__ headers; TYPE_3__ upgrade; TYPE_2__ input; } ;
typedef TYPE_6__ h2o_req_t ;
struct TYPE_12__ {int len; char* base; } ;
struct TYPE_13__ {TYPE_4__ value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

int FUNC_4(h2o_req_t *VAR_0, const char **VAR_1)
{
    ssize_t VAR_2;

    *VAR_1 = ((void*)0);


    if (FUNC_3(VAR_0->input.method.base, VAR_0->input.method.len, FUNC_0("GET"))) {

    } else {
        return 0;
    }


    if (VAR_0->upgrade.base != ((void*)0) && FUNC_2(VAR_0->upgrade.base, VAR_0->upgrade.len, FUNC_0("websocket"))) {

    } else {
        return 0;
    }

    if ((VAR_2 = FUNC_1(&VAR_0->headers, FUNC_0("sec-websocket-key"), -1)) != -1) {
        if (VAR_0->headers.entries[VAR_2].value.len != 24) {
            return -1;
        }
    } else {
        return 0;
    }

    *VAR_1 = VAR_0->headers.entries[VAR_2].value.base;
    return 0;
}
