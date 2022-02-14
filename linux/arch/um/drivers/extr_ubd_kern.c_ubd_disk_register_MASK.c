
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct gendisk {int major; int first_minor; int queue; TYPE_1__* private_data; int disk_name; int * fops; } ;
struct device {int release; } ;
struct TYPE_5__ {int id; struct device dev; int name; } ;
struct TYPE_4__ {int queue; TYPE_2__ pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gendisk* FUNC_0 (int) ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 int FUNC_2 (struct device*,struct gendisk*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct gendisk*,int) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_6(int VAR_7, u64 VAR_8, int VAR_9,
        struct gendisk **VAR_10)
{
 struct device *VAR_11 = ((void*)0);
 struct gendisk *VAR_12;

 VAR_12 = FUNC_0(1 << VAR_3);
 if(VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_12->major = VAR_7;
 VAR_12->first_minor = VAR_9 << VAR_3;
 VAR_12->fops = &VAR_4;
 FUNC_4(VAR_12, VAR_8 / 512);
 if (VAR_7 == VAR_2)
  FUNC_5(VAR_12->disk_name, "ubd%c", 'a' + VAR_9);
 else
  FUNC_5(VAR_12->disk_name, "ubd_fake%d", VAR_9);


 if (VAR_7 == VAR_2) {
  VAR_6[VAR_9].pdev.id = VAR_9;
  VAR_6[VAR_9].pdev.name = VAR_0;
  VAR_6[VAR_9].pdev.dev.release = VAR_5;
  FUNC_1(&VAR_6[VAR_9].pdev.dev, &VAR_6[VAR_9]);
  FUNC_3(&VAR_6[VAR_9].pdev);
  VAR_11 = &VAR_6[VAR_9].pdev.dev;
 }

 VAR_12->private_data = &VAR_6[VAR_9];
 VAR_12->queue = VAR_6[VAR_9].queue;
 FUNC_2(VAR_11, VAR_12, ((void*)0));

 *VAR_10 = VAR_12;
 return 0;
}
