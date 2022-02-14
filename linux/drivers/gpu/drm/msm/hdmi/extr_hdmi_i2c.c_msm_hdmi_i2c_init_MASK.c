
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct i2c_adapter {int * algo; TYPE_1__ dev; int name; int class; int owner; } ;
struct hdmi_i2c_adapter {int ddc_event; struct hdmi* hdmi; struct i2c_adapter base; } ;
struct hdmi {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int *) ;
 struct hdmi_i2c_adapter* FUNC_3 (int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (int ,int,char*) ;

struct i2c_adapter *FUNC_6(struct hdmi *VAR_5)
{
 struct hdmi_i2c_adapter *VAR_6;
 struct i2c_adapter *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_7 = &VAR_6->base;

 VAR_6->hdmi = VAR_5;
 FUNC_2(&VAR_6->ddc_event);


 VAR_7->owner = VAR_3;
 VAR_7->class = VAR_2;
 FUNC_5(VAR_7->name, sizeof(VAR_7->name), "msm hdmi i2c");
 VAR_7->dev.parent = &VAR_5->pdev->dev;
 VAR_7->algo = &VAR_4;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  goto fail;

 return VAR_7;

fail:
 if (VAR_7)
  FUNC_4(VAR_7);
 return FUNC_0(VAR_8);
}
