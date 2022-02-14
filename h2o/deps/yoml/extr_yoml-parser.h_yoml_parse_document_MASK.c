
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_7__ {int mem_set; } ;
typedef TYPE_1__ yoml_parse_args_t ;
typedef int yaml_parser_t ;
typedef int yaml_event_type_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int **,int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int **,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int **,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static inline yoml_t *FUNC_5(yaml_parser_t *VAR_1, yaml_event_type_t *VAR_2, yoml_parse_args_t *VAR_3)
{
    yoml_t *VAR_4;


    if ((VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3)) == ((void*)0)) {
        return ((void*)0);
    }
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0;


    if (FUNC_3(&VAR_4, VAR_1, VAR_3) != 0)
        goto Error;
    if (FUNC_1(&VAR_4, VAR_4, VAR_1, VAR_3) != 0)
        goto Error;
    if (FUNC_2(&VAR_4, VAR_1, VAR_3) != 0)
        goto Error;

    return VAR_4;

Error:
    FUNC_4(VAR_4, VAR_3->mem_set);
    return ((void*)0);
}
