
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e63j0x03 {int bl_dev; int panel; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mipi_dsi_device*) ;
 struct s6e63j0x03* FUNC_3 (struct mipi_dsi_device*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_device *VAR_0)
{
 struct s6e63j0x03 *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->panel);

 FUNC_0(VAR_1->bl_dev);

 return 0;
}
