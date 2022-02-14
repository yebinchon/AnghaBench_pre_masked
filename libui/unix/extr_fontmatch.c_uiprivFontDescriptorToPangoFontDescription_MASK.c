
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Stretch; int Italic; int Weight; int Size; int Family; } ;
typedef TYPE_1__ uiFontDescriptor ;
typedef int PangoFontDescription ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

PangoFontDescription *FUNC_10(const uiFontDescriptor *VAR_0)
{
 PangoFontDescription *VAR_1;

 VAR_1 = FUNC_0();
 FUNC_1(VAR_1, VAR_0->Family);

 FUNC_2(VAR_1, FUNC_6(VAR_0->Size));
 FUNC_5(VAR_1, FUNC_9(VAR_0->Weight));
 FUNC_4(VAR_1, FUNC_7(VAR_0->Italic));
 FUNC_3(VAR_1, FUNC_8(VAR_0->Stretch));
 return VAR_1;
}
