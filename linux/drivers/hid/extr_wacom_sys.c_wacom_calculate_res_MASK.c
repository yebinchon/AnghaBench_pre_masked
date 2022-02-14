
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int unit; int unitExpo; int y_phy; int y_max; void* y_resolution; int x_phy; int x_max; void* x_resolution; } ;


 void* FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct wacom_features *VAR_0)
{

 if (!VAR_0->unit) {
  VAR_0->unit = 0x11;
  VAR_0->unitExpo = -3;
 }

 VAR_0->x_resolution = FUNC_0(VAR_0->x_max,
          VAR_0->x_phy,
          VAR_0->unit,
          VAR_0->unitExpo);
 VAR_0->y_resolution = FUNC_0(VAR_0->y_max,
          VAR_0->y_phy,
          VAR_0->unit,
          VAR_0->unitExpo);
}
