
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct queue_limits {int discard_granularity; int discard_misaligned; int discard_alignment; int max_hw_discard_sectors; int max_discard_sectors; } ;
struct TYPE_5__ {int discard_passdown; } ;
struct cache {int discard_block_size; int origin_sectors; TYPE_2__ features; TYPE_1__* origin_dev; } ;
struct block_device {int dummy; } ;
struct TYPE_6__ {struct queue_limits limits; } ;
struct TYPE_4__ {struct block_device* bdev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_2, struct queue_limits *VAR_3)
{
 struct block_device *VAR_4 = VAR_2->origin_dev->bdev;
 struct queue_limits *VAR_5 = &FUNC_0(VAR_4)->limits;

 if (!VAR_2->features.discard_passdown) {

  VAR_3->max_discard_sectors = FUNC_1(VAR_1, VAR_2->discard_block_size * 1024,
          VAR_2->origin_sectors);
  VAR_3->discard_granularity = VAR_2->discard_block_size << VAR_0;
  return;
 }





 VAR_3->max_discard_sectors = VAR_5->max_discard_sectors;
 VAR_3->max_hw_discard_sectors = VAR_5->max_hw_discard_sectors;
 VAR_3->discard_granularity = VAR_5->discard_granularity;
 VAR_3->discard_alignment = VAR_5->discard_alignment;
 VAR_3->discard_misaligned = VAR_5->discard_misaligned;
}
