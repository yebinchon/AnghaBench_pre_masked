
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct rbd_device {int major; int header_rwsem; int name; int flags; int dev_id; int dev; TYPE_2__* opts; int disk; TYPE_1__ mapping; scalar_t__ minor; } ;
struct TYPE_4__ {int read_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct rbd_device *VAR_4)
{
 int VAR_5;



 if (!VAR_3) {
  VAR_5 = FUNC_4(0, VAR_4->name);
  if (VAR_5 < 0)
   goto err_out_unlock;

  VAR_4->major = VAR_5;
  VAR_4->minor = 0;
 } else {
  VAR_4->major = VAR_2;
  VAR_4->minor = FUNC_1(VAR_4->dev_id);
 }



 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto err_out_blkdev;

 FUNC_6(VAR_4->disk, VAR_4->mapping.size / VAR_1);
 FUNC_7(VAR_4->disk, VAR_4->opts->read_only);

 VAR_5 = FUNC_0(&VAR_4->dev, "%d", VAR_4->dev_id);
 if (VAR_5)
  goto err_out_disk;

 FUNC_5(VAR_0, &VAR_4->flags);
 FUNC_9(&VAR_4->header_rwsem);
 return 0;

err_out_disk:
 FUNC_2(VAR_4);
err_out_blkdev:
 if (!VAR_3)
  FUNC_8(VAR_4->major, VAR_4->name);
err_out_unlock:
 FUNC_9(&VAR_4->header_rwsem);
 return VAR_5;
}
