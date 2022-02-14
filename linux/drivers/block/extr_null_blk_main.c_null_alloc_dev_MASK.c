
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int size; int zone_nr_conv; int zone_size; int zoned; int use_per_node_hctx; int blocking; int hw_queue_depth; int irqmode; int blocksize; int queue_mode; int home_node; int submit_queues; int completion_nsec; int badblocks; int cache; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct nullb_device*) ;
 struct nullb_device* FUNC_3 (int,int ) ;

__attribute__((used)) static struct nullb_device *FUNC_4(void)
{
 struct nullb_device *VAR_15;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return ((void*)0);
 FUNC_0(&VAR_15->data, VAR_0);
 FUNC_0(&VAR_15->cache, VAR_0);
 if (FUNC_1(&VAR_15->badblocks, 0)) {
  FUNC_2(VAR_15);
  return ((void*)0);
 }

 VAR_15->size = VAR_5 * 1024;
 VAR_15->completion_nsec = VAR_4;
 VAR_15->submit_queues = VAR_10;
 VAR_15->home_node = VAR_6;
 VAR_15->queue_mode = VAR_9;
 VAR_15->blocksize = VAR_3;
 VAR_15->irqmode = VAR_8;
 VAR_15->hw_queue_depth = VAR_7;
 VAR_15->blocking = VAR_2;
 VAR_15->use_per_node_hctx = VAR_11;
 VAR_15->zoned = VAR_14;
 VAR_15->zone_size = VAR_13;
 VAR_15->zone_nr_conv = VAR_12;
 return VAR_15;
}
