
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bus; } ;
struct mem_ctl_info {TYPE_1__ dev; struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {TYPE_2__* addrmatch_dev; TYPE_2__* chancounts_dev; int is_registered; } ;
struct TYPE_10__ {TYPE_1__* parent; int bus; int * type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,struct mem_ctl_info*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,char*,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct mem_ctl_info *VAR_4)
{
 struct i7core_pvt *VAR_5 = VAR_4->pvt_info;
 int VAR_6;

 VAR_5->addrmatch_dev = FUNC_7(sizeof(*VAR_5->addrmatch_dev), VAR_1);
 if (!VAR_5->addrmatch_dev)
  return -VAR_0;

 VAR_5->addrmatch_dev->type = &VAR_2;
 VAR_5->addrmatch_dev->bus = VAR_4->dev.bus;
 FUNC_5(VAR_5->addrmatch_dev);
 VAR_5->addrmatch_dev->parent = &VAR_4->dev;
 FUNC_2(VAR_5->addrmatch_dev, "inject_addrmatch");
 FUNC_1(VAR_5->addrmatch_dev, VAR_4);

 FUNC_6(1, "creating %s\n", FUNC_0(VAR_5->addrmatch_dev));

 VAR_6 = FUNC_3(VAR_5->addrmatch_dev);
 if (VAR_6 < 0)
  goto err_put_addrmatch;

 if (!VAR_5->is_registered) {
  VAR_5->chancounts_dev = FUNC_7(sizeof(*VAR_5->chancounts_dev),
           VAR_1);
  if (!VAR_5->chancounts_dev) {
   VAR_6 = -VAR_0;
   goto err_del_addrmatch;
  }

  VAR_5->chancounts_dev->type = &VAR_3;
  VAR_5->chancounts_dev->bus = VAR_4->dev.bus;
  FUNC_5(VAR_5->chancounts_dev);
  VAR_5->chancounts_dev->parent = &VAR_4->dev;
  FUNC_2(VAR_5->chancounts_dev, "all_channel_counts");
  FUNC_1(VAR_5->chancounts_dev, VAR_4);

  FUNC_6(1, "creating %s\n", FUNC_0(VAR_5->chancounts_dev));

  VAR_6 = FUNC_3(VAR_5->chancounts_dev);
  if (VAR_6 < 0)
   goto err_put_chancounts;
 }
 return 0;

err_put_chancounts:
 FUNC_8(VAR_5->chancounts_dev);
err_del_addrmatch:
 FUNC_4(VAR_5->addrmatch_dev);
err_put_addrmatch:
 FUNC_8(VAR_5->addrmatch_dev);

 return VAR_6;
}
