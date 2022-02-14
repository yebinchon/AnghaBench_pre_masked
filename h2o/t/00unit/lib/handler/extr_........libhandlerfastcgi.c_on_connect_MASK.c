
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_fcgi_generator_t {TYPE_1__* handler; TYPE_3__* sock; int req; int * connect_req; } ;
struct TYPE_10__ {int size; int entries; } ;
typedef TYPE_2__ iovec_vector_t ;
typedef int h2o_url_t ;
struct TYPE_11__ {struct st_fcgi_generator_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_12__ {int io_timeout; } ;
struct TYPE_9__ {TYPE_8__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int,int,TYPE_8__*) ;
 int FUNC_1 (struct st_fcgi_generator_t*) ;
 int FUNC_2 (int ,int ,char*,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct st_fcgi_generator_t*,int ,int ) ;

__attribute__((used)) static void FUNC_6(h2o_socket_t *VAR_4, const char *VAR_5, void *VAR_6, h2o_url_t *VAR_7)
{
    struct st_fcgi_generator_t *VAR_8 = VAR_6;
    iovec_vector_t VAR_9;

    VAR_8->connect_req = ((void*)0);

    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_8->req, VAR_0, "connection failed:%s", VAR_5);
        FUNC_1(VAR_8);
        return;
    }

    VAR_8->sock = VAR_4;
    VAR_4->data = VAR_8;

    FUNC_0(VAR_8->req, &VAR_9, 1, 65535, &VAR_8->handler->config);


    FUNC_4(VAR_8->sock, VAR_9.entries, VAR_9.size, VAR_3);

    FUNC_5(VAR_8, VAR_8->handler->config.io_timeout, VAR_2);


    FUNC_3(VAR_4, VAR_1);
}
