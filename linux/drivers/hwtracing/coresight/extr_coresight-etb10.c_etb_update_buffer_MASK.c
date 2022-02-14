
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct perf_output_handle {unsigned long size; unsigned long head; } ;
struct etb_drvdata {int buffer_depth; int spinlock; scalar_t__ base; } ;
struct cs_buffers {int cur; unsigned long offset; int nr_pages; scalar_t__ snapshot; int ** data_pages; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 unsigned long FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct etb_drvdata*) ;
 int FUNC_4 (struct etb_drvdata*) ;
 int FUNC_5 (int ) ;
 int* VAR_9 ;
 int FUNC_6 (TYPE_1__*,char*,unsigned long) ;
 struct etb_drvdata* FUNC_7 (int ) ;
 int FUNC_8 (struct perf_output_handle*,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_13(struct coresight_device *VAR_10,
         struct perf_output_handle *VAR_11,
         void *VAR_12)
{
 bool VAR_13 = 0;
 int VAR_14, VAR_15;
 u8 *VAR_16;
 const u32 *VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22;
 unsigned long VAR_23, VAR_24 = 0, VAR_25;
 struct cs_buffers *VAR_26 = VAR_12;
 struct etb_drvdata *VAR_27 = FUNC_7(VAR_10->dev.parent);

 if (!VAR_26)
  return 0;

 VAR_20 = VAR_27->buffer_depth * VAR_1;

 FUNC_10(&VAR_27->spinlock, VAR_25);


 if (FUNC_5(VAR_10->refcnt) != 1)
  goto out;

 FUNC_3(VAR_27);
 FUNC_2(VAR_27->base);


 VAR_18 = FUNC_9(VAR_27->base + VAR_3);
 VAR_19 = FUNC_9(VAR_27->base + VAR_4);






 if (VAR_19 % VAR_1) {
  FUNC_6(&VAR_10->dev,
   "write_ptr: %lu not aligned to formatter frame size\n",
   (unsigned long)VAR_19);

  VAR_19 &= ~(VAR_1 - 1);
  VAR_13 = 1;
 }







 VAR_21 = FUNC_9(VAR_27->base + VAR_6);
 if (VAR_21 & VAR_5) {
  VAR_13 = 1;
  VAR_24 = VAR_20;
  VAR_18 = VAR_19;
 } else {
  VAR_24 = FUNC_0(VAR_19, VAR_18, VAR_27->buffer_depth);
  VAR_24 *= VAR_1;
 }
 if (!VAR_26->snapshot && VAR_24 > VAR_11->size) {
  u32 VAR_28 = ~(VAR_1 - 1);


  VAR_24 = VAR_11->size & VAR_28;




  VAR_18 = (VAR_19 + VAR_27->buffer_depth) -
     VAR_24 / VAR_1;

  if (VAR_18 > (VAR_27->buffer_depth - 1))
   VAR_18 -= VAR_27->buffer_depth;

  VAR_13 = 1;
 }







 if (!VAR_26->snapshot && VAR_13)
  FUNC_8(VAR_11, VAR_8);


 FUNC_12(VAR_18, VAR_27->base + VAR_3);

 VAR_15 = VAR_26->cur;
 VAR_23 = VAR_26->offset;
 VAR_17 = VAR_9;

 for (VAR_14 = 0; VAR_14 < VAR_24; VAR_14 += 4) {
  VAR_16 = VAR_26->data_pages[VAR_15] + VAR_23;
  VAR_22 = FUNC_9(VAR_27->base +
       VAR_2);
  if (VAR_13 && VAR_14 < VAR_0) {
   VAR_22 = *VAR_17;
   VAR_17++;
  }

  *(u32 *)VAR_16 = VAR_22;
  VAR_16 += 4;

  VAR_23 += 4;
  if (VAR_23 >= VAR_7) {
   VAR_23 = 0;
   VAR_15++;

   VAR_15 &= VAR_26->nr_pages - 1;
  }
 }


 FUNC_12(0x0, VAR_27->base + VAR_3);
 FUNC_12(0x0, VAR_27->base + VAR_4);







 if (VAR_26->snapshot)
  VAR_11->head += VAR_24;

 FUNC_4(VAR_27);
 FUNC_1(VAR_27->base);
out:
 FUNC_11(&VAR_27->spinlock, VAR_25);

 return VAR_24;
}
