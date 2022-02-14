
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tpm_chip {int dev; } ;
struct st33zp24_platform_data {int io_lpcpd; } ;
struct st33zp24_i2c_phy {int io_lpcpd; } ;
struct st33zp24_dev {struct st33zp24_i2c_phy* phy_id; } ;
struct TYPE_3__ {struct st33zp24_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct st33zp24_dev* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct tpm_chip* FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_4(VAR_2);
 struct st33zp24_dev *VAR_4 = FUNC_1(&VAR_3->dev);
 struct st33zp24_i2c_phy *VAR_5 = VAR_4->phy_id;
 struct st33zp24_platform_data *VAR_6;
 int VAR_7;

 VAR_6 = VAR_2->dev.platform_data;
 if (!VAR_6) {
  FUNC_0(&VAR_2->dev, "No platform data\n");
  return -VAR_0;
 }


 VAR_5->io_lpcpd = VAR_6->io_lpcpd;

 if (FUNC_3(VAR_6->io_lpcpd)) {
  VAR_7 = FUNC_2(&VAR_2->dev,
    VAR_6->io_lpcpd, VAR_1,
    "TPM IO_LPCPD");
  if (VAR_7) {
   FUNC_0(&VAR_2->dev, "Failed to request lpcpd pin\n");
   return VAR_7;
  }
 }

 return 0;
}
