
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; size_t Weight; size_t Italic; size_t Stretch; int Family; } ;
typedef TYPE_1__ uiDrawTextFontDescriptor ;
typedef int uiDrawTextFont ;
typedef int gint ;
typedef int PangoFontDescription ;
typedef int PangoFont ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

uiDrawTextFont *FUNC_9(const uiDrawTextFontDescriptor *VAR_5)
{
 PangoFont *VAR_6;
 PangoFontDescription *VAR_7;

 VAR_7 = FUNC_3();
 FUNC_4(VAR_7,
  VAR_5->Family);
 FUNC_5(VAR_7,
  (gint) (VAR_5->Size * VAR_1));
 FUNC_8(VAR_7,
  VAR_4[VAR_5->Weight]);
 FUNC_7(VAR_7,
  VAR_2[VAR_5->Italic]);
 FUNC_6(VAR_7,
  VAR_3[VAR_5->Stretch]);
 VAR_6 = FUNC_1(VAR_7);
 FUNC_2(VAR_7);
 return FUNC_0(VAR_6, VAR_0);
}
