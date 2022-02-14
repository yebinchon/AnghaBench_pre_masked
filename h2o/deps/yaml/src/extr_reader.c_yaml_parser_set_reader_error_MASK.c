
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* problem; size_t problem_offset; int problem_value; int error; } ;
typedef TYPE_1__ yaml_parser_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(yaml_parser_t *VAR_1, const char *VAR_2,
        size_t VAR_3, int VAR_4)
{
    VAR_1->error = VAR_0;
    VAR_1->problem = VAR_2;
    VAR_1->problem_offset = VAR_3;
    VAR_1->problem_value = VAR_4;

    return 0;
}
