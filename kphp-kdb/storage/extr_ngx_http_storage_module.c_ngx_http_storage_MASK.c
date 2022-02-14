
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handler; } ;
typedef TYPE_1__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *FUNC_1 (ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5) {
  ngx_http_core_loc_conf_t *VAR_6 = FUNC_0 (VAR_3, VAR_1);
  VAR_6->handler = VAR_2;
  return VAR_0;
}
