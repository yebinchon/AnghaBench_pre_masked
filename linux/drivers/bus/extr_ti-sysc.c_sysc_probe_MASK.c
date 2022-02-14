
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ti_sysc_platform_data {int * auxdata; } ;
struct TYPE_11__ {int quirks; } ;
struct sysc {int idle_work; TYPE_1__ cfg; TYPE_2__* dev; scalar_t__ rsts; } ;
struct TYPE_12__ {int of_node; int * type; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ti_sysc_platform_data* FUNC_1 (TYPE_2__*) ;
 struct sysc* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int ,int ,int *,TYPE_2__*) ;
 int FUNC_4 (struct platform_device*,struct sysc*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int) ;
 int VAR_5 ;
 int FUNC_13 (struct sysc*) ;
 int FUNC_14 (struct sysc*) ;
 int FUNC_15 (struct sysc*) ;
 int FUNC_16 (struct sysc*) ;
 int FUNC_17 (struct sysc*) ;
 int FUNC_18 (struct sysc*) ;
 int FUNC_19 (struct sysc*) ;
 int FUNC_20 (struct sysc*) ;
 int FUNC_21 (struct sysc*) ;
 int FUNC_22 (struct sysc*) ;
 int FUNC_23 (struct sysc*) ;
 int VAR_6 ;
 int FUNC_24 (struct sysc*) ;
 int FUNC_25 (struct sysc*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_8)
{
 struct ti_sysc_platform_data *VAR_9 = FUNC_1(&VAR_8->dev);
 struct sysc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_8->dev;
 FUNC_4(VAR_8, VAR_10);

 VAR_11 = FUNC_17(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_23(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_21(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_16(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_22(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_19(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_15(VAR_10);

 VAR_11 = FUNC_13(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_20(VAR_10);
 if (VAR_11)
  goto unprepare;

 VAR_11 = FUNC_18(VAR_10);
 if (VAR_11)
  goto unprepare;

 FUNC_6(VAR_10->dev);
 VAR_11 = FUNC_7(VAR_10->dev);
 if (VAR_11 < 0) {
  FUNC_9(VAR_10->dev);
  FUNC_5(VAR_10->dev);
  goto unprepare;
 }


 if (VAR_10->rsts)
  FUNC_11(VAR_10->rsts);

 FUNC_24(VAR_10);

 VAR_10->dev->type = &VAR_5;
 VAR_11 = FUNC_3(VAR_10->dev->of_node, VAR_6,
         VAR_9 ? VAR_9->auxdata : ((void*)0),
         VAR_10->dev);
 if (VAR_11)
  goto err;

 FUNC_0(&VAR_10->idle_work, VAR_7);


 if (VAR_10->cfg.quirks & (VAR_2 |
     VAR_3 |
     VAR_4)) {
  FUNC_12(&VAR_10->idle_work, 3000);
 } else {
  FUNC_8(&VAR_8->dev);
 }

 return 0;

err:
 FUNC_10(&VAR_8->dev);
 FUNC_5(&VAR_8->dev);
unprepare:
 FUNC_25(VAR_10);

 return VAR_11;
}
