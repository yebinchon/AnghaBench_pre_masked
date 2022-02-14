
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int set_config; } ;
struct men_z127_gpio {TYPE_1__* mem; int * reg_base; TYPE_4__ gc; } ;
struct mcb_device_id {int dummy; } ;
struct device {int dummy; } ;
struct mcb_device {struct device dev; } ;
struct TYPE_8__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,struct device*,int,int *,int *,int *,int *,int *,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 struct men_z127_gpio* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (TYPE_4__*,struct men_z127_gpio*) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (struct mcb_device*,int ) ;
 int FUNC_12 (struct mcb_device*,struct men_z127_gpio*) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct mcb_device *VAR_7,
     const struct mcb_device_id *VAR_8)
{
 struct men_z127_gpio *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 int VAR_11;

 VAR_9 = FUNC_6(VAR_10, sizeof(struct men_z127_gpio),
         VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->mem = FUNC_11(VAR_7, FUNC_5(VAR_10));
 if (FUNC_0(VAR_9->mem)) {
  FUNC_3(VAR_10, "failed to request device memory");
  return FUNC_1(VAR_9->mem);
 }

 VAR_9->reg_base = FUNC_8(VAR_9->mem->start,
       FUNC_13(VAR_9->mem));
 if (VAR_9->reg_base == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto err_release;
 }

 FUNC_12(VAR_7, VAR_9);

 VAR_11 = FUNC_2(&VAR_9->gc, &VAR_7->dev, 4,
    VAR_9->reg_base + VAR_5,
    VAR_9->reg_base + VAR_3,
    ((void*)0),
    VAR_9->reg_base + VAR_4,
    ((void*)0), 0);
 if (VAR_11)
  goto err_unmap;

 VAR_9->gc.set_config = VAR_6;

 VAR_11 = FUNC_7(&VAR_9->gc, VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_10, "failed to register MEN 16Z127 GPIO controller");
  goto err_unmap;
 }

 FUNC_4(VAR_10, "MEN 16Z127 GPIO driver registered");

 return 0;

err_unmap:
 FUNC_9(VAR_9->reg_base);
err_release:
 FUNC_10(VAR_9->mem);
 return VAR_11;
}
