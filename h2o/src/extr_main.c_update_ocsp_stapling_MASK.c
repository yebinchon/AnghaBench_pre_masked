
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int * data; } ;
struct TYPE_3__ {TYPE_2__ response; } ;
struct listener_ssl_config_t {TYPE_1__ ocsp_stapling; } ;
typedef int h2o_buffer_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct listener_ssl_config_t *VAR_0, h2o_buffer_t *VAR_1)
{
    FUNC_1(&VAR_0->ocsp_stapling.response.mutex);
    if (VAR_0->ocsp_stapling.response.data != ((void*)0))
        FUNC_0(&VAR_0->ocsp_stapling.response.data);
    VAR_0->ocsp_stapling.response.data = VAR_1;
    FUNC_2(&VAR_0->ocsp_stapling.response.mutex);
}
