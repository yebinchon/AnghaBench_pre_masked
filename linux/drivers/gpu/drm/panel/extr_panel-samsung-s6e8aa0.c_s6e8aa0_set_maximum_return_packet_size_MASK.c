
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s6e8aa0 {int error; int dev; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct mipi_dsi_device*,int ) ;
 struct mipi_dsi_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct s6e8aa0 *VAR_0,
         u16 VAR_1)
{
 struct mipi_dsi_device *VAR_2 = FUNC_2(VAR_0->dev);
 int VAR_3;

 if (VAR_0->error < 0)
  return;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0->dev,
   "error %d setting maximum return packet size to %d\n",
   VAR_3, VAR_1);
  VAR_0->error = VAR_3;
 }
}
