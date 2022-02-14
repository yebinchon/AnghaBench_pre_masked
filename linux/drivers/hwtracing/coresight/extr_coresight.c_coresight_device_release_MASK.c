
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int fwnode; } ;
struct coresight_device {struct coresight_device* refcnt; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct coresight_device*) ;
 struct coresight_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct coresight_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->dev.fwnode);
 FUNC_1(VAR_1->refcnt);
 FUNC_1(VAR_1);
}
