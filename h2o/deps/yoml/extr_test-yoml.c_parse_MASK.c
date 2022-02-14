
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
typedef int yaml_parser_t ;
typedef int yaml_char_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int *,int *,char const*) ;

__attribute__((used)) static yoml_t *FUNC_5(const char *VAR_0, const char *VAR_1)
{
    yaml_parser_t VAR_2;
    yoml_t *VAR_3;

    FUNC_2(&VAR_2);
    FUNC_3(&VAR_2, (yaml_char_t*)VAR_1, FUNC_0(VAR_1));
    VAR_3 = FUNC_4(&VAR_2, ((void*)0), ((void*)0), VAR_0);
    FUNC_1(&VAR_2);

    return VAR_3;
}
