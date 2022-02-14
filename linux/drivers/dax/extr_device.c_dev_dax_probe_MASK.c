
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct inode {struct dev_dax* i_cdev; } ;
struct device {int devt; int kobj; TYPE_4__* driver; TYPE_3__* parent; scalar_t__ class; } ;
struct TYPE_10__ {int type; } ;
struct dev_dax {int owner; TYPE_5__ pgmap; TYPE_1__* region; struct dax_device* dax_dev; } ;
struct dax_device {int dummy; } ;
struct cdev {int owner; TYPE_5__ pgmap; TYPE_1__* region; struct dax_device* dax_dev; } ;
struct TYPE_9__ {int owner; } ;
struct TYPE_8__ {TYPE_2__* driver; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_6__ {struct resource res; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct dev_dax*,int ,int) ;
 int FUNC_3 (struct dev_dax*,int *) ;
 int FUNC_4 (struct dev_dax*,int *) ;
 int VAR_2 ;
 struct inode* FUNC_5 (struct dax_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,struct resource*) ;
 int FUNC_8 (struct device*,int ,struct dev_dax*) ;
 void* FUNC_9 (struct device*,TYPE_5__*) ;
 int FUNC_10 (struct device*,int ,int ,int ) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (struct dax_device*) ;
 struct dev_dax* FUNC_13 (struct device*) ;

int FUNC_14(struct device *VAR_5)
{
 struct dev_dax *VAR_6 = FUNC_13(VAR_5);
 struct dax_device *VAR_7 = VAR_6->dax_dev;
 struct resource *VAR_8 = &VAR_6->region->res;
 struct inode *VAR_9;
 struct cdev *VAR_10;
 void *VAR_11;
 int VAR_12;


 if (!FUNC_10(VAR_5, VAR_8->start, FUNC_11(VAR_8),
    FUNC_6(VAR_5))) {
  FUNC_7(VAR_5, "could not reserve region %pR\n", VAR_8);
  return -VAR_0;
 }

 VAR_6->pgmap.type = VAR_1;
 VAR_11 = FUNC_9(VAR_5, &VAR_6->pgmap);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_9 = FUNC_5(VAR_7);
 VAR_10 = VAR_9->i_cdev;
 FUNC_3(VAR_10, &VAR_2);
 if (VAR_5->class) {

  VAR_10->owner = VAR_5->parent->driver->owner;
 } else
  VAR_10->owner = VAR_5->driver->owner;
 FUNC_4(VAR_10, &VAR_5->kobj);
 VAR_12 = FUNC_2(VAR_10, VAR_5->devt, 1);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_5, VAR_3, VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_12(VAR_7);
 return FUNC_8(VAR_5, VAR_4, VAR_6);
}
