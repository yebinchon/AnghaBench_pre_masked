
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_h2o_accept_data_t {int * sock; } ;
typedef int h2o_socket_t ;
struct TYPE_2__ {int (* destroy ) (struct st_h2o_accept_data_t*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct st_h2o_accept_data_t*) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_accept_data_t *VAR_1)
{

    h2o_socket_t *VAR_2 = VAR_1->sock;
    VAR_0.destroy(VAR_1);
    FUNC_0(VAR_2);
}
