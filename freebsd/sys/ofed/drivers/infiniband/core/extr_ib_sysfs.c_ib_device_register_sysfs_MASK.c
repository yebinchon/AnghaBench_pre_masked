
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; int parent; } ;
struct ib_device {int phys_port_cnt; scalar_t__ alloc_hw_stats; int ports_parent; int name; int dma_device; struct device dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ib_device*,int,int (*) (struct ib_device*,VAR_1,struct kobject*)) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct ib_device*) ;
 int * VAR_2 ;
 int FUNC_7 (char*,int *) ;
 scalar_t__ FUNC_8 (struct ib_device*) ;
 int FUNC_9 (struct ib_device*,int *,int ) ;

int FUNC_10(struct ib_device *VAR_3,
        int (*VAR_4)(struct ib_device *,
        VAR_5, struct kobject *))
{
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7;
 int VAR_8;

 VAR_3->dev.parent = VAR_3->dma_device;
 VAR_7 = FUNC_2(VAR_6, "%s", VAR_3->name);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto err;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); ++VAR_8) {
  VAR_7 = FUNC_4(VAR_6, VAR_2[VAR_8]);
  if (VAR_7)
   goto err_unregister;
 }

 VAR_3->ports_parent = FUNC_7("ports",
            &VAR_6->kobj);
 if (!VAR_3->ports_parent) {
  VAR_7 = -VAR_0;
  goto err_put;
 }

 if (FUNC_8(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3, 0, VAR_4);
  if (VAR_7)
   goto err_put;
 } else {
  for (VAR_8 = 1; VAR_8 <= VAR_3->phys_port_cnt; ++VAR_8) {
   VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_4);
   if (VAR_7)
    goto err_put;
  }
 }

 if (VAR_3->alloc_hw_stats)
  FUNC_9(VAR_3, ((void*)0), 0);

 return 0;

err_put:
 FUNC_6(VAR_3);

err_unregister:
 FUNC_5(VAR_6);

err:
 return VAR_7;
}
