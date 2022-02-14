
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tpm_class_ops {int dummy; } ;
struct TYPE_11__ {void* devt; int release; TYPE_2__* class; struct device* parent; int groups; } ;
struct TYPE_9__ {void* session_buf; void* context_buf; } ;
struct TYPE_12__ {void* owner; } ;
struct tpm_chip {int dev_num; int flags; int locality; TYPE_4__ dev; TYPE_4__ devs; TYPE_1__ work_space; TYPE_8__ cdevs; TYPE_8__ cdev; int groups; struct tpm_class_ops const* ops; int ops_sem; int tpm_mutex; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int shutdown_pre; } ;


 int VAR_0 ;
 struct tpm_chip* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 void* FUNC_2 (int ,int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_8__*,int *) ;
 int FUNC_4 (struct device*,char*) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *,int *,int ,int,int ) ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tpm_chip*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_4__*) ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 int VAR_18 ;

struct tpm_chip *FUNC_16(struct device *VAR_19,
    const struct tpm_class_ops *VAR_20)
{
 struct tpm_chip *VAR_21;
 int VAR_22;

 VAR_21 = FUNC_11(sizeof(*VAR_21), VAR_1);
 if (VAR_21 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_12(&VAR_21->tpm_mutex);
 FUNC_9(&VAR_21->ops_sem);

 VAR_21->ops = VAR_20;

 FUNC_13(&VAR_10);
 VAR_22 = FUNC_8(&VAR_9, ((void*)0), 0, VAR_8, VAR_1);
 FUNC_14(&VAR_10);
 if (VAR_22 < 0) {
  FUNC_4(VAR_19, "No available tpm device numbers\n");
  FUNC_10(VAR_21);
  return FUNC_0(VAR_22);
 }
 VAR_21->dev_num = VAR_22;

 FUNC_6(&VAR_21->dev);
 FUNC_6(&VAR_21->devs);

 VAR_21->dev.class = VAR_11;
 VAR_21->dev.class->shutdown_pre = VAR_12;
 VAR_21->dev.release = VAR_13;
 VAR_21->dev.parent = VAR_19;
 VAR_21->dev.groups = VAR_21->groups;

 VAR_21->devs.parent = VAR_19;
 VAR_21->devs.class = VAR_17;
 VAR_21->devs.release = VAR_14;





 if (VAR_21->flags & VAR_5)
  FUNC_7(&VAR_21->dev);

 if (VAR_21->dev_num == 0)
  VAR_21->dev.devt = FUNC_2(VAR_2, VAR_7);
 else
  VAR_21->dev.devt = FUNC_2(FUNC_1(VAR_15), VAR_21->dev_num);

 VAR_21->devs.devt =
  FUNC_2(FUNC_1(VAR_15), VAR_21->dev_num + VAR_8);

 VAR_22 = FUNC_5(&VAR_21->dev, "tpm%d", VAR_21->dev_num);
 if (VAR_22)
  goto out;
 VAR_22 = FUNC_5(&VAR_21->devs, "tpmrm%d", VAR_21->dev_num);
 if (VAR_22)
  goto out;

 if (!VAR_19)
  VAR_21->flags |= VAR_6;

 FUNC_3(&VAR_21->cdev, &VAR_16);
 FUNC_3(&VAR_21->cdevs, &VAR_18);
 VAR_21->cdev.owner = VAR_4;
 VAR_21->cdevs.owner = VAR_4;

 VAR_21->work_space.context_buf = FUNC_11(VAR_3, VAR_1);
 if (!VAR_21->work_space.context_buf) {
  VAR_22 = -VAR_0;
  goto out;
 }
 VAR_21->work_space.session_buf = FUNC_11(VAR_3, VAR_1);
 if (!VAR_21->work_space.session_buf) {
  VAR_22 = -VAR_0;
  goto out;
 }

 VAR_21->locality = -1;
 return VAR_21;

out:
 FUNC_15(&VAR_21->devs);
 FUNC_15(&VAR_21->dev);
 return FUNC_0(VAR_22);
}
