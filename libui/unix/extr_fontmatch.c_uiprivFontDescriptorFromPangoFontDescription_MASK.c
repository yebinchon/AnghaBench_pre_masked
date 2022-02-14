
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t Italic; size_t Stretch; int Size; int Weight; int Family; } ;
typedef TYPE_1__ uiFontDescriptor ;
typedef scalar_t__ PangoStyle ;
typedef scalar_t__ PangoStretch ;
typedef int PangoFontDescription ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_6 (int ) ;

void FUNC_7(PangoFontDescription *VAR_6, uiFontDescriptor *VAR_7)
{
 PangoStyle VAR_8;
 PangoStretch VAR_9;

 VAR_7->Family = FUNC_6(FUNC_0(VAR_6));
 VAR_8 = FUNC_3(VAR_6);

 VAR_7->Weight = FUNC_4(VAR_6);
 VAR_9 = FUNC_2(VAR_6);

 VAR_7->Size = FUNC_5(FUNC_1(VAR_6));

 for (VAR_7->Italic = VAR_3; VAR_7->Italic < VAR_2; VAR_7->Italic++)
  if (VAR_0[VAR_7->Italic] == VAR_8)
   break;
 for (VAR_7->Stretch = VAR_4; VAR_7->Stretch < VAR_5; VAR_7->Stretch++)
  if (VAR_1[VAR_7->Stretch] == VAR_9)
   break;
}
