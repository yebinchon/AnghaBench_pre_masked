
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long max_sectors; scalar_t__ max_dev_sectors; } ;
struct request_queue {int queue_lock; TYPE_2__* backing_dev_info; TYPE_1__ limits; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {unsigned long io_pages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (unsigned long*,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct request_queue *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5,
  VAR_6 = FUNC_1(VAR_2) >> 1,
   VAR_7 = 1 << (VAR_1 - 10);
 ssize_t VAR_8 = FUNC_2(&VAR_5, VAR_3, VAR_4);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = FUNC_0(VAR_6, (unsigned long)
      VAR_2->limits.max_dev_sectors >> 1);

 if (VAR_5 > VAR_6 || VAR_5 < VAR_7)
  return -VAR_0;

 FUNC_3(&VAR_2->queue_lock);
 VAR_2->limits.max_sectors = VAR_5 << 1;
 VAR_2->backing_dev_info->io_pages = VAR_5 >> (VAR_1 - 10);
 FUNC_4(&VAR_2->queue_lock);

 return VAR_8;
}
