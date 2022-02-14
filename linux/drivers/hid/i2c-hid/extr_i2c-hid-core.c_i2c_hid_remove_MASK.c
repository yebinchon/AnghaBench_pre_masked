
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int supplies; } ;
struct i2c_hid {TYPE_1__ pdata; scalar_t__ bufsize; struct hid_device* hid; } ;
struct i2c_client {int irq; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct i2c_hid*) ;
 int FUNC_2 (struct hid_device*) ;
 struct i2c_hid* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_hid*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct i2c_hid *VAR_1 = FUNC_3(VAR_0);
 struct hid_device *VAR_2;

 VAR_2 = VAR_1->hid;
 FUNC_2(VAR_2);

 FUNC_1(VAR_0->irq, VAR_1);

 if (VAR_1->bufsize)
  FUNC_4(VAR_1);

 FUNC_5(FUNC_0(VAR_1->pdata.supplies),
          VAR_1->pdata.supplies);

 return 0;
}
