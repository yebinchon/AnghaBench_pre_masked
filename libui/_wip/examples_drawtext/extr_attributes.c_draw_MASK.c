
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int X; int Y; scalar_t__ Height; scalar_t__ Width; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
typedef int uiDrawTextLayout ;
typedef int uiDrawPath ;
struct TYPE_9__ {int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
struct TYPE_10__ {int Context; scalar_t__ AreaWidth; scalar_t__ AreaHeight; } ;
typedef TYPE_3__ uiAreaDrawParams ;
struct TYPE_11__ {scalar_t__ Width; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *,int,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int,int) ;
 int FUNC_12 (int *,int,TYPE_1__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(uiAreaDrawParams *VAR_6)
{
 uiDrawPath *VAR_7;
 uiDrawTextLayout *VAR_8;
 uiDrawBrush VAR_9;

 VAR_9.Type = VAR_4;


 FUNC_10(VAR_6->Context);

 VAR_7 = FUNC_5(VAR_5);
 FUNC_7(VAR_7, VAR_1, VAR_1,
  VAR_6->AreaWidth - 2 * VAR_1,
  VAR_6->AreaHeight - 2 * VAR_1);
 FUNC_8(VAR_7);
 FUNC_1(VAR_6->Context, VAR_7);
 FUNC_3(VAR_7);

 VAR_2.Width = VAR_6->AreaWidth - 2 * VAR_1;
 VAR_8 = FUNC_6(&VAR_2);
 FUNC_11(VAR_6->Context, VAR_8, VAR_1, VAR_1);

 FUNC_9(VAR_6->Context);

 if (FUNC_0(VAR_3)) {
  uiDrawTextLayoutLineMetrics VAR_10;
  int VAR_11, VAR_12;
  int VAR_13 = 0;

  VAR_12 = FUNC_13(VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   FUNC_12(VAR_8, VAR_11, &VAR_10);

   VAR_7 = FUNC_5(VAR_5);
   FUNC_7(VAR_7, VAR_1 + VAR_10.X, VAR_1 + VAR_10.Y,
    VAR_10.Width, VAR_10.Height);
   FUNC_8(VAR_7);
   FUNC_2(VAR_6->Context, VAR_7, VAR_0 + VAR_13);
   FUNC_3(VAR_7);
   VAR_13 = (VAR_13 + 1) % 4;
  }
 }

 FUNC_4(VAR_8);
}
