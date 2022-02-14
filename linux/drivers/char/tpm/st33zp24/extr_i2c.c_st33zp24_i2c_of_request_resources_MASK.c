
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tpm_chip {int dev; } ;
struct st33zp24_i2c_phy {int io_lpcpd; } ;
struct st33zp24_dev {struct st33zp24_i2c_phy* phy_id; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct st33zp24_dev* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int ,char*) ;
 struct tpm_chip* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_3(VAR_2);
 struct st33zp24_dev *VAR_4 = FUNC_1(&VAR_3->dev);
 struct st33zp24_i2c_phy *VAR_5 = VAR_4->phy_id;
 struct device_node *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->dev.of_node;
 if (!VAR_6) {
  FUNC_0(&VAR_2->dev, "No platform data\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_4(VAR_6, "lpcpd-gpios", 0);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_2->dev,
   "Failed to retrieve lpcpd-gpios from dts.\n");
  VAR_5->io_lpcpd = -1;





  return 0;
 }

 VAR_8 = FUNC_2(&VAR_2->dev, VAR_7,
   VAR_1, "TPM IO LPCPD");
 if (VAR_8) {
  FUNC_0(&VAR_2->dev, "Failed to request lpcpd pin\n");
  return -VAR_0;
 }
 VAR_5->io_lpcpd = VAR_7;

 return 0;
}
