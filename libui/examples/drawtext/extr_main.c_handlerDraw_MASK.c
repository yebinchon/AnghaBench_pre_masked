
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiFontDescriptor ;
struct TYPE_5__ {scalar_t__ Align; int Width; int * DefaultFont; int String; } ;
typedef TYPE_1__ uiDrawTextLayoutParams ;
typedef int uiDrawTextLayout ;
typedef scalar_t__ uiDrawTextAlign ;
typedef int uiAreaHandler ;
struct TYPE_6__ {int Context; int AreaWidth; } ;
typedef TYPE_2__ uiAreaDrawParams ;
typedef int uiArea ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uiAreaHandler *VAR_3, uiArea *VAR_4, uiAreaDrawParams *VAR_5)
{
 uiDrawTextLayout *VAR_6;
 uiFontDescriptor VAR_7;
 uiDrawTextLayoutParams VAR_8;

 VAR_8.String = VAR_1;
 FUNC_4(VAR_2, &VAR_7);
 VAR_8.DefaultFont = &VAR_7;
 VAR_8.Width = VAR_5->AreaWidth;
 VAR_8.Align = (uiDrawTextAlign) FUNC_0(VAR_0);
 VAR_6 = FUNC_2(&VAR_8);
 FUNC_3(VAR_5->Context, VAR_6, 0, 0);
 FUNC_1(VAR_6);
 FUNC_5(&VAR_7);
}
