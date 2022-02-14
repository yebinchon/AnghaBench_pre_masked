
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qt1070_data {int last_keys; int * keycodes; struct input_dev* input; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int VAR_3 ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct qt1070_data *VAR_6 = VAR_5;
 struct i2c_client *VAR_7 = VAR_6->client;
 struct input_dev *VAR_8 = VAR_6->input;
 int VAR_9;
 u8 VAR_10, VAR_11, VAR_12 = 0x01;


 FUNC_3(VAR_7, VAR_0);


 VAR_10 = FUNC_3(VAR_7, VAR_2);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  VAR_11 = VAR_10 & VAR_12;
  if ((VAR_6->last_keys & VAR_12) != VAR_11)
   FUNC_1(VAR_8, VAR_6->keycodes[VAR_9], VAR_11);
  VAR_12 <<= 1;
 }
 FUNC_2(VAR_8);

 VAR_6->last_keys = VAR_10;
 return VAR_1;
}
