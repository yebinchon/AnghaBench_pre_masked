
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mddev {TYPE_5__* queue; } ;
struct bio {TYPE_3__* bi_disk; } ;
struct TYPE_9__ {scalar_t__ max_write_zeroes_sectors; } ;
struct TYPE_10__ {TYPE_4__ limits; } ;
struct TYPE_8__ {TYPE_2__* queue; } ;
struct TYPE_6__ {int max_write_zeroes_sectors; } ;
struct TYPE_7__ {TYPE_1__ limits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;

__attribute__((used)) static inline void FUNC_1(struct mddev *VAR_1, struct bio *VAR_2)
{
 if (FUNC_0(VAR_2) == VAR_0 &&
     !VAR_2->bi_disk->queue->limits.max_write_zeroes_sectors)
  VAR_1->queue->limits.max_write_zeroes_sectors = 0;
}
