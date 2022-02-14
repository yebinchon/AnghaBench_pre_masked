
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tc358764 {int dev; scalar_t__ error; } ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int addr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct mipi_dsi_device*,int *,int,int *,int) ;
 struct mipi_dsi_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tc358764 *VAR_0, u16 VAR_1, u32 *VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_4(VAR_0->dev);
 ssize_t VAR_4;

 if (VAR_0->error)
  return;

 FUNC_0(&VAR_1);
 VAR_4 = FUNC_3(VAR_3, &VAR_1, sizeof(VAR_1), VAR_2, sizeof(*VAR_2));
 if (VAR_4 >= 0)
  FUNC_2(VAR_2);

 FUNC_1(VAR_0->dev, "read: %d, addr: %d\n", VAR_1, *VAR_2);
}
