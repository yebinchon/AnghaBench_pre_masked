
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rm68200 {int dev; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mipi_dsi_device*,int ,int *,int) ;
 struct mipi_dsi_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rm68200 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_2(VAR_0->dev);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, &VAR_2, 1);
 if (VAR_4 < 0)
  FUNC_0("MIPI DSI DCS write failed: %d\n", VAR_4);
}
