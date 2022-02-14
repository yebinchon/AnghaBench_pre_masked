
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sharp_panel {struct mipi_dsi_device* link1; } ;
struct mipi_dsi_device {int dev; } ;
typedef scalar_t__ ssize_t ;
typedef int payload ;


 int FUNC_0 (int *,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mipi_dsi_device*) ;
 scalar_t__ FUNC_2 (struct mipi_dsi_device*,int*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct sharp_panel *VAR_0, u16 VAR_1, u8 VAR_2)
{
 u8 VAR_3[3] = { VAR_1 >> 8, VAR_1 & 0xff, VAR_2 };
 struct mipi_dsi_device *VAR_4 = VAR_0->link1;
 ssize_t VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3, sizeof(VAR_3));
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "failed to write %02x to %04x: %zd\n",
   VAR_2, VAR_1, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "failed to send DCS nop: %zd\n", VAR_5);
  return VAR_5;
 }

 FUNC_3(10, 20);

 return 0;
}
