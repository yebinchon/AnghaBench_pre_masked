
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * buf; } ;
struct TYPE_3__ {int * receiving; TYPE_2__ sending; } ;
struct st_fcgi_generator_t {TYPE_1__ resp; int * sock; int * connect_req; int timeout; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct st_fcgi_generator_t *VAR_0)
{

    if (FUNC_4(&VAR_0->timeout))
        FUNC_5(&VAR_0->timeout);
    if (VAR_0->connect_req != ((void*)0)) {
        FUNC_3(VAR_0->connect_req);
        VAR_0->connect_req = ((void*)0);
    }
    if (VAR_0->sock != ((void*)0)) {
        FUNC_2(VAR_0->sock);
        VAR_0->sock = ((void*)0);
    }
    if (VAR_0->resp.sending.buf != ((void*)0))
        FUNC_1(&VAR_0->resp.sending);
    if (VAR_0->resp.receiving != ((void*)0))
        FUNC_0(&VAR_0->resp.receiving);
}
