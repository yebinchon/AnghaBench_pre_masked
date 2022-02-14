
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target2; scalar_t__ target; } ;
struct stripe_head {int disks; scalar_t__ check_state; struct r5conf* raid_conf; struct r5dev* dev; int batch_head; TYPE_1__ ops; } ;
struct raid5_percpu {int dummy; } ;
struct r5dev {int flags; } ;
struct r5conf {int level; int wait_for_overlap; int percpu; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long FUNC_2 () ;
 struct dma_async_tx_descriptor* FUNC_3 (struct stripe_head*,struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct stripe_head*) ;
 int FUNC_5 (struct stripe_head*,struct raid5_percpu*) ;
 int FUNC_6 (struct stripe_head*,struct raid5_percpu*,int) ;
 struct dma_async_tx_descriptor* FUNC_7 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_8 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_9 (struct stripe_head*,struct raid5_percpu*) ;
 struct dma_async_tx_descriptor* FUNC_10 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 struct dma_async_tx_descriptor* FUNC_11 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 struct dma_async_tx_descriptor* FUNC_12 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 int FUNC_13 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 int FUNC_14 (struct stripe_head*,struct raid5_percpu*,struct dma_async_tx_descriptor*) ;
 struct raid5_percpu* FUNC_15 (int ,unsigned long) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,unsigned long*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(struct stripe_head *VAR_11, unsigned long VAR_12)
{
 int VAR_13 = 0, VAR_14, VAR_15 = VAR_11->disks;
 struct dma_async_tx_descriptor *VAR_16 = ((void*)0);
 struct r5conf *VAR_17 = VAR_11->raid_conf;
 int VAR_18 = VAR_17->level;
 struct raid5_percpu *VAR_19;
 unsigned long VAR_20;

 VAR_20 = FUNC_2();
 VAR_19 = FUNC_15(VAR_17->percpu, VAR_20);
 if (FUNC_18(VAR_2, &VAR_12)) {
  FUNC_4(VAR_11);
  VAR_13++;
 }

 if (FUNC_18(VAR_4, &VAR_12)) {
  if (VAR_18 < 6)
   VAR_16 = FUNC_7(VAR_11, VAR_19);
  else {
   if (VAR_11->ops.target2 < 0 || VAR_11->ops.target < 0)
    VAR_16 = FUNC_8(VAR_11, VAR_19);
   else
    VAR_16 = FUNC_9(VAR_11, VAR_19);
  }

  if (VAR_16 && !FUNC_18(VAR_7, &VAR_12))
   FUNC_1(VAR_16);
 }

 if (FUNC_18(VAR_6, &VAR_12)) {
  if (VAR_18 < 6)
   VAR_16 = FUNC_11(VAR_11, VAR_19, VAR_16);
  else
   VAR_16 = FUNC_12(VAR_11, VAR_19, VAR_16);
 }

 if (FUNC_18(VAR_5, &VAR_12))
  VAR_16 = FUNC_10(VAR_11, VAR_19, VAR_16);

 if (FUNC_18(VAR_1, &VAR_12)) {
  VAR_16 = FUNC_3(VAR_11, VAR_16);
  VAR_13++;
 }

 if (FUNC_18(VAR_7, &VAR_12)) {
  if (VAR_18 < 6)
   FUNC_13(VAR_11, VAR_19, VAR_16);
  else
   FUNC_14(VAR_11, VAR_19, VAR_16);
 }

 if (FUNC_18(VAR_3, &VAR_12)) {
  if (VAR_11->check_state == VAR_8)
   FUNC_5(VAR_11, VAR_19);
  else if (VAR_11->check_state == VAR_10)
   FUNC_6(VAR_11, VAR_19, 0);
  else if (VAR_11->check_state == VAR_9)
   FUNC_6(VAR_11, VAR_19, 1);
  else
   FUNC_0();
 }

 if (VAR_13 && !VAR_11->batch_head)
  for (VAR_14 = VAR_15; VAR_14--; ) {
   struct r5dev *VAR_21 = &VAR_11->dev[VAR_14];
   if (FUNC_17(VAR_0, &VAR_21->flags))
    FUNC_19(&VAR_11->raid_conf->wait_for_overlap);
  }
 FUNC_16();
}
