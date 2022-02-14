
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; int alias; } ;
struct b53_device {TYPE_2__ sw_dev; int core_rev; int chip_id; TYPE_1__* pdata; int enabled_ports; } ;
struct TYPE_3__ {int alias; int enabled_ports; int chip_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(struct b53_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->pdata) {
  VAR_1->chip_id = VAR_1->pdata->chip_id;
  VAR_1->enabled_ports = VAR_1->pdata->enabled_ports;
  VAR_1->sw_dev.alias = VAR_1->pdata->alias;
 }

 if (!VAR_1->chip_id && FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2("found switch: %s, rev %i\n", VAR_1->sw_dev.name, VAR_1->core_rev);

 return FUNC_3(&VAR_1->sw_dev, ((void*)0));
}
