
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_write_zeroes_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_1(struct request_queue *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n",
  (unsigned long long)VAR_0->limits.max_write_zeroes_sectors << 9);
}
