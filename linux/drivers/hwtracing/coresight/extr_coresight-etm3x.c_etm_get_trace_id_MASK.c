
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etm_drvdata {int traceid; int spinlock; int base; int mode; TYPE_2__* csdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct etm_drvdata*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct etm_drvdata *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = -1;
 struct device *VAR_5;

 if (!VAR_2)
  goto out;

 VAR_5 = VAR_2->csdev->dev.parent;
 if (!FUNC_3(&VAR_2->mode))
  return VAR_2->traceid;

 FUNC_4(VAR_5);

 FUNC_6(&VAR_2->spinlock, VAR_3);

 FUNC_1(VAR_2->base);
 VAR_4 = (FUNC_2(VAR_2, VAR_0) & VAR_1);
 FUNC_0(VAR_2->base);

 FUNC_7(&VAR_2->spinlock, VAR_3);
 FUNC_5(VAR_5);

out:
 return VAR_4;

}
