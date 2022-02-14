
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct tmc_drvdata {int spinlock; int base; struct etr_buf* perf_buf; } ;
struct perf_output_handle {unsigned long size; unsigned long head; } ;
struct etr_perf_buffer {scalar_t__ snapshot; struct etr_buf* etr_buf; } ;
struct etr_buf {int full; unsigned long offset; unsigned long len; unsigned long size; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct tmc_drvdata* FUNC_4 (int ) ;
 int FUNC_5 (struct perf_output_handle*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct etr_buf*,unsigned long) ;
 int FUNC_9 (struct etr_perf_buffer*,unsigned long,unsigned long) ;
 int FUNC_10 (struct tmc_drvdata*) ;
 unsigned long FUNC_11 (struct tmc_drvdata*) ;
 int FUNC_12 (struct tmc_drvdata*) ;

__attribute__((used)) static unsigned long
FUNC_13(struct coresight_device *VAR_1,
        struct perf_output_handle *VAR_2,
        void *VAR_3)
{
 bool VAR_4 = 0;
 unsigned long VAR_5, VAR_6, VAR_7 = 0;
 struct tmc_drvdata *VAR_8 = FUNC_4(VAR_1->dev.parent);
 struct etr_perf_buffer *VAR_9 = VAR_3;
 struct etr_buf *VAR_10 = VAR_9->etr_buf;

 FUNC_6(&VAR_8->spinlock, VAR_5);


 if (FUNC_3(VAR_1->refcnt) != 1) {
  FUNC_7(&VAR_8->spinlock, VAR_5);
  goto out;
 }

 if (FUNC_2(VAR_8->perf_buf != VAR_10)) {
  VAR_4 = 1;
  FUNC_7(&VAR_8->spinlock, VAR_5);
  goto out;
 }

 FUNC_1(VAR_8->base);

 FUNC_10(VAR_8);
 FUNC_12(VAR_8);

 FUNC_0(VAR_8->base);
 FUNC_7(&VAR_8->spinlock, VAR_5);

 VAR_4 = VAR_10->full;
 VAR_6 = VAR_10->offset;
 VAR_7 = VAR_10->len;
 if (!VAR_9->snapshot && VAR_7 > VAR_2->size) {
  u32 VAR_11 = FUNC_11(VAR_8);





  VAR_7 = VAR_2->size & VAR_11;
  VAR_6 = VAR_10->offset + VAR_10->len - VAR_7;

  if (VAR_6 >= VAR_10->size)
   VAR_6 -= VAR_10->size;
  VAR_4 = 1;
 }


 if (VAR_4)
  FUNC_8(VAR_10, VAR_10->offset);
 FUNC_9(VAR_9, VAR_6, VAR_7);







 if (VAR_9->snapshot)
  VAR_2->head += VAR_7;
out:






 if (!VAR_9->snapshot && VAR_4)
  FUNC_5(VAR_2, VAR_0);
 return VAR_7;
}
