
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double r; double g; double b; double a; } ;
struct TYPE_6__ {TYPE_1__ color; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ uiAttribute ;



void FUNC_0(const uiAttribute *VAR_0, double *VAR_1, double *VAR_2, double *VAR_3, double *VAR_4)
{
 *VAR_1 = VAR_0->u.color.r;
 *VAR_2 = VAR_0->u.color.g;
 *VAR_3 = VAR_0->u.color.b;
 *VAR_4 = VAR_0->u.color.a;
}
