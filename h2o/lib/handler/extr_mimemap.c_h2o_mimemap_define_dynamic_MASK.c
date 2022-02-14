
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_mimemap_type_t ;
typedef int h2o_mimemap_t ;
typedef int h2o_globalconf_t ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,int *) ;

h2o_mimemap_type_t *FUNC_4(h2o_mimemap_t *VAR_0, const char **VAR_1, h2o_globalconf_t *VAR_2)
{



    h2o_mimemap_type_t *VAR_3 = FUNC_0(VAR_2, VAR_0);
    size_t VAR_4;

    for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); ++VAR_4) {
        if (VAR_1[VAR_4][0] == '\0') {

            FUNC_2(VAR_0, VAR_3);
        } else {
            FUNC_3(VAR_0, VAR_1[VAR_4], VAR_3);
        }
    }
    FUNC_1(VAR_3);
    return VAR_3;
}
