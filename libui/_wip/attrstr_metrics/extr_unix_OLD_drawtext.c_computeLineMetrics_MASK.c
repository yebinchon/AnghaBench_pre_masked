
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ParagraphSpacing; scalar_t__ LineSpacing; scalar_t__ LineHeightSpace; scalar_t__ ParagraphSpacingBefore; scalar_t__ Leading; void* Descent; void* Ascent; void* BaselineY; void* Height; void* Width; void* Y; void* X; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
struct TYPE_13__ {int nLines; int layout; TYPE_1__* lineMetrics; } ;
typedef TYPE_2__ uiDrawTextLayout ;
struct TYPE_15__ {int start_index; } ;
struct TYPE_14__ {int x; int width; int height; } ;
typedef TYPE_3__ PangoRectangle ;
typedef TYPE_4__ PangoLayoutLine ;
typedef int PangoLayoutIter ;


 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__) ;
 void* FUNC_2 (int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int *,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int,char*) ;

__attribute__((used)) static void FUNC_11(uiDrawTextLayout *VAR_0)
{
 PangoLayoutIter *VAR_1;
 PangoLayoutLine *VAR_2;
 PangoRectangle VAR_3, VAR_4;
 int VAR_5, VAR_6;
 uiDrawTextLayoutLineMetrics *VAR_7;

 VAR_6 = VAR_0->nLines;
 VAR_0->lineMetrics = (uiDrawTextLayoutLineMetrics *) FUNC_10(VAR_6 * sizeof (uiDrawTextLayoutLineMetrics), "uiDrawTextLayoutLineMetrics[] (text layout)");
 VAR_1 = FUNC_3(VAR_0->layout);

 VAR_7 = VAR_0->lineMetrics;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  int VAR_8;


  VAR_8 = FUNC_6(VAR_1);
  VAR_2 = FUNC_7(VAR_1);
  FUNC_4(VAR_0->layout, VAR_2->start_index, &VAR_3);
  FUNC_9(VAR_2, ((void*)0), &VAR_4);



  VAR_7->X = FUNC_2(VAR_3.x);

  VAR_7->Y = FUNC_2(VAR_8 - FUNC_0(VAR_4));

  VAR_7->Width = FUNC_2(VAR_4.width);
  VAR_7->Height = FUNC_2(VAR_4.height);

  VAR_7->BaselineY = FUNC_2(VAR_8);
  VAR_7->Ascent = FUNC_2(FUNC_0(VAR_4));
  VAR_7->Descent = FUNC_2(FUNC_1(VAR_4));
  VAR_7->Leading = 0;

  VAR_7->ParagraphSpacingBefore = 0;
  VAR_7->LineHeightSpace = 0;
  VAR_7->LineSpacing = 0;
  VAR_7->ParagraphSpacing = 0;


  FUNC_8(VAR_1);
  VAR_7++;
 }

 FUNC_5(VAR_1);
}
