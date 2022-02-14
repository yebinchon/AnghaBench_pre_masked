
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Type; size_t NumStops; TYPE_1__* Stops; int OuterRadius; int Y1; int X1; int Y0; int X0; int A; int B; int G; int R; } ;
typedef TYPE_2__ uiDrawBrush ;
typedef int cairo_pattern_t ;
struct TYPE_4__ {int A; int B; int G; int R; int Pos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int * FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int * FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;



 int FUNC_6 (char*,int ) ;

__attribute__((used)) static cairo_pattern_t *FUNC_7(uiDrawBrush *VAR_1)
{
 cairo_pattern_t *VAR_2;
 size_t VAR_3;

 switch (VAR_1->Type) {
 case 128:
  VAR_2 = FUNC_3(VAR_1->R, VAR_1->G, VAR_1->B, VAR_1->A);
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_1->X0, VAR_1->Y0, VAR_1->X1, VAR_1->Y1);
  break;
 case 129:

  VAR_2 = FUNC_2(
   VAR_1->X0, VAR_1->Y0, 0,
   VAR_1->X1, VAR_1->Y1, VAR_1->OuterRadius);
  break;

 }
 if (FUNC_4(VAR_2) != VAR_0)
  FUNC_6("error creating pattern in mkbrush(): %s",
   FUNC_5(FUNC_4(VAR_2)));
 switch (VAR_1->Type) {
 case 130:
 case 129:
  for (VAR_3 = 0; VAR_3 < VAR_1->NumStops; VAR_3++)
   FUNC_0(VAR_2,
    VAR_1->Stops[VAR_3].Pos,
    VAR_1->Stops[VAR_3].R,
    VAR_1->Stops[VAR_3].G,
    VAR_1->Stops[VAR_3].B,
    VAR_1->Stops[VAR_3].A);
 }
 return VAR_2;
}
