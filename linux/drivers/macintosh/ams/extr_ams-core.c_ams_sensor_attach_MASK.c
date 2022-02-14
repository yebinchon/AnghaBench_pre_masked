
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int vflag; int (* get_vendor ) () ;TYPE_1__* of_dev; int of_node; scalar_t__ worker_irqs; int orient2; int orient1; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ,char*,int *) ;
 TYPE_1__* FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

int FUNC_9(void)
{
 int VAR_5;
 const u32 *VAR_6;


 VAR_6 = FUNC_4(VAR_2.of_node, "orientation", ((void*)0));
 if (!VAR_6)
  return -VAR_0;
 VAR_2.orient1 = *VAR_6;
 VAR_2.orient2 = *(VAR_6 + 1);


 VAR_5 = FUNC_6(VAR_2.of_node,
   "accel-int-1",
   &VAR_1);
 if (VAR_5 < 0)
  return -VAR_0;


 VAR_2.worker_irqs = 0;


 VAR_5 = FUNC_6(VAR_2.of_node,
   "accel-int-2",
   &VAR_3);
 if (VAR_5 < 0)
  goto release_freefall;


 VAR_2.of_dev = FUNC_5(VAR_2.of_node, "ams", ((void*)0));
 if (!VAR_2.of_dev) {
  VAR_5 = -VAR_0;
  goto release_shock;
 }


 VAR_5 = FUNC_1(&VAR_2.of_dev->dev, &VAR_4);
 if (VAR_5)
  goto release_of;

 VAR_2.vflag = !!(VAR_2.get_vendor() & 0x10);


 VAR_5 = FUNC_0();
 if (VAR_5)
  goto release_device_file;

 return VAR_5;
release_device_file:
 FUNC_2(&VAR_2.of_dev->dev, &VAR_4);
release_of:
 FUNC_3(VAR_2.of_dev);
release_shock:
 FUNC_7(&VAR_3);
release_freefall:
 FUNC_7(&VAR_1);
 return VAR_5;
}
