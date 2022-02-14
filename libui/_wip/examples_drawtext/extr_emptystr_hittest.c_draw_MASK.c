
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int X; int Y; scalar_t__ Height; scalar_t__ Width; } ;
typedef TYPE_1__ uiDrawTextLayoutLineMetrics ;
typedef int uiDrawTextLayout ;
typedef int uiDrawPath ;
struct TYPE_8__ {int Context; scalar_t__ AreaWidth; scalar_t__ AreaHeight; } ;
typedef TYPE_2__ uiAreaDrawParams ;
struct TYPE_9__ {scalar_t__ Width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int *,int ,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int,int) ;
 int FUNC_14 (int *,int,TYPE_1__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(uiAreaDrawParams *VAR_8)
{
 uiDrawPath *VAR_9;
 uiDrawTextLayout *VAR_10;
 uiDrawTextLayoutLineMetrics VAR_11;


 FUNC_12(VAR_8->Context);

 VAR_9 = FUNC_7(VAR_7);
 FUNC_9(VAR_9, VAR_4, VAR_4,
  VAR_8->AreaWidth - 2 * VAR_4,
  VAR_8->AreaHeight - 2 * VAR_4);
 FUNC_10(VAR_9);
 FUNC_3(VAR_8->Context, VAR_9);
 FUNC_5(VAR_9);

 VAR_5.Width = VAR_8->AreaWidth - 2 * VAR_4;
 VAR_10 = FUNC_8(&VAR_5);
 FUNC_13(VAR_8->Context, VAR_10, VAR_4, VAR_4);

 FUNC_11(VAR_8->Context);

 if (VAR_1 == -1) {
  VAR_1 = FUNC_15(VAR_10) - 1;
  VAR_2 = FUNC_0(VAR_0);
 }
 FUNC_2(VAR_8->Context, VAR_4, VAR_4,
  VAR_10, VAR_2, &VAR_1);

 if (FUNC_1(VAR_6)) {
  int VAR_12, VAR_13;
  int VAR_14 = 0;

  VAR_13 = FUNC_15(VAR_10);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   FUNC_14(VAR_10, VAR_12, &VAR_11);
   VAR_9 = FUNC_7(VAR_7);
   FUNC_9(VAR_9, VAR_4 + VAR_11.X, VAR_4 + VAR_11.Y,
    VAR_11.Width, VAR_11.Height);
   FUNC_10(VAR_9);
   FUNC_4(VAR_8->Context, VAR_9, VAR_3 + VAR_14);
   FUNC_5(VAR_9);
   VAR_14 = (VAR_14 + 1) % 4;
  }
 }

 FUNC_6(VAR_10);
}
