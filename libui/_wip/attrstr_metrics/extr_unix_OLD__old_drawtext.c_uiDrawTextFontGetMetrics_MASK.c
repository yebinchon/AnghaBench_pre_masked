
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* UnderlineThickness; void* UnderlinePos; scalar_t__ Leading; void* Descent; void* Ascent; } ;
typedef TYPE_1__ uiDrawTextFontMetrics ;
struct TYPE_6__ {int f; } ;
typedef TYPE_2__ uiDrawTextFont ;
typedef int PangoFontMetrics ;


 void* FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(uiDrawTextFont *VAR_0, uiDrawTextFontMetrics *VAR_1)
{
 PangoFontMetrics *VAR_2;

 VAR_2 = FUNC_1(VAR_0->f, ((void*)0));
 VAR_1->Ascent = FUNC_0(FUNC_2(VAR_2));
 VAR_1->Descent = FUNC_0(FUNC_3(VAR_2));

 VAR_1->Leading = 0;
 VAR_1->UnderlinePos = FUNC_0(FUNC_4(VAR_2));
 VAR_1->UnderlineThickness = FUNC_0(FUNC_5(VAR_2));
 FUNC_6(VAR_2);
}
