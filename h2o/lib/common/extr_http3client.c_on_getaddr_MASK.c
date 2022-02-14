
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http3client_conn_t {int * getaddr_req; } ;
struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int h2o_hostinfo_getaddr_req_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct addrinfo* FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (struct st_h2o_http3client_conn_t*,int ,int ) ;

__attribute__((used)) static void FUNC_4(h2o_hostinfo_getaddr_req_t *VAR_0, const char *VAR_1, struct addrinfo *VAR_2, void *VAR_3)
{
    struct st_h2o_http3client_conn_t *VAR_4 = VAR_3;

    FUNC_1(VAR_0 == VAR_4->getaddr_req);
    VAR_4->getaddr_req = ((void*)0);

    if (VAR_1 != ((void*)0)) {

        FUNC_0();
    }

    struct addrinfo *VAR_5 = FUNC_2(VAR_2);
    FUNC_3(VAR_4, VAR_5->ai_addr, VAR_5->ai_addrlen);
}
