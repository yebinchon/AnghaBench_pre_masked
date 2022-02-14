
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tmc_drvdata {scalar_t__ mode; unsigned long size; int spinlock; scalar_t__ base; } ;
struct perf_output_handle {unsigned long size; unsigned long head; } ;
struct cs_buffers {int cur; unsigned long offset; int** data_pages; int nr_pages; scalar_t__ snapshot; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;


 unsigned long FUNC_0 (int,int,unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int* VAR_6 ;
 struct tmc_drvdata* FUNC_5 (int ) ;
 int FUNC_6 (struct perf_output_handle*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct tmc_drvdata*) ;
 int FUNC_11 (struct tmc_drvdata*) ;
 int FUNC_12 (struct tmc_drvdata*) ;
 int FUNC_13 (struct tmc_drvdata*) ;
 int FUNC_14 (struct tmc_drvdata*,int) ;

__attribute__((used)) static unsigned long FUNC_15(struct coresight_device *VAR_7,
      struct perf_output_handle *VAR_8,
      void *VAR_9)
{
 bool VAR_10 = 0;
 int VAR_11, VAR_12;
 const u32 *VAR_13;
 u32 *VAR_14;
 u64 VAR_15, VAR_16;
 u32 VAR_17;
 unsigned long VAR_18, VAR_19 = 0, VAR_20;
 struct cs_buffers *VAR_21 = VAR_9;
 struct tmc_drvdata *VAR_22 = FUNC_5(VAR_7->dev.parent);

 if (!VAR_21)
  return 0;


 if (FUNC_3(VAR_22->mode != VAR_0))
  return 0;

 FUNC_8(&VAR_22->spinlock, VAR_20);


 if (FUNC_4(VAR_7->refcnt) != 1)
  goto out;

 FUNC_2(VAR_22->base);

 FUNC_10(VAR_22);

 VAR_15 = FUNC_12(VAR_22);
 VAR_16 = FUNC_13(VAR_22);





 VAR_17 = FUNC_7(VAR_22->base + VAR_4);
 if (VAR_17 & VAR_5) {
  VAR_10 = 1;
  VAR_19 = VAR_22->size;
 } else {
  VAR_19 = FUNC_0(VAR_16, VAR_15, VAR_22->size);
 }
 if (!VAR_21->snapshot && VAR_19 > VAR_8->size) {
  u32 VAR_23 = FUNC_11(VAR_22);





  VAR_19 = VAR_8->size & VAR_23;

  VAR_15 = (VAR_16 + VAR_22->size) - VAR_19;

  if (VAR_15 > (VAR_22->size - 1))
   VAR_15 -= VAR_22->size;

  FUNC_14(VAR_22, VAR_15);
  VAR_10 = 1;
 }







 if (!VAR_21->snapshot && VAR_10)
  FUNC_6(VAR_8, VAR_2);

 VAR_12 = VAR_21->cur;
 VAR_18 = VAR_21->offset;
 VAR_13 = VAR_6;


 for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11 += 4) {
  VAR_14 = VAR_21->data_pages[VAR_12] + VAR_18;
  *VAR_14 = FUNC_7(VAR_22->base + VAR_3);

  if (VAR_10 && *VAR_13) {
   *VAR_14 = *VAR_13;
   VAR_13++;
  }

  VAR_18 += 4;
  if (VAR_18 >= VAR_1) {
   VAR_18 = 0;
   VAR_12++;

   VAR_12 &= VAR_21->nr_pages - 1;
  }
 }







 if (VAR_21->snapshot)
  VAR_8->head += VAR_19;

 FUNC_1(VAR_22->base);
out:
 FUNC_9(&VAR_22->spinlock, VAR_20);

 return VAR_19;
}
