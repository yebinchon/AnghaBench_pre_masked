
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http1_conn_t {int req; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_http1_conn_t *VAR_1, const char *VAR_2)
{
    FUNC_1(VAR_1->sock);
    FUNC_0(&VAR_1->req, "Bad Request", VAR_2, VAR_0);
}
