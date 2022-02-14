
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_req_t ;
typedef int h2o_handler_t ;


 scalar_t__ FUNC_0 (int *,char const**) ;
 int FUNC_1 (int *,char const*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(h2o_handler_t *VAR_1, h2o_req_t *VAR_2)
{
    const char *VAR_3;

    if (FUNC_0(VAR_2, &VAR_3) != 0 || VAR_3 == ((void*)0)) {
        return -1;
    }
    FUNC_1(VAR_2, VAR_3, ((void*)0), VAR_0);
    return 0;
}
