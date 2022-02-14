
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tc358764 {scalar_t__ error; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int data ;


 scalar_t__ FUNC_0 (struct mipi_dsi_device*,int*,int) ;
 struct mipi_dsi_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tc358764 *VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_1(VAR_0->dev);
 ssize_t VAR_4;
 u8 VAR_5[6];

 if (VAR_0->error)
  return;

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_1 >> 8;
 VAR_5[2] = VAR_2;
 VAR_5[3] = VAR_2 >> 8;
 VAR_5[4] = VAR_2 >> 16;
 VAR_5[5] = VAR_2 >> 24;

 VAR_4 = FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  VAR_0->error = VAR_4;
}
