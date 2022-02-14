
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_queue {TYPE_1__* dev_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sec_queue*) ;
 int FUNC_2 (struct sec_queue*) ;

int FUNC_3(struct sec_queue *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev_info->dev;
 int VAR_2;

 FUNC_2(VAR_0);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  FUNC_0(VAR_1, "Releasing queue failed %d\n", VAR_2);

 return VAR_2;
}
