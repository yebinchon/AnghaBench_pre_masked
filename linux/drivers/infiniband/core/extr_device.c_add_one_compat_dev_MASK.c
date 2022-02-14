
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rdma_dev_net {int id; int net; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_7__ {int rdma_net; } ;
struct ib_device {int compat_devs_mutex; int compat_devs; TYPE_6__ dev; TYPE_1__ coredev; } ;
struct TYPE_8__ {int release; int parent; } ;
struct ib_core_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (struct ib_core_device*) ;
 int FUNC_5 (struct ib_core_device*) ;
 struct ib_core_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct ib_core_device*,struct ib_device*,int ) ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 struct ib_core_device* FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *,int ,struct ib_core_device*,int ) ;

__attribute__((used)) static int FUNC_19(struct ib_device *VAR_5,
         struct rdma_dev_net *VAR_6)
{
 struct ib_core_device *VAR_7;
 int VAR_8;

 FUNC_7(&VAR_4);
 if (!VAR_3)
  return 0;





 if (FUNC_10(FUNC_13(&VAR_6->net),
     FUNC_13(&VAR_5->coredev.rdma_net)))
  return 0;






 FUNC_8(&VAR_5->compat_devs_mutex);
 VAR_7 = FUNC_15(&VAR_5->compat_devs, VAR_6->id);
 if (VAR_7) {
  VAR_8 = 0;
  goto done;
 }
 VAR_8 = FUNC_17(&VAR_5->compat_devs, VAR_6->id, VAR_1);
 if (VAR_8)
  goto done;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto cdev_err;
 }

 VAR_7->dev.parent = VAR_5->dev.parent;
 FUNC_12(VAR_7, VAR_5, FUNC_13(&VAR_6->net));
 VAR_7->dev.release = VAR_2;
 FUNC_1(&VAR_7->dev, "%s", FUNC_0(&VAR_5->dev));

 VAR_8 = FUNC_2(&VAR_7->dev);
 if (VAR_8)
  goto add_err;
 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  goto port_err;

 VAR_8 = FUNC_14(FUNC_18(&VAR_5->compat_devs, VAR_6->id,
         VAR_7, VAR_1));
 if (VAR_8)
  goto insert_err;

 FUNC_9(&VAR_5->compat_devs_mutex);
 return 0;

insert_err:
 FUNC_4(VAR_7);
port_err:
 FUNC_3(&VAR_7->dev);
add_err:
 FUNC_11(&VAR_7->dev);
cdev_err:
 FUNC_16(&VAR_5->compat_devs, VAR_6->id);
done:
 FUNC_9(&VAR_5->compat_devs_mutex);
 return VAR_8;
}
