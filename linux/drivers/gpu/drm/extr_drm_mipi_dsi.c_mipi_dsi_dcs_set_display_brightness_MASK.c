
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mipi_dsi_device*,int ,int*,int) ;

int FUNC_1(struct mipi_dsi_device *VAR_1,
     u16 VAR_2)
{
 u8 VAR_3[2] = { VAR_2 & 0xff, VAR_2 >> 8 };
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0,
     VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
