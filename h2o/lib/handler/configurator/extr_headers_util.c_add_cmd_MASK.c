
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
typedef int h2o_token_t ;
typedef int h2o_iovec_t ;
typedef int h2o_headers_command_when_t ;
typedef int h2o_headers_command_t ;
typedef int h2o_configurator_command_t ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int **,int,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_command_t *VAR_0, yoml_t *VAR_1, int VAR_2, h2o_iovec_t *VAR_3, h2o_iovec_t VAR_4,
                   h2o_headers_command_when_t VAR_5, h2o_headers_command_t **VAR_6)
{
    if (FUNC_3(VAR_3)) {
        const h2o_token_t *VAR_7 = (void *)VAR_3;
        if (FUNC_2(VAR_7)) {
            FUNC_0(VAR_0, VAR_1, "the named header cannot be rewritten");
            return -1;
        }
    }

    FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
    return 0;
}
