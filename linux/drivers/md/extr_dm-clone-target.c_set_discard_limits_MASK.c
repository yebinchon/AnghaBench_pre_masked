
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct queue_limits {int discard_granularity; int max_discard_segments; int discard_misaligned; int discard_alignment; int max_hw_discard_sectors; int max_discard_sectors; } ;
struct clone {int region_size; int flags; TYPE_1__* dest_dev; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {struct queue_limits limits; } ;
struct TYPE_3__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct block_device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct clone *VAR_3, struct queue_limits *VAR_4)
{
 struct block_device *VAR_5 = VAR_3->dest_dev->bdev;
 struct queue_limits *VAR_6 = &FUNC_0(VAR_5)->limits;

 if (!FUNC_2(VAR_0, &VAR_3->flags)) {

  VAR_4->discard_granularity = VAR_3->region_size << VAR_1;
  VAR_4->max_discard_sectors = FUNC_1(VAR_2 >> VAR_1, VAR_3->region_size);
  return;
 }






 VAR_4->max_discard_sectors = VAR_6->max_discard_sectors;
 VAR_4->max_hw_discard_sectors = VAR_6->max_hw_discard_sectors;
 VAR_4->discard_granularity = VAR_6->discard_granularity;
 VAR_4->discard_alignment = VAR_6->discard_alignment;
 VAR_4->discard_misaligned = VAR_6->discard_misaligned;
 VAR_4->max_discard_segments = VAR_6->max_discard_segments;
}
