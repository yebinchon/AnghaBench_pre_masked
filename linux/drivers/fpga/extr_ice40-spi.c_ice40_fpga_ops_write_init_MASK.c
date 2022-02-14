
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int cs_change; int delay_usecs; } ;
struct spi_message {int dummy; } ;
struct spi_device {int master; int dev; } ;
struct ice40_fpga_priv {int cdone; int reset; struct spi_device* dev; } ;
struct fpga_manager {struct ice40_fpga_priv* priv; } ;
struct fpga_image_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_8(struct fpga_manager *VAR_5,
         struct fpga_image_info *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 struct ice40_fpga_priv *VAR_9 = VAR_5->priv;
 struct spi_device *VAR_10 = VAR_9->dev;
 struct spi_message VAR_11;
 struct spi_transfer VAR_12 = {
  .cs_change = 1,
  .delay_usecs = VAR_4
 };
 struct spi_transfer VAR_13 = {
  .delay_usecs = VAR_3
 };
 int VAR_14;

 if ((VAR_6->flags & VAR_2)) {
  FUNC_0(&VAR_10->dev,
   "Partial reconfiguration is not supported\n");
  return -VAR_1;
 }


 FUNC_3(VAR_10->master);

 FUNC_2(VAR_9->reset, 1);

 FUNC_6(&VAR_11);
 FUNC_5(&VAR_12, &VAR_11);
 VAR_14 = FUNC_7(VAR_10, &VAR_11);


 FUNC_2(VAR_9->reset, 0);


 if (VAR_14)
  goto fail;


 if (FUNC_1(VAR_9->cdone)) {
  FUNC_0(&VAR_10->dev, "Device reset failed, CDONE is asserted\n");
  VAR_14 = -VAR_0;
  goto fail;
 }


 FUNC_6(&VAR_11);
 FUNC_5(&VAR_13, &VAR_11);
 VAR_14 = FUNC_7(VAR_10, &VAR_11);

fail:
 FUNC_4(VAR_10->master);

 return VAR_14;
}
