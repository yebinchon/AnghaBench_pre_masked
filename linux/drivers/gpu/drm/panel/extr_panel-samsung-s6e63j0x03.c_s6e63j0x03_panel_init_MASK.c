
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6e63j0x03 {int dev; } ;
struct mipi_dsi_device {int dummy; } ;
struct TYPE_2__ {int hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct mipi_dsi_device*) ;
 int FUNC_1 (struct mipi_dsi_device*,int,int) ;
 int FUNC_2 (struct mipi_dsi_device*,int ,scalar_t__) ;
 int FUNC_3 (struct s6e63j0x03*,int) ;
 int FUNC_4 (struct s6e63j0x03*,int,int,...) ;
 int FUNC_5 (struct s6e63j0x03*) ;
 struct mipi_dsi_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct s6e63j0x03 *VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_6(VAR_2->dev);
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xf2, 0x1c, 0x28);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xb5, 0x00, 0x02, 0x00);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0,
  VAR_1.hdisplay - 1 + VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3, 0, VAR_1.vdisplay - 1);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xf8, 0x08, 0x08, 0x08, 0x17,
  0x00, 0x2a, 0x02, 0x26, 0x00, 0x00, 0x02, 0x00, 0x00);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_2, 0xf7, 0x02);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xb0, 0x01);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xe2, 0x0f);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_4(VAR_2, 0xb0, 0x00);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, 0);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
