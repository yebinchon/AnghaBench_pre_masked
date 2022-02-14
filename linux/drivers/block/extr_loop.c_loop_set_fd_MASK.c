
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_state; int use_dio; int lo_flags; int old_gfp_mask; int lo_disk; int lo_queue; struct file* lo_backing_file; scalar_t__ lo_sizelimit; int * ioctl; int * transfer; struct block_device* lo_device; } ;
struct inode {int i_bdev; int i_mode; TYPE_2__* i_sb; } ;
struct file {int f_mode; TYPE_1__* f_op; struct address_space* f_mapping; } ;
struct block_device {int bd_disk; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
typedef int fmode_t ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {scalar_t__ s_bdev; } ;
struct TYPE_4__ {scalar_t__ fsync; int write_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct block_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct block_device*,struct block_device*,int (*) (struct loop_device*,int,struct block_device*,unsigned int)) ;
 int FUNC_5 (struct block_device*,int) ;
 struct block_device* FUNC_6 (struct block_device*,int (*) (struct loop_device*,int,struct block_device*,unsigned int)) ;
 unsigned short FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct block_device*) ;
 int FUNC_9 (int ,unsigned short) ;
 int FUNC_10 (int ,unsigned short) ;
 int FUNC_11 (int ,unsigned short) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (int ) ;
 struct file* FUNC_15 (unsigned int) ;
 int FUNC_16 (struct file*) ;
 int FUNC_17 (struct loop_device*,struct file*) ;
 scalar_t__ FUNC_18 (struct file*) ;
 int FUNC_19 (int *,int ) ;
 int VAR_14 ;
 int FUNC_20 (struct loop_device*) ;
 int FUNC_21 (struct loop_device*,struct block_device*) ;
 int FUNC_22 (struct loop_device*) ;
 int FUNC_23 (struct loop_device*) ;
 int FUNC_24 (struct loop_device*) ;
 int FUNC_25 (struct file*,struct block_device*) ;
 int FUNC_26 (struct address_space*) ;
 int FUNC_27 (struct address_space*,int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_31 (struct block_device*,int ) ;
 int FUNC_32 (int ,int) ;
 int FUNC_33 (struct block_device*,int) ;

__attribute__((used)) static int FUNC_34(struct loop_device *VAR_16, fmode_t VAR_17,
         struct block_device *VAR_18, unsigned int VAR_19)
{
 struct file *VAR_20;
 struct inode *VAR_21;
 struct address_space *VAR_22;
 struct block_device *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 int VAR_25;
 loff_t VAR_26;
 bool VAR_27;


 FUNC_3(VAR_11);

 VAR_25 = -VAR_0;
 VAR_20 = FUNC_15(VAR_19);
 if (!VAR_20)
  goto out;





 if (!(VAR_17 & VAR_3)) {
  VAR_23 = FUNC_6(VAR_18, FUNC_34);
  if (FUNC_0(VAR_23)) {
   VAR_25 = FUNC_1(VAR_23);
   goto out_putf;
  }
 }

 VAR_25 = FUNC_29(&VAR_14);
 if (VAR_25)
  goto out_bdev;

 VAR_25 = -VAR_1;
 if (VAR_16->lo_state != VAR_9)
  goto out_unlock;

 VAR_25 = FUNC_25(VAR_20, VAR_18);
 if (VAR_25)
  goto out_unlock;

 VAR_22 = VAR_20->f_mapping;
 VAR_21 = VAR_22->host;

 if (!(VAR_20->f_mode & VAR_4) || !(VAR_17 & VAR_4) ||
     !VAR_20->f_op->write_iter)
  VAR_24 |= VAR_7;

 VAR_25 = -VAR_2;
 VAR_26 = FUNC_17(VAR_16, VAR_20);
 if ((loff_t)(sector_t)VAR_26 != VAR_26)
  goto out_unlock;
 VAR_25 = FUNC_20(VAR_16);
 if (VAR_25)
  goto out_unlock;

 VAR_25 = 0;

 FUNC_33(VAR_18, (VAR_24 & VAR_7) != 0);

 VAR_16->use_dio = 0;
 VAR_16->lo_device = VAR_18;
 VAR_16->lo_flags = VAR_24;
 VAR_16->lo_backing_file = VAR_20;
 VAR_16->transfer = ((void*)0);
 VAR_16->ioctl = ((void*)0);
 VAR_16->lo_sizelimit = 0;
 VAR_16->old_gfp_mask = FUNC_26(VAR_22);
 FUNC_27(VAR_22, VAR_16->old_gfp_mask & ~(VAR_13|VAR_12));

 if (!(VAR_24 & VAR_7) && VAR_20->f_op->fsync)
  FUNC_12(VAR_16->lo_queue, 1, 0);

 if (FUNC_18(VAR_16->lo_backing_file) && VAR_21->i_sb->s_bdev) {

  unsigned short VAR_28 = FUNC_7(
   VAR_21->i_sb->s_bdev);

  FUNC_10(VAR_16->lo_queue, VAR_28);
  FUNC_11(VAR_16->lo_queue, VAR_28);
  FUNC_9(VAR_16->lo_queue, VAR_28);
 }

 FUNC_24(VAR_16);
 FUNC_23(VAR_16);
 FUNC_32(VAR_16->lo_disk, VAR_26);
 FUNC_5(VAR_18, VAR_26 << 9);
 FUNC_22(VAR_16);

 FUNC_19(&FUNC_14(VAR_18->bd_disk)->kobj, VAR_5);

 FUNC_31(VAR_18, FUNC_2(VAR_21->i_mode) ?
        FUNC_13(VAR_21->i_bdev) : VAR_10);

 VAR_16->lo_state = VAR_8;
 if (VAR_15)
  VAR_16->lo_flags |= VAR_6;
 VAR_27 = VAR_16->lo_flags & VAR_6;




 FUNC_8(VAR_18);
 FUNC_30(&VAR_14);
 if (VAR_27)
  FUNC_21(VAR_16, VAR_18);
 if (VAR_23)
  FUNC_4(VAR_18, VAR_23, FUNC_34);
 return 0;

out_unlock:
 FUNC_30(&VAR_14);
out_bdev:
 if (VAR_23)
  FUNC_4(VAR_18, VAR_23, FUNC_34);
out_putf:
 FUNC_16(VAR_20);
out:

 FUNC_28(VAR_11);
 return VAR_25;
}
