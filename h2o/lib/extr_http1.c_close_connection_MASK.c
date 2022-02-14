
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http1_conn_t {int _conns; int * sock; int req; int * req_body; int _timeout_entry; int super; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http1_conn_t *VAR_1, int VAR_2)
{
    if (VAR_1->sock != ((void*)0))
        FUNC_0(VAR_0, &VAR_1->super);
    FUNC_6(&VAR_1->_timeout_entry);
    if (VAR_1->req_body != ((void*)0))
        FUNC_2(&VAR_1->req_body);
    FUNC_3(&VAR_1->req);
    if (VAR_1->sock != ((void*)0) && VAR_2)
        FUNC_5(VAR_1->sock);
    FUNC_4(&VAR_1->_conns);
    FUNC_1(VAR_1);
}
