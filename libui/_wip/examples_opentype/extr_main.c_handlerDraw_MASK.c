
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Align; int Width; int * DefaultFont; int String; } ;
typedef TYPE_1__ uiDrawTextLayoutParams ;
typedef int uiDrawTextLayout ;
typedef int uiDrawFontDescriptor ;
typedef int uiAreaHandler ;
struct TYPE_7__ {int Context; int AreaWidth; } ;
typedef TYPE_2__ uiAreaDrawParams ;
typedef int uiArea ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(uiAreaHandler *VAR_3, uiArea *VAR_4, uiAreaDrawParams *VAR_5)
{
 uiDrawTextLayout *VAR_6;
 uiDrawTextLayoutParams VAR_7;
 uiDrawFontDescriptor VAR_8;

 FUNC_0(&VAR_7, 0, sizeof (uiDrawTextLayoutParams));
 VAR_7.String = VAR_0;
 FUNC_4(VAR_1, &VAR_8);
 VAR_7.DefaultFont = &VAR_8;
 VAR_7.Width = VAR_5->AreaWidth;
 VAR_7.Align = VAR_2;
 VAR_6 = FUNC_2(&VAR_7);
 FUNC_3(VAR_5->Context, VAR_6, 0, 0);
 FUNC_1(VAR_6);
}
