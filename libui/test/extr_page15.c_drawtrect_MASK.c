
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiDrawPath ;
typedef int uiDrawContext ;
struct TYPE_4__ {double R; double G; double B; double A; int Type; } ;
typedef TYPE_1__ uiDrawBrush ;
struct trect {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ in; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uiDrawContext *VAR_2, struct trect VAR_3, double VAR_4, double VAR_5, double VAR_6)
{
 uiDrawPath *VAR_7;
 uiDrawBrush VAR_8;

 FUNC_0(&VAR_8, 0, sizeof (uiDrawBrush));
 VAR_8.Type = VAR_0;
 VAR_8.R = VAR_4;
 VAR_8.G = VAR_5;
 VAR_8.B = VAR_6;
 VAR_8.A = 1.0;
 if (VAR_3.in) {
  VAR_8.R += VAR_8.R * 0.75;
  VAR_8.G += VAR_8.G * 0.75;
  VAR_8.B += VAR_8.B * 0.75;
 }
 VAR_7 = FUNC_3(VAR_1);
 FUNC_4(VAR_7,
  VAR_3.left,
  VAR_3.top,
  VAR_3.right - VAR_3.left,
  VAR_3.bottom - VAR_3.top);
 FUNC_5(VAR_7);
 FUNC_1(VAR_2, VAR_7, &VAR_8);
 FUNC_2(VAR_7);
}
