
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double r; double g; double b; double a; } ;
struct TYPE_6__ {TYPE_2__ color; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_3__ uiAttribute ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;

uiAttribute *FUNC_1(double VAR_1, double VAR_2, double VAR_3, double VAR_4)
{
 uiAttribute *VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_5->u.color.r = VAR_1;
 VAR_5->u.color.g = VAR_2;
 VAR_5->u.color.b = VAR_3;
 VAR_5->u.color.a = VAR_4;
 return VAR_5;
}
