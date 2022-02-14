
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct nsa320_hwmon {int update_lock; void* data; void* clk; void* act; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct device* FUNC_4 (int *,char*,struct nsa320_hwmon*,int ) ;
 struct nsa320_hwmon* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct nsa320_hwmon *VAR_7;
 struct device *VAR_8;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_7->act = FUNC_3(&VAR_6->dev, "act", VAR_4);
 if (FUNC_0(VAR_7->act))
  return FUNC_1(VAR_7->act);

 VAR_7->clk = FUNC_3(&VAR_6->dev, "clk", VAR_3);
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 VAR_7->data = FUNC_3(&VAR_6->dev, "data", VAR_2);
 if (FUNC_0(VAR_7->data))
  return FUNC_1(VAR_7->data);

 FUNC_6(&VAR_7->update_lock);

 VAR_8 = FUNC_4(&VAR_6->dev,
     "nsa320", VAR_7, VAR_5);

 return FUNC_2(VAR_8);

}
