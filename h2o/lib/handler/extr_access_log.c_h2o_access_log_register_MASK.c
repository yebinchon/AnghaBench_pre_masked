
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_access; int dispose; } ;
struct st_h2o_access_logger_t {TYPE_1__ super; int * fh; } ;
typedef int h2o_pathconf_t ;
typedef TYPE_1__ h2o_logger_t ;
typedef int h2o_access_log_filehandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

h2o_logger_t *FUNC_2(h2o_pathconf_t *VAR_2, h2o_access_log_filehandle_t *VAR_3)
{
    struct st_h2o_access_logger_t *VAR_4 = (void *)FUNC_0(VAR_2, sizeof(*VAR_4));

    VAR_4->super.dispose = VAR_0;
    VAR_4->super.log_access = VAR_1;
    VAR_4->fh = VAR_3;
    FUNC_1(VAR_3);

    return &VAR_4->super;
}
