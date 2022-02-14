
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int discard_granularity; unsigned long max_hw_discard_sectors; unsigned long max_discard_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct request_queue *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 ssize_t VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4);

 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 & (VAR_2->limits.discard_granularity - 1))
  return -VAR_0;

 VAR_5 >>= 9;
 if (VAR_5 > VAR_1)
  return -VAR_0;

 if (VAR_5 > VAR_2->limits.max_hw_discard_sectors)
  VAR_5 = VAR_2->limits.max_hw_discard_sectors;

 VAR_2->limits.max_discard_sectors = VAR_5;
 return VAR_6;
}
