
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int format ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mipi_dsi_device*,int ,int *,int) ;

int FUNC_1(struct mipi_dsi_device *VAR_1, u8 VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2,
     sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
