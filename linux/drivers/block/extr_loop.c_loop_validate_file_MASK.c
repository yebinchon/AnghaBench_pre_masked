
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_state; struct file* lo_backing_file; } ;
struct inode {int i_mode; struct block_device* i_bdev; } ;
struct file {TYPE_2__* f_mapping; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_4__ {struct inode* host; } ;
struct TYPE_3__ {struct loop_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, struct block_device *VAR_4)
{
 struct inode *VAR_5 = VAR_3->f_mapping->host;
 struct file *VAR_6 = VAR_3;


 while (FUNC_2(VAR_6)) {
  struct loop_device *VAR_7;

  if (VAR_6->f_mapping->host->i_bdev == VAR_4)
   return -VAR_0;

  VAR_7 = VAR_6->f_mapping->host->i_bdev->bd_disk->private_data;
  if (VAR_7->lo_state != VAR_2) {
   return -VAR_1;
  }
  VAR_6 = VAR_7->lo_backing_file;
 }
 if (!FUNC_1(VAR_5->i_mode) && !FUNC_0(VAR_5->i_mode))
  return -VAR_1;
 return 0;
}
