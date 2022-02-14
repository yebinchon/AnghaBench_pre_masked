
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct loop_device {struct request_queue* lo_queue; struct file* lo_backing_file; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {struct block_device* s_bdev; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct loop_device *VAR_1)
{
 struct file *VAR_2 = VAR_1->lo_backing_file;
 struct inode *VAR_3 = VAR_2->f_mapping->host;
 struct block_device *VAR_4 = VAR_3->i_sb->s_bdev;
 struct request_queue *VAR_5 = VAR_1->lo_queue;
 bool VAR_6 = 1;


 if (VAR_4)
  VAR_6 = FUNC_3(FUNC_0(VAR_4));

 if (VAR_6)
  FUNC_2(VAR_0, VAR_5);
 else
  FUNC_1(VAR_0, VAR_5);
}
