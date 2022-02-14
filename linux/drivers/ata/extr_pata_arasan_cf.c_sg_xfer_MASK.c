
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct arasan_cf_dev {int pbase; TYPE_3__* host; scalar_t__ vbase; TYPE_2__* qc; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int lock; int dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ tf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct arasan_cf_dev*,int,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct arasan_cf_dev*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct arasan_cf_dev *VAR_8, struct scatterlist *VAR_9)
{
 dma_addr_t VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = VAR_8->qc->tf.flags & VAR_0;
 unsigned long VAR_17;
 int VAR_18 = 0;

 VAR_13 = FUNC_5(VAR_9);
 if (VAR_16) {
  VAR_11 = FUNC_4(VAR_9);
  VAR_10 = VAR_8->pbase + VAR_2;
 } else {
  VAR_10 = FUNC_4(VAR_9);
  VAR_11 = VAR_8->pbase + VAR_1;
 }
 while (VAR_13) {
  VAR_12 = FUNC_2(VAR_13, VAR_4);
  FUNC_6(&VAR_8->host->lock, VAR_17);
  VAR_15 = FUNC_3(VAR_8->vbase + VAR_6) &
   ~VAR_5;
  FUNC_9(VAR_15 | VAR_12 | VAR_7,
    VAR_8->vbase + VAR_6);
  FUNC_7(&VAR_8->host->lock, VAR_17);


  while (VAR_12) {

   if (!VAR_16) {
    VAR_18 = FUNC_8(VAR_8);
    if (VAR_18)
     goto fail;
   }


   VAR_14 = FUNC_2(VAR_12, VAR_3);
   VAR_18 = FUNC_1(VAR_8, VAR_11, VAR_10, VAR_14);
   if (VAR_18) {
    FUNC_0(VAR_8->host->dev, "dma failed");
    goto fail;
   }

   if (VAR_16)
    VAR_11 += VAR_14;
   else
    VAR_10 += VAR_14;

   VAR_13 -= VAR_14;
   VAR_12 -= VAR_14;


   if (VAR_16) {
    VAR_18 = FUNC_8(VAR_8);
    if (VAR_18)
     goto fail;
   }
  }
 }

fail:
 FUNC_6(&VAR_8->host->lock, VAR_17);
 FUNC_9(FUNC_3(VAR_8->vbase + VAR_6) & ~VAR_7,
   VAR_8->vbase + VAR_6);
 FUNC_7(&VAR_8->host->lock, VAR_17);

 return VAR_18;
}
