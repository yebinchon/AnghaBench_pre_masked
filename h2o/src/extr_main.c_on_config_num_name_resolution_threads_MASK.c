
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 int FUNC_0 (int *,int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,char*,scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    if (FUNC_1(VAR_1, VAR_3, "%zu", &VAR_0) != 0)
        return -1;
    if (VAR_0 == 0) {
        FUNC_0(VAR_1, VAR_3, "num-name-resolution-threads must be >=1");
        return -1;
    }
    return 0;
}
