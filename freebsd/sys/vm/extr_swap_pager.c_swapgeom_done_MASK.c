
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swdevt {int dummy; } ;
struct g_consumer {int dummy; } ;
struct buf {int * b_caller1; scalar_t__ b_error; scalar_t__ b_bcount; scalar_t__ b_resid; int b_ioflags; } ;
struct bio {struct swdevt* bio_caller1; scalar_t__ bio_error; scalar_t__ bio_completed; int bio_flags; struct g_consumer* bio_from; struct buf* bio_caller2; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct g_consumer*,struct swdevt*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_2)
{
 struct swdevt *VAR_3;
 struct buf *VAR_4;
 struct g_consumer *VAR_5;

 VAR_4 = VAR_2->bio_caller2;
 VAR_5 = VAR_2->bio_from;
 VAR_4->b_ioflags = VAR_2->bio_flags;
 if (VAR_2->bio_error)
  VAR_4->b_ioflags |= VAR_0;
 VAR_4->b_resid = VAR_4->b_bcount - VAR_2->bio_completed;
 VAR_4->b_error = VAR_2->bio_error;
 VAR_4->b_caller1 = ((void*)0);
 FUNC_0(VAR_4);
 VAR_3 = VAR_2->bio_caller1;
 FUNC_2(&VAR_1);
 FUNC_4(VAR_5, VAR_3);
 FUNC_3(&VAR_1);
 FUNC_1(VAR_2);
}
