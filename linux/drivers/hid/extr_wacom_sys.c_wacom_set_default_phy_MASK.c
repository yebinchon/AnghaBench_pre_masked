
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int x_resolution; int x_phy; int x_max; int y_phy; int y_max; int y_resolution; } ;



__attribute__((used)) static void FUNC_0(struct wacom_features *VAR_0)
{
 if (VAR_0->x_resolution) {
  VAR_0->x_phy = (VAR_0->x_max * 100) /
     VAR_0->x_resolution;
  VAR_0->y_phy = (VAR_0->y_max * 100) /
     VAR_0->y_resolution;
 }
}
