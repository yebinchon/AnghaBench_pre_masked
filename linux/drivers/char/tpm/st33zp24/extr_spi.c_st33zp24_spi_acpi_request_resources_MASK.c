
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct st33zp24_spi_phy {int io_lpcpd; } ;
struct st33zp24_dev {struct st33zp24_spi_phy* phy_id; } ;
struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int VAR_1 ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*) ;
 struct st33zp24_dev* FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int ) ;
 struct gpio_desc* FUNC_5 (struct device*,char*,int ) ;
 struct tpm_chip* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_6(VAR_2);
 struct st33zp24_dev *VAR_4 = FUNC_3(&VAR_3->dev);
 struct st33zp24_spi_phy *VAR_5 = VAR_4->phy_id;
 struct gpio_desc *VAR_6;
 struct device *VAR_7 = &VAR_2->dev;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (VAR_8)
  return VAR_8;


 VAR_6 = FUNC_5(VAR_7, "lpcpd", VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_7, "Failed to retrieve lpcpd-gpios from acpi.\n");
  VAR_5->io_lpcpd = -1;





  return 0;
 }

 VAR_5->io_lpcpd = FUNC_1(VAR_6);

 return 0;
}
