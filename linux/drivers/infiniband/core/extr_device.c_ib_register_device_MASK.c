
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {void (* dealloc_driver ) (struct ib_device*) ;} ;
struct ib_device {TYPE_2__ dev; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,char const*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (struct ib_device*) ;
 int FUNC_8 (struct ib_device*) ;
 int FUNC_9 (struct ib_device*) ;
 int FUNC_10 (struct ib_device*) ;
 int FUNC_11 (struct ib_device*) ;
 int FUNC_12 (struct ib_device*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct ib_device*) ;
 int FUNC_15 (struct ib_device*) ;

int FUNC_16(struct ib_device *VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_15(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_8(VAR_1);
 if (VAR_3) {
  FUNC_3(&VAR_1->dev,
    "Couldn't set up InfiniBand P_Key/GID cache\n");
  return VAR_3;
 }

 FUNC_10(VAR_1);

 FUNC_14(VAR_1);





 FUNC_2(&VAR_1->dev, 1);
 VAR_3 = FUNC_4(&VAR_1->dev);
 if (VAR_3)
  goto cg_cleanup;

 VAR_3 = FUNC_11(VAR_1);
 if (VAR_3) {
  FUNC_3(&VAR_1->dev,
    "Couldn't register device with driver model\n");
  goto dev_cleanup;
 }

 VAR_3 = FUNC_6(VAR_1);
 FUNC_2(&VAR_1->dev, 0);

 FUNC_13(&VAR_1->dev.kobj, VAR_0);
 if (VAR_3) {
  void (*VAR_4)(struct ib_device *);
  VAR_4 = VAR_1->ops.dealloc_driver;
  VAR_1->ops.dealloc_driver = ((void*)0);
  FUNC_9(VAR_1);
  FUNC_0(VAR_1);
  VAR_1->ops.dealloc_driver = VAR_4;
  return VAR_3;
 }
 FUNC_9(VAR_1);

 return 0;

dev_cleanup:
 FUNC_5(&VAR_1->dev);
cg_cleanup:
 FUNC_2(&VAR_1->dev, 0);
 FUNC_12(VAR_1);
 FUNC_7(VAR_1);
 return VAR_3;
}
