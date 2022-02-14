
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int * data; } ;
struct TYPE_4__ {int * d; } ;
struct TYPE_3__ {int * d; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 struct of_device_id* FUNC_2 (int ,struct device*) ;
 struct platform_device* FUNC_3 (struct device*,char*,int,int *,int ) ;
 int FUNC_4 (struct platform_device*,struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (struct device*,char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 const struct of_device_id *VAR_9;
 struct platform_device *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_2(VAR_2, &VAR_7->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_8, "cxo_board", "cxo", 19200000);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_8, "pxo_board", "pxo", 27000000);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_7, VAR_9->data);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->data == &VAR_1) {
  VAR_3 = &VAR_4;
  VAR_5 = &VAR_6;
 }

 VAR_10 = FUNC_3(&VAR_7->dev, "qcom-tsens", -1,
           ((void*)0), 0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_4(VAR_7, VAR_10);

 return 0;
}
