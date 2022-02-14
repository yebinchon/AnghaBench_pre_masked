
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double red; double green; double blue; double alpha; } ;
typedef TYPE_1__ GdkRGBA ;


 void* FUNC_0 (TYPE_1__*) ;

void *FUNC_1(double VAR_0, double VAR_1, double VAR_2, double VAR_3)
{
 GdkRGBA VAR_4;

 VAR_4.red = VAR_0;
 VAR_4.green = VAR_1;
 VAR_4.blue = VAR_2;
 VAR_4.alpha = VAR_3;
 return FUNC_0(&VAR_4);
}
