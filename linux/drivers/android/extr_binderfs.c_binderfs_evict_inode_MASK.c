
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; struct binder_device* i_private; } ;
struct binderfs_info {int device_count; } ;
struct TYPE_3__ {struct binder_device* name; } ;
struct TYPE_4__ {int minor; } ;
struct binder_device {TYPE_1__ context; TYPE_2__ miscdev; } ;


 struct binderfs_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct binder_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_2)
{
 struct binder_device *VAR_3 = VAR_2->i_private;
 struct binderfs_info *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_2);

 if (!FUNC_1(VAR_2->i_mode) || !VAR_3)
  return;

 FUNC_5(&VAR_1);
 --VAR_4->device_count;
 FUNC_3(&VAR_0, VAR_3->miscdev.minor);
 FUNC_6(&VAR_1);

 FUNC_4(VAR_3->context.name);
 FUNC_4(VAR_3);
}
