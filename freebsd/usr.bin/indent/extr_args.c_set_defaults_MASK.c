
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pro {scalar_t__ p_type; int p_default; int * p_obj; scalar_t__ p_name; } ;
struct TYPE_2__ {double case_indent; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct pro* VAR_2 ;

void
FUNC_0(void)
{
    struct pro *VAR_3;





    VAR_1.case_indent = 0.0;
    for (VAR_3 = VAR_2; VAR_3->p_name; VAR_3++)
 if (VAR_3->p_type != VAR_0)
     *VAR_3->p_obj = VAR_3->p_default;
}
