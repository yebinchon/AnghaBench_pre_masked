
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double Thickness; scalar_t__ DashPhase; scalar_t__ NumDashes; int * Dashes; int MiterLimit; int Join; int Cap; } ;
typedef TYPE_1__ uiDrawStrokeParams ;
typedef int uiDrawPath ;
struct TYPE_8__ {int A; scalar_t__ B; scalar_t__ G; scalar_t__ R; int Type; } ;
typedef TYPE_2__ uiDrawBrush ;
typedef int uiAreaHandler ;
struct TYPE_9__ {int Context; } ;
typedef TYPE_3__ uiAreaDrawParams ;
typedef int uiArea ;


 double FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,double,double,double,double,double,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,double,double) ;
 int FUNC_7 (int ,int *,TYPE_2__*,TYPE_1__*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(uiAreaHandler *VAR_10, uiArea *VAR_11, uiAreaDrawParams *VAR_12)
{
 double VAR_13 = 128.0;
 double VAR_14 = 128.0;
 double VAR_15 = 100.0;
 uiDrawBrush VAR_16;
 uiDrawStrokeParams VAR_17;
 uiDrawPath *VAR_18;
 char *VAR_19;
 char *VAR_20;
 double VAR_21;

 VAR_16.Type = VAR_4;
 VAR_16.R = 0;
 VAR_16.G = 0;
 VAR_16.B = 0;
 VAR_16.A = 1;
 VAR_17.Cap = VAR_7;
 VAR_17.Join = VAR_8;
 VAR_17.MiterLimit = VAR_5;
 VAR_17.Dashes = ((void*)0);
 VAR_17.NumDashes = 0;
 VAR_17.DashPhase = 0;

 VAR_19 = FUNC_8(VAR_2);
 VAR_20 = FUNC_8(VAR_3);

 VAR_21 = VAR_9 / 180;
 if (FUNC_1(VAR_1))
  VAR_21 = 1;

 VAR_17.Thickness = 10.0;
 VAR_18 = FUNC_3(VAR_6);
 FUNC_6(VAR_18, VAR_13, VAR_14);
 FUNC_4(VAR_18,
  VAR_13, VAR_14,
  VAR_15,
  FUNC_0(VAR_19) * VAR_21,
  FUNC_0(VAR_20) * VAR_21,
  FUNC_1(VAR_0));
 FUNC_5(VAR_18);
 FUNC_7(VAR_12->Context, VAR_18, &VAR_16, &VAR_17);
 FUNC_2(VAR_18);

 FUNC_9(VAR_19);
 FUNC_9(VAR_20);
}
