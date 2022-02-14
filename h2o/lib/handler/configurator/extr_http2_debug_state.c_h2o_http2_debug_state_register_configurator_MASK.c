
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_configurator_t {int dummy; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct st_h2o_configurator_t*,char*,int,int ) ;
 int VAR_3 ;

void FUNC_2(h2o_globalconf_t *VAR_4)
{
    struct st_h2o_configurator_t *VAR_5 = (void *)FUNC_0(VAR_4, sizeof(*VAR_5));

    FUNC_1(
        VAR_5, "http2-debug-state", VAR_2 | VAR_0 | VAR_1,
        VAR_3);
}
