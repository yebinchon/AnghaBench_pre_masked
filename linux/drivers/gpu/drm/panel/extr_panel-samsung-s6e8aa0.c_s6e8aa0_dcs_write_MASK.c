
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e8aa0 {scalar_t__ error; int dev; } ;
struct mipi_dsi_device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ,char*,scalar_t__,int,void const*) ;
 scalar_t__ FUNC_1 (struct mipi_dsi_device*,void const*,size_t) ;
 struct mipi_dsi_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct s6e8aa0 *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct mipi_dsi_device *VAR_3 = FUNC_2(VAR_0->dev);
 ssize_t VAR_4;

 if (VAR_0->error < 0)
  return;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "error %zd writing dcs seq: %*ph\n", VAR_4,
   (int)VAR_2, VAR_1);
  VAR_0->error = VAR_4;
 }
}
