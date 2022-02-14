
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Thickness; int MiterLimit; int Join; int Cap; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
struct TYPE_8__ {int A; scalar_t__ B; scalar_t__ G; scalar_t__ R; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
struct TYPE_9__ {int Context; } ;
typedef TYPE_3__ uiAreaDrawParams ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,int,double,double,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int,int,double,double,int ) ;
 int FUNC_6 (int ,int *,TYPE_2__*,TYPE_1__*) ;
 double VAR_5 ;

__attribute__((used)) static void FUNC_7(uiAreaDrawParams *VAR_6)
{
 uiDrawPath *VAR_7;
 int VAR_8 = 20;
 int VAR_9 = 20;
 int VAR_10 = 25;
 int VAR_11, VAR_12;
 double VAR_13;
 double VAR_14;
 int VAR_15;
 uiDrawBrush VAR_16;
 uiDrawStrokeParams VAR_17;

 VAR_17.Dashes = ((void*)0);
 VAR_17.NumDashes = 0;
 VAR_17.DashPhase = 0;

 VAR_7 = FUNC_1(VAR_2);

 VAR_14 = (2.0 * VAR_5) / 12;

 VAR_11 = VAR_8 + VAR_10;
 VAR_12 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_5(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   0, VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 VAR_12 += 2 * VAR_10 + VAR_9;
 VAR_11 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_4(VAR_7, VAR_11, VAR_12);
  FUNC_2(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   0, VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 VAR_12 += 2 * VAR_10 + VAR_9;
 VAR_11 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_5(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   (VAR_5 / 4), VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 VAR_12 += 2 * VAR_10 + VAR_9;
 VAR_11 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_4(VAR_7, VAR_11, VAR_12);
  FUNC_2(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   (VAR_5 / 4), VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 VAR_12 += 2 * VAR_10 + VAR_9;
 VAR_11 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_5(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   VAR_5 + (VAR_5 / 5), VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 VAR_12 += 2 * VAR_10 + VAR_9;
 VAR_11 = VAR_8 + VAR_10;
 VAR_13 = 0;
 for (VAR_15 = 0; VAR_15 < 13; VAR_15++) {
  FUNC_4(VAR_7, VAR_11, VAR_12);
  FUNC_2(VAR_7,
   VAR_11, VAR_12,
   VAR_10,
   VAR_5 + (VAR_5 / 5), VAR_13,
   0);
  VAR_13 += VAR_14;
  VAR_11 += 2 * VAR_10 + VAR_9;
 }

 FUNC_3(VAR_7);

 VAR_16.Type = VAR_0;
 VAR_16.R = 0;
 VAR_16.G = 0;
 VAR_16.B = 0;
 VAR_16.A = 1;
 VAR_17.Cap = VAR_3;
 VAR_17.Join = VAR_4;
 VAR_17.Thickness = 1;
 VAR_17.MiterLimit = VAR_1;
 FUNC_6(VAR_6->Context, VAR_7, &VAR_16, &VAR_17);

 FUNC_0(VAR_7);
}
