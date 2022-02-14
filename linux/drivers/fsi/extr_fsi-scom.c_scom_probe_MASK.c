
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int devt; int release; struct device* parent; int * type; } ;
struct scom_device {TYPE_1__ dev; int cdev; struct fsi_device* fsi_dev; int lock; } ;
struct fsi_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct device*,char*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device*,struct scom_device*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fsi_device*,int ,int *,int*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct scom_device*) ;
 struct scom_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct fsi_device* FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_7)
{
 struct fsi_device *VAR_8 = FUNC_14(VAR_7);
 struct scom_device *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_11(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 FUNC_4(VAR_7, VAR_9);
 FUNC_12(&VAR_9->lock);


 if (!FUNC_9(VAR_7)) {
  FUNC_10(VAR_9);
  return -VAR_0;
 }
 VAR_9->fsi_dev = VAR_8;


 VAR_9->dev.type = &VAR_3;
 VAR_9->dev.parent = VAR_7;
 VAR_9->dev.release = VAR_6;
 FUNC_6(&VAR_9->dev);


 VAR_10 = FUNC_8(VAR_8, VAR_4, &VAR_9->dev.devt, &VAR_11);
 if (VAR_10)
  goto err;

 FUNC_5(&VAR_9->dev, "scom%d", VAR_11);
 FUNC_1(&VAR_9->cdev, &VAR_5);
 VAR_10 = FUNC_0(&VAR_9->cdev, &VAR_9->dev);
 if (VAR_10) {
  FUNC_2(VAR_7, "Error %d creating char device %s\n",
   VAR_10, FUNC_3(&VAR_9->dev));
  goto err_free_minor;
 }

 return 0;
 err_free_minor:
 FUNC_7(VAR_9->dev.devt);
 err:
 FUNC_13(&VAR_9->dev);
 return VAR_10;
}
