
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_sendfile_generator_t {int dummy; } ;
typedef int h2o_req_t ;
typedef int h2o_iovec_t ;


 struct st_h2o_sendfile_generator_t* FUNC_0 (int *,char const*,int ,int*,int) ;
 int FUNC_1 (struct st_h2o_sendfile_generator_t*,int *,int,char const*,int ,int *,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(h2o_req_t *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3, h2o_iovec_t VAR_4, int VAR_5)
{
    struct st_h2o_sendfile_generator_t *VAR_6;
    int VAR_7;

    if ((VAR_6 = FUNC_0(VAR_0, VAR_3, FUNC_2(VAR_3), &VAR_7, VAR_5)) == ((void*)0))
        return -1;

    FUNC_1(VAR_6, VAR_0, VAR_1, VAR_2, VAR_4, ((void*)0), 1);
    return 0;
}
