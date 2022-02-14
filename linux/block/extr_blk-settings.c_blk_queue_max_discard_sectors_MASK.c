
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int max_hw_discard_sectors; unsigned int max_discard_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;



void FUNC_0(struct request_queue *VAR_0,
  unsigned int VAR_1)
{
 VAR_0->limits.max_hw_discard_sectors = VAR_1;
 VAR_0->limits.max_discard_sectors = VAR_1;
}
