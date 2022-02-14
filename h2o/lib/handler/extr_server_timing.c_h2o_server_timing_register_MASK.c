
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int on_setup_ostream; } ;
struct st_server_timing_filter_t {int enforce; TYPE_1__ super; } ;
typedef int h2o_pathconf_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;

void FUNC_1(h2o_pathconf_t *VAR_1, int VAR_2)
{
    struct st_server_timing_filter_t *VAR_3 = (struct st_server_timing_filter_t *)FUNC_0(VAR_1, sizeof(*VAR_3));
    VAR_3->super.on_setup_ostream = VAR_0;
    VAR_3->enforce = VAR_2;
}
