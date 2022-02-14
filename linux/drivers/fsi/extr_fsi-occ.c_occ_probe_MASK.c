
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device_info {char* name; int id; struct device* parent; } ;
struct device {scalar_t__ of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* parent; int name; int minor; int * fops; } ;
struct occ {scalar_t__ idx; TYPE_1__ mdev; int name; int occ_lock; int sbefifo; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct occ* FUNC_2 (struct device*,int,int ) ;
 void* FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__,char*,int*) ;
 struct platform_device* FUNC_8 (struct platform_device_info*) ;
 int FUNC_9 (struct platform_device*,struct occ*) ;
 int FUNC_10 (int ,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 struct occ *VAR_9;
 struct platform_device *VAR_10;
 struct device *VAR_11 = &VAR_6->dev;
 struct platform_device_info VAR_12 = {
  .parent = VAR_11,
  .name = "occ-hwmon",
 };

 VAR_9 = FUNC_2(VAR_11, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_11;
 VAR_9->sbefifo = VAR_11->parent;
 FUNC_6(&VAR_9->occ_lock);

 if (VAR_11->of_node) {
  VAR_7 = FUNC_7(VAR_11->of_node, "reg", &VAR_8);
  if (!VAR_7) {

   VAR_9->idx = FUNC_3(&VAR_5, VAR_8, VAR_8 + 1,
        VAR_1);
   if (VAR_9->idx < 0)
    VAR_9->idx = FUNC_3(&VAR_5, 1, VAR_2,
         VAR_1);
  } else {
   VAR_9->idx = FUNC_3(&VAR_5, 1, VAR_2,
        VAR_1);
  }
 } else {
  VAR_9->idx = FUNC_3(&VAR_5, 1, VAR_2, VAR_1);
 }

 FUNC_9(VAR_6, VAR_9);

 FUNC_10(VAR_9->name, sizeof(VAR_9->name), "occ%d", VAR_9->idx);
 VAR_9->mdev.fops = &VAR_4;
 VAR_9->mdev.minor = VAR_3;
 VAR_9->mdev.name = VAR_9->name;
 VAR_9->mdev.parent = VAR_11;

 VAR_7 = FUNC_5(&VAR_9->mdev);
 if (VAR_7) {
  FUNC_0(VAR_11, "failed to register miscdevice: %d\n", VAR_7);
  FUNC_4(&VAR_5, VAR_9->idx);
  return VAR_7;
 }

 VAR_12.id = VAR_9->idx;
 VAR_10 = FUNC_8(&VAR_12);
 if (!VAR_10)
  FUNC_1(VAR_11, "failed to create hwmon device\n");

 return 0;
}
