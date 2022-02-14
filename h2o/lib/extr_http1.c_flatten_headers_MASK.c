
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int status; char* reason; int content_length; } ;
struct TYPE_13__ {TYPE_2__ res; TYPE_1__* conn; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_14__ {TYPE_4__* globalconf; } ;
typedef TYPE_6__ h2o_context_t ;
struct TYPE_11__ {char* base; scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ server_name; } ;
struct TYPE_9__ {TYPE_6__* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_5__*,int) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_1, h2o_req_t *VAR_2, const char *VAR_3)
{
    h2o_context_t *VAR_4 = VAR_2->conn->ctx;
    char *VAR_5 = VAR_1;

    FUNC_0(VAR_2->res.status <= 999);


    if (VAR_2->res.content_length != VAR_0) {
        VAR_5 += FUNC_2(VAR_5, "HTTP/1.1 %d %s\r\nConnection: %s\r\nContent-Length: %zu\r\n", VAR_2->res.status, VAR_2->res.reason,
                       VAR_3, VAR_2->res.content_length);
    } else {
        VAR_5 += FUNC_2(VAR_5, "HTTP/1.1 %d %s\r\nConnection: %s\r\n", VAR_2->res.status, VAR_2->res.reason, VAR_3);
    }
    if (VAR_4->globalconf->server_name.len) {
        VAR_5 += FUNC_2(VAR_5, "Server: %s\r\n", VAR_4->globalconf->server_name.base);
    }

    VAR_5 += FUNC_1(VAR_5, VAR_2, 1);
    *VAR_5++ = '\r';
    *VAR_5++ = '\n';

    return VAR_5 - VAR_1;
}
