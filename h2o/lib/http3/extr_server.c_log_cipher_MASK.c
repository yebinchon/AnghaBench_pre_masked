
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int quic; } ;
struct st_h2o_http3_server_conn_t {TYPE_1__ h3; } ;
typedef int ptls_t ;
struct TYPE_9__ {TYPE_2__* aead; } ;
typedef TYPE_3__ ptls_cipher_suite_t ;
struct TYPE_10__ {scalar_t__ conn; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_iovec_t ;
struct TYPE_8__ {int * name; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static h2o_iovec_t FUNC_4(h2o_req_t *VAR_0)
{
    struct st_h2o_http3_server_conn_t *VAR_1 = (struct st_h2o_http3_server_conn_t *)VAR_0->conn;
    ptls_t *VAR_2 = FUNC_2(VAR_1->h3.quic);
    ptls_cipher_suite_t *VAR_3 = FUNC_1(VAR_2);
    return VAR_3 != ((void*)0) ? FUNC_0(VAR_3->aead->name, FUNC_3(VAR_3->aead->name)) : FUNC_0(((void*)0), 0);
}
