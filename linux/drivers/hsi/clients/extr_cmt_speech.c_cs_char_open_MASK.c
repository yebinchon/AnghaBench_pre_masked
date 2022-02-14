
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_2__* private_data; } ;
struct TYPE_4__ {int opened; unsigned long mmap_base; int lock; int mmap_size; TYPE_1__* cl; int hi; scalar_t__ dataind_pending; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,unsigned long,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_4(&VAR_4.lock);
 if (VAR_4.opened) {
  VAR_7 = -VAR_1;
  FUNC_5(&VAR_4.lock);
  goto out1;
 }
 VAR_4.opened = 1;
 VAR_4.dataind_pending = 0;
 FUNC_5(&VAR_4.lock);

 VAR_8 = FUNC_3(VAR_3);
 if (!VAR_8) {
  VAR_7 = -VAR_2;
  goto out2;
 }

 VAR_7 = FUNC_0(&VAR_4.hi, VAR_4.cl, VAR_8, VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_4.cl->device, "Unable to initialize HSI\n");
  goto out3;
 }


 VAR_4.mmap_base = VAR_8;
 VAR_4.mmap_size = VAR_0;

 VAR_6->private_data = &VAR_4;

 return 0;

out3:
 FUNC_2(VAR_8);
out2:
 FUNC_4(&VAR_4.lock);
 VAR_4.opened = 0;
 FUNC_5(&VAR_4.lock);
out1:
 return VAR_7;
}
