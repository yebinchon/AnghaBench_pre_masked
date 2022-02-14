
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int emit_request_errors; } ;
struct TYPE_6__ {TYPE_1__ error_log; int * mimemap; int path; int * global; } ;
typedef TYPE_2__ h2o_pathconf_t ;
typedef int h2o_mimemap_t ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void FUNC_3(h2o_pathconf_t *VAR_1, h2o_globalconf_t *VAR_2, const char *VAR_3, h2o_mimemap_t *VAR_4)
{
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->global = VAR_2;
    if (VAR_3 != ((void*)0))
        VAR_1->path = FUNC_1(((void*)0), VAR_3, VAR_0);
    FUNC_0(VAR_4);
    VAR_1->mimemap = VAR_4;
    VAR_1->error_log.emit_request_errors = 1;
}
