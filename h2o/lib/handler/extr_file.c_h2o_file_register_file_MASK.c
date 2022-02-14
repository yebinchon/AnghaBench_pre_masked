
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int on_req; int dispose; int on_context_dispose; int on_context_init; } ;
struct st_h2o_specific_file_handler_t {int flags; TYPE_1__ super; int * mime_type; int real_path; } ;
typedef int h2o_pathconf_t ;
typedef int h2o_mimemap_type_t ;
typedef TYPE_1__ h2o_handler_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

h2o_handler_t *FUNC_3(h2o_pathconf_t *VAR_5, const char *VAR_6, h2o_mimemap_type_t *VAR_7, int VAR_8)
{
    struct st_h2o_specific_file_handler_t *VAR_9 = (void *)FUNC_0(VAR_5, sizeof(*VAR_9));

    VAR_9->super.on_context_init = VAR_2;
    VAR_9->super.on_context_dispose = VAR_1;
    VAR_9->super.dispose = VAR_3;
    VAR_9->super.on_req = VAR_4;

    VAR_9->real_path = FUNC_2(((void*)0), VAR_6, VAR_0);
    FUNC_1(VAR_7);
    VAR_9->mime_type = VAR_7;
    VAR_9->flags = VAR_8;

    return &VAR_9->super;
}
