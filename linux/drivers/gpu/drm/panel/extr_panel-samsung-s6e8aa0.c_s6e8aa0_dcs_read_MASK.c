
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6e8aa0 {int error; int dev; } ;
struct mipi_dsi_device {int dummy; } ;


 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct mipi_dsi_device*,int ,void*,size_t) ;
 struct mipi_dsi_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct s6e8aa0 *VAR_0, u8 VAR_1, void *VAR_2, size_t VAR_3)
{
 struct mipi_dsi_device *VAR_4 = FUNC_2(VAR_0->dev);
 int VAR_5;

 if (VAR_0->error < 0)
  return VAR_0->error;

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->dev, "error %d reading dcs seq(%#x)\n", VAR_5, VAR_1);
  VAR_0->error = VAR_5;
 }

 return VAR_5;
}
