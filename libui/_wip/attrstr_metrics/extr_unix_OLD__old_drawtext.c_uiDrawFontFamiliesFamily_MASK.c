
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** f; } ;
typedef TYPE_1__ uiDrawFontFamilies ;
typedef int PangoFontFamily ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;

char *FUNC_2(uiDrawFontFamilies *VAR_0, int VAR_1)
{
 PangoFontFamily *VAR_2;

 VAR_2 = VAR_0->f[VAR_1];
 return FUNC_1(FUNC_0(VAR_2));
}
