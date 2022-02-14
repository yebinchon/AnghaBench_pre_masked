
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yoml_t ;
struct st_h2o_access_log_configurator_t {TYPE_1__* handles; } ;
typedef int h2o_configurator_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_access_log_filehandle_t ;
struct TYPE_3__ {int size; int ** entries; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_h2o_access_log_configurator_t *VAR_3 = (void *)VAR_0;
    size_t VAR_4;


    ++VAR_3->handles;


    FUNC_2(VAR_3->handles, 0, sizeof(*VAR_3->handles));
    FUNC_1(((void*)0), VAR_3->handles, VAR_3->handles[-1].size + 1);
    for (VAR_4 = 0; VAR_4 != VAR_3->handles[-1].size; ++VAR_4) {
        h2o_access_log_filehandle_t *VAR_5 = VAR_3->handles[-1].entries[VAR_4];
        VAR_3->handles[0].entries[VAR_3->handles[0].size++] = VAR_5;
        FUNC_0(VAR_5);
    }

    return 0;
}
