
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PangoFontDescription ;
typedef int PangoFont ;
typedef int PangoContext ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int *,int *) ;

PangoFont *FUNC_5(PangoFontDescription *VAR_0)
{
 PangoFont *VAR_1;
 PangoContext *VAR_2;


 VAR_2 = FUNC_2();
 VAR_1 = FUNC_4(FUNC_3(), VAR_2, VAR_0);
 if (VAR_1 == ((void*)0)) {

  FUNC_0("[libui] no match in pangoDescToPangoFont(); report to andlabs");
 }
 FUNC_1(VAR_2);
 return VAR_1;
}
