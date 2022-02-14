
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct st_h2o_accept_data_t {int dummy; } ;
typedef int h2o_socket_t ;
typedef int h2o_accept_ctx_t ;


 struct st_h2o_accept_data_t* FUNC_0 (int *,int *,struct timeval,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static struct st_h2o_accept_data_t *FUNC_1(h2o_accept_ctx_t *VAR_1, h2o_socket_t *VAR_2,
                                                               struct timeval VAR_3)
{
    struct st_h2o_accept_data_t *VAR_4 =
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, sizeof(struct st_h2o_accept_data_t));
    return VAR_4;
}
