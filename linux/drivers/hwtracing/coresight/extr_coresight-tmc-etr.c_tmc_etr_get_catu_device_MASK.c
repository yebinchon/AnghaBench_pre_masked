
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmc_drvdata {struct coresight_device* csdev; } ;
struct coresight_device {TYPE_2__* pdata; } ;
struct TYPE_4__ {int nr_outport; TYPE_1__* conns; } ;
struct TYPE_3__ {struct coresight_device* child_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct coresight_device*) ;

struct coresight_device *
FUNC_2(struct tmc_drvdata *VAR_1)
{
 int VAR_2;
 struct coresight_device *VAR_3, *VAR_4 = VAR_1->csdev;

 if (!FUNC_0(VAR_0))
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_4->pdata->nr_outport; VAR_2++) {
  VAR_3 = VAR_4->pdata->conns[VAR_2].child_dev;
  if (VAR_3 && FUNC_1(VAR_3))
   return VAR_3;
 }

 return ((void*)0);
}
