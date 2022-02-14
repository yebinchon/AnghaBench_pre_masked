
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum mipi_dsi_dcs_tear_mode { ____Placeholder_mipi_dsi_dcs_tear_mode } mipi_dsi_dcs_tear_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mipi_dsi_device*,int ,int*,int) ;

int FUNC_1(struct mipi_dsi_device *VAR_1,
        enum mipi_dsi_dcs_tear_mode VAR_2)
{
 u8 VAR_3 = VAR_2;
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3,
     sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
