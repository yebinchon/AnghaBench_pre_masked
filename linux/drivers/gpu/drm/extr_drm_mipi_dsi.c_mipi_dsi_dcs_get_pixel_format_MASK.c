
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mipi_dsi_device*,int ,int *,int) ;

int FUNC_1(struct mipi_dsi_device *VAR_2, u8 *VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3,
    sizeof(*VAR_3));
 if (VAR_4 <= 0) {
  if (VAR_4 == 0)
   VAR_4 = -VAR_0;

  return VAR_4;
 }

 return 0;
}
