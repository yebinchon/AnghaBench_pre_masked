
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct loop_device {unsigned int lo_offset; int use_dio; int lo_queue; int lo_flags; int transfer; struct file* lo_backing_file; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {TYPE_2__* a_ops; struct inode* host; } ;
struct TYPE_4__ {scalar_t__ direct_IO; } ;
struct TYPE_3__ {scalar_t__ s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 unsigned short FUNC_5 (int ) ;
 int FUNC_6 (struct file*,int ) ;

__attribute__((used)) static void FUNC_7(struct loop_device *VAR_2, bool VAR_3)
{
 struct file *VAR_4 = VAR_2->lo_backing_file;
 struct address_space *VAR_5 = VAR_4->f_mapping;
 struct inode *VAR_6 = VAR_5->host;
 unsigned short VAR_7 = 0;
 unsigned VAR_8 = 0;
 bool VAR_9;

 if (VAR_6->i_sb->s_bdev) {
  VAR_7 = FUNC_0(VAR_6->i_sb->s_bdev);
  VAR_8 = VAR_7 - 1;
 }
 if (VAR_3) {
  if (FUNC_5(VAR_2->lo_queue) >= VAR_7 &&
    !(VAR_2->lo_offset & VAR_8) &&
    VAR_5->a_ops->direct_IO &&
    !VAR_2->transfer)
   VAR_9 = 1;
  else
   VAR_9 = 0;
 } else {
  VAR_9 = 0;
 }

 if (VAR_2->use_dio == VAR_9)
  return;


 FUNC_6(VAR_4, 0);






 FUNC_1(VAR_2->lo_queue);
 VAR_2->use_dio = VAR_9;
 if (VAR_9) {
  FUNC_3(VAR_1, VAR_2->lo_queue);
  VAR_2->lo_flags |= VAR_0;
 } else {
  FUNC_4(VAR_1, VAR_2->lo_queue);
  VAR_2->lo_flags &= ~VAR_0;
 }
 FUNC_2(VAR_2->lo_queue);
}
