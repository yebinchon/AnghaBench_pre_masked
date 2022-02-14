
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uiUnderlineColor ;
struct TYPE_6__ {int underlineColor; } ;
struct TYPE_7__ {TYPE_1__ color; } ;
struct TYPE_8__ {TYPE_2__ u; int type; } ;
typedef TYPE_3__ uiAttribute ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (double,double,double,double) ;

uiAttribute *FUNC_1(uiUnderlineColor VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
 uiAttribute *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_6->type = VAR_0;
 VAR_6->u.color.underlineColor = VAR_1;
 return VAR_6;
}
