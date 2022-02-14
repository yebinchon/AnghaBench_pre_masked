
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vtpm_proxy_new_dev {int flags; int fd; int tpm_num; int minor; int major; } ;
struct proxy_dev {int flags; TYPE_2__* chip; } ;
struct file {int flags; TYPE_2__* chip; } ;
struct TYPE_3__ {int devt; } ;
struct TYPE_4__ {int dev_num; TYPE_1__ dev; int flags; } ;


 int VAR_0 ;
 struct proxy_dev* FUNC_0 (struct proxy_dev*) ;
 struct proxy_dev* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct proxy_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct proxy_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proxy_dev* FUNC_6 (char*,int *,struct proxy_dev*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 struct proxy_dev* FUNC_9 () ;
 int FUNC_10 (struct proxy_dev*) ;
 int VAR_5 ;
 int FUNC_11 (struct proxy_dev*) ;
 int FUNC_12 (struct proxy_dev*) ;

__attribute__((used)) static struct file *FUNC_13(
     struct vtpm_proxy_new_dev *VAR_6)
{
 struct proxy_dev *VAR_7;
 int VAR_8, VAR_9;
 struct file *VAR_10;

 if (VAR_6->flags & ~VAR_3)
  return FUNC_1(-VAR_0);

 VAR_7 = FUNC_9();
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 VAR_7->flags = VAR_6->flags;


 VAR_9 = FUNC_7(VAR_1);
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto err_delete_proxy_dev;
 }

 VAR_10 = FUNC_6("[vtpms]", &VAR_5, VAR_7,
      VAR_1);
 if (FUNC_2(VAR_10)) {
  VAR_8 = FUNC_5(VAR_10);
  goto err_put_unused_fd;
 }



 FUNC_11(VAR_10);

 if (VAR_7->flags & VAR_4)
  VAR_7->chip->flags |= VAR_2;

 FUNC_12(VAR_7);

 VAR_6->fd = VAR_9;
 VAR_6->major = FUNC_3(VAR_7->chip->dev.devt);
 VAR_6->minor = FUNC_4(VAR_7->chip->dev.devt);
 VAR_6->tpm_num = VAR_7->chip->dev_num;

 return VAR_10;

err_put_unused_fd:
 FUNC_8(VAR_9);

err_delete_proxy_dev:
 FUNC_10(VAR_7);

 return FUNC_1(VAR_8);
}
