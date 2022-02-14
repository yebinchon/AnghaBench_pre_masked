
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct rtl8366_smi* FUNC_0 (int) ;
 int FUNC_1 (struct rtl8366_smi*) ;
 struct rtl8366_smi* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct platform_device*,struct rtl8366_smi*) ;
 int FUNC_4 (struct platform_device*,struct rtl8366_smi*) ;

struct rtl8366_smi *FUNC_5(struct platform_device *VAR_0)
{
 struct rtl8366_smi *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(&VAR_0->dev);
 if (!VAR_1)
  return ((void*)0);

 if (VAR_0->dev.of_node)
  VAR_2 = FUNC_3(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_4(VAR_0, VAR_1);

 if (VAR_2)
  goto free_smi;

 return VAR_1;

free_smi:
 FUNC_1(VAR_1);
 return FUNC_0(VAR_2);
}
