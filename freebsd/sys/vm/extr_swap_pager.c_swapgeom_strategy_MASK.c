
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct swdevt {int sw_first; struct g_consumer* sw_id; } ;
struct g_consumer {int dummy; } ;
struct buf {scalar_t__ b_iocmd; int b_blkno; int b_data; int b_npages; scalar_t__ b_offset; int * b_pages; int b_bcount; struct bio* b_caller1; int b_ioflags; int b_error; } ;
struct bio {scalar_t__ bio_cmd; int bio_offset; int bio_ma_offset; int * bio_ma; int bio_data; int bio_flags; int bio_ma_n; int bio_done; int bio_length; struct buf* bio_caller2; struct swdevt* bio_caller1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 struct bio* FUNC_2 () ;
 int FUNC_3 (struct bio*,struct g_consumer*) ;
 struct bio* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;
 int FUNC_8 (struct g_consumer*) ;
 int VAR_8 ;
 int FUNC_9 (struct g_consumer*,struct swdevt*) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_10(struct buf *VAR_10, struct swdevt *VAR_11)
{
 struct bio *VAR_12;
 struct g_consumer *VAR_13;

 FUNC_5(&VAR_7);
 VAR_13 = VAR_11->sw_id;
 if (VAR_13 == ((void*)0)) {
  FUNC_6(&VAR_7);
  VAR_10->b_error = VAR_4;
  VAR_10->b_ioflags |= VAR_0;
  FUNC_1(VAR_10);
  return;
 }
 FUNC_8(VAR_13);
 FUNC_6(&VAR_7);
 if (VAR_10->b_iocmd == VAR_2)
  VAR_12 = FUNC_4();
 else
  VAR_12 = FUNC_2();
 if (VAR_12 == ((void*)0)) {
  FUNC_5(&VAR_7);
  FUNC_9(VAR_13, VAR_11);
  FUNC_6(&VAR_7);
  VAR_10->b_error = VAR_3;
  VAR_10->b_ioflags |= VAR_0;
  FUNC_7("swap_pager: cannot allocate bio\n");
  FUNC_1(VAR_10);
  return;
 }

 VAR_10->b_caller1 = VAR_12;
 VAR_12->bio_caller1 = VAR_11;
 VAR_12->bio_caller2 = VAR_10;
 VAR_12->bio_cmd = VAR_10->b_iocmd;
 VAR_12->bio_offset = (VAR_10->b_blkno - VAR_11->sw_first) * VAR_6;
 VAR_12->bio_length = VAR_10->b_bcount;
 VAR_12->bio_done = VAR_8;
 if (!FUNC_0(VAR_10)) {
  VAR_12->bio_ma = VAR_10->b_pages;
  VAR_12->bio_data = VAR_9;
  VAR_12->bio_ma_offset = (vm_offset_t)VAR_10->b_offset & VAR_5;
  VAR_12->bio_ma_n = VAR_10->b_npages;
  VAR_12->bio_flags |= VAR_1;
 } else {
  VAR_12->bio_data = VAR_10->b_data;
  VAR_12->bio_ma = ((void*)0);
 }
 FUNC_3(VAR_12, VAR_13);
 return;
}
