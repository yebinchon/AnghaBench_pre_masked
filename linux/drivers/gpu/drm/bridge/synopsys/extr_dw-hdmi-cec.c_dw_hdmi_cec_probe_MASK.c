
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dw_hdmi_cec_data {int hdmi; int ops; int irq; } ;
struct dw_hdmi_cec {int notify; TYPE_2__* adap; int irq; int hdmi; int ops; } ;
struct TYPE_14__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_11 ;
 TYPE_2__* FUNC_2 (int *,struct dw_hdmi_cec*,char*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 struct dw_hdmi_cec_data* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,struct dw_hdmi_cec*) ;
 struct dw_hdmi_cec* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,struct dw_hdmi_cec*) ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ,int ,char*,TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (struct dw_hdmi_cec*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct dw_hdmi_cec*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct dw_hdmi_cec_data *VAR_17 = FUNC_7(&VAR_16->dev);
 struct dw_hdmi_cec *VAR_18;
 int VAR_19;

 if (!VAR_17)
  return -VAR_4;






 VAR_18 = FUNC_9(&VAR_16->dev, sizeof(*VAR_18), VAR_5);
 if (!VAR_18)
  return -VAR_3;

 VAR_18->irq = VAR_17->irq;
 VAR_18->ops = VAR_17->ops;
 VAR_18->hdmi = VAR_17->hdmi;

 FUNC_13(VAR_16, VAR_18);

 FUNC_12(VAR_18, 0, VAR_8);
 FUNC_12(VAR_18, ~0, VAR_6);
 FUNC_12(VAR_18, ~0, VAR_9);
 FUNC_12(VAR_18, 0, VAR_7);

 VAR_18->adap = FUNC_2(&VAR_14, VAR_18, "dw_hdmi",
      VAR_1 |
      VAR_0,
      VAR_2);
 if (FUNC_0(VAR_18->adap))
  return FUNC_1(VAR_18->adap);


 VAR_18->adap->owner = VAR_11;

 VAR_19 = FUNC_8(&VAR_16->dev, VAR_12, VAR_18);
 if (VAR_19) {
  FUNC_3(VAR_18->adap);
  return VAR_19;
 }

 VAR_19 = FUNC_11(&VAR_16->dev, VAR_18->irq,
     VAR_13,
     VAR_15, VAR_10,
     "dw-hdmi-cec", VAR_18->adap);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18->notify = FUNC_4(VAR_16->dev.parent,
           ((void*)0), VAR_18->adap);
 if (!VAR_18->notify)
  return -VAR_3;

 VAR_19 = FUNC_6(VAR_18->adap, VAR_16->dev.parent);
 if (VAR_19 < 0) {
  FUNC_5(VAR_18->notify);
  return VAR_19;
 }





 FUNC_10(&VAR_16->dev, VAR_12, VAR_18);

 return 0;
}
