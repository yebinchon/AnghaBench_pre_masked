
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int kobj; int release; struct device* parent; int * class; int devt; } ;
struct stm_device {scalar_t__ major; unsigned int sw_nmasters; TYPE_1__ dev; struct stm_data* data; struct module* owner; int policy_mutex; int mc_lock; int link_list; int link_lock; int link_mutex; } ;
struct stm_data {int sw_end; int sw_start; int name; struct stm_device* stm; int sw_nchannels; int packet; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (struct stm_device*) ;
 struct stm_device* FUNC_16 (int) ;

int FUNC_17(struct device *VAR_7, struct stm_data *VAR_8,
   struct module *VAR_9)
{
 struct stm_device *VAR_10;
 unsigned int VAR_11;
 int VAR_12 = -VAR_1;

 if (!VAR_4)
  return -VAR_2;

 if (!VAR_8->packet || !VAR_8->sw_nchannels)
  return -VAR_0;

 VAR_11 = VAR_8->sw_end - VAR_8->sw_start + 1;
 VAR_10 = FUNC_16(sizeof(*VAR_10) + VAR_11 * sizeof(void *));
 if (!VAR_10)
  return -VAR_1;

 VAR_10->major = FUNC_12(0, VAR_8->name, &VAR_6);
 if (VAR_10->major < 0)
  goto err_free;

 FUNC_3(&VAR_10->dev);
 VAR_10->dev.devt = FUNC_1(VAR_10->major, 0);
 VAR_10->dev.class = &VAR_3;
 VAR_10->dev.parent = VAR_7;
 VAR_10->dev.release = VAR_5;

 FUNC_5(&VAR_10->link_mutex);
 FUNC_13(&VAR_10->link_lock);
 FUNC_0(&VAR_10->link_list);


 FUNC_13(&VAR_10->mc_lock);
 FUNC_5(&VAR_10->policy_mutex);
 VAR_10->sw_nmasters = VAR_11;
 VAR_10->owner = VAR_9;
 VAR_10->data = VAR_8;
 VAR_8->stm = VAR_10;

 VAR_12 = FUNC_4(&VAR_10->dev.kobj, "%s", VAR_8->name);
 if (VAR_12)
  goto err_device;

 VAR_12 = FUNC_2(&VAR_10->dev);
 if (VAR_12)
  goto err_device;






 FUNC_7(&VAR_10->dev);
 FUNC_10(&VAR_10->dev);
 FUNC_8(&VAR_10->dev, 2000);
 FUNC_9(&VAR_10->dev);
 FUNC_6(&VAR_10->dev);

 return 0;

err_device:
 FUNC_14(VAR_10->major, VAR_8->name);


 FUNC_11(&VAR_10->dev);
err_free:
 FUNC_15(VAR_10);

 return VAR_12;
}
