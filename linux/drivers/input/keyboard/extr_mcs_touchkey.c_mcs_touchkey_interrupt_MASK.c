
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_touchkey_chip {int pressbit; int press_invert; scalar_t__ baseval; int status_reg; } ;
struct mcs_touchkey_data {unsigned int key_val; int key_code; int * keycodes; struct input_dev* input_dev; struct i2c_client* client; struct mcs_touchkey_chip chip; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,int ,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*,int ,unsigned int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct mcs_touchkey_data *VAR_5 = VAR_4;
 struct mcs_touchkey_chip *VAR_6 = &VAR_5->chip;
 struct i2c_client *VAR_7 = VAR_5->client;
 struct input_dev *VAR_8 = VAR_5->input_dev;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_6->status_reg);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_7->dev, "i2c read error [%d]\n", VAR_11);
  goto out;
 }

 VAR_10 = (VAR_11 & (1 << VAR_6->pressbit)) >> VAR_6->pressbit;
 if (VAR_6->press_invert)
  VAR_10 ^= VAR_6->press_invert;


 if (VAR_10) {
  VAR_9 = VAR_11 & (0xff >> (8 - VAR_6->pressbit));
  if (!VAR_9)
   goto out;
  VAR_9 -= VAR_6->baseval;
  VAR_5->key_code = VAR_5->keycodes[VAR_9];
  VAR_5->key_val = VAR_9;
 }

 FUNC_3(VAR_8, VAR_0, VAR_2, VAR_5->key_val);
 FUNC_4(VAR_8, VAR_5->key_code, VAR_10);
 FUNC_5(VAR_8);

 FUNC_0(&VAR_7->dev, "key %d %d %s\n", VAR_5->key_val, VAR_5->key_code,
  VAR_10 ? "pressed" : "released");

 out:
 return VAR_1;
}
