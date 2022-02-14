
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ discard_alignment; scalar_t__ discard_granularity; } ;
struct request_queue {TYPE_4__ limits; } ;
struct loop_device {scalar_t__ lo_encrypt_key_size; struct request_queue* lo_queue; struct file* lo_backing_file; } ;
struct inode {TYPE_3__* i_sb; } ;
struct file {TYPE_2__* f_op; TYPE_1__* f_mapping; } ;
struct TYPE_7__ {scalar_t__ s_blocksize; } ;
struct TYPE_6__ {int fallocate; } ;
struct TYPE_5__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,int) ;

__attribute__((used)) static void FUNC_4(struct loop_device *VAR_2)
{
 struct file *VAR_3 = VAR_2->lo_backing_file;
 struct inode *VAR_4 = VAR_3->f_mapping->host;
 struct request_queue *VAR_5 = VAR_2->lo_queue;







 if ((!VAR_3->f_op->fallocate) ||
     VAR_2->lo_encrypt_key_size) {
  VAR_5->limits.discard_granularity = 0;
  VAR_5->limits.discard_alignment = 0;
  FUNC_2(VAR_5, 0);
  FUNC_3(VAR_5, 0);
  FUNC_0(VAR_0, VAR_5);
  return;
 }

 VAR_5->limits.discard_granularity = VAR_4->i_sb->s_blocksize;
 VAR_5->limits.discard_alignment = 0;

 FUNC_2(VAR_5, VAR_1 >> 9);
 FUNC_3(VAR_5, VAR_1 >> 9);
 FUNC_1(VAR_0, VAR_5);
}
