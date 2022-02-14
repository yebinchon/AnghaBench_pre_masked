
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {unsigned long index; } ;
struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; struct buffer_head* b_this_page; struct bitmap* b_private; int b_end_io; int b_bdev; } ;
struct bitmap {int flags; int pending_writes; int write_wait; } ;
typedef unsigned long sector_t ;
struct TYPE_2__ {int s_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct buffer_head* FUNC_0 (struct page*,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct page*,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct inode*,unsigned long) ;
 int VAR_7 ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (char*,int,unsigned long long) ;
 int FUNC_7 (char*,int,unsigned long long,int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int ,int ,struct buffer_head*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_8, unsigned long VAR_9,
       struct bitmap *VAR_10,
       unsigned long VAR_11,
       struct page *VAR_12)
{
 int VAR_13 = 0;
 struct inode *VAR_14 = FUNC_5(VAR_8);
 struct buffer_head *VAR_15;
 sector_t VAR_16;

 FUNC_6("read bitmap file (%dB @ %llu)\n", (int)VAR_5,
   (unsigned long long)VAR_9 << VAR_4);

 VAR_15 = FUNC_0(VAR_12, 1<<VAR_14->i_blkbits, 0);
 if (!VAR_15) {
  VAR_13 = -VAR_3;
  goto out;
 }
 FUNC_3(VAR_12, VAR_15);
 VAR_16 = VAR_9 << (VAR_4 - VAR_14->i_blkbits);
 while (VAR_15) {
  if (VAR_11 == 0)
   VAR_15->b_blocknr = 0;
  else {
   VAR_15->b_blocknr = FUNC_4(VAR_14, VAR_16);
   if (VAR_15->b_blocknr == 0) {

    VAR_13 = -VAR_1;
    goto out;
   }
   VAR_15->b_bdev = VAR_14->i_sb->s_bdev;
   if (VAR_11 < (1<<VAR_14->i_blkbits))
    VAR_11 = 0;
   else
    VAR_11 -= (1<<VAR_14->i_blkbits);

   VAR_15->b_end_io = VAR_7;
   VAR_15->b_private = VAR_10;
   FUNC_1(&VAR_10->pending_writes);
   FUNC_8(VAR_15);
   FUNC_9(VAR_15);
   FUNC_10(VAR_6, 0, VAR_15);
  }
  VAR_16++;
  VAR_15 = VAR_15->b_this_page;
 }
 VAR_12->index = VAR_9;

 FUNC_12(VAR_10->write_wait,
     FUNC_2(&VAR_10->pending_writes)==0);
 if (FUNC_11(VAR_0, &VAR_10->flags))
  VAR_13 = -VAR_2;
out:
 if (VAR_13)
  FUNC_7("md: bitmap read error: (%dB @ %llu): %d\n",
         (int)VAR_5,
         (unsigned long long)VAR_9 << VAR_4,
         VAR_13);
 return VAR_13;
}
