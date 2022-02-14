
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long daemon_sleep; } ;
struct mddev {TYPE_2__* thread; TYPE_1__ bitmap_info; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned long timeout; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char const*,unsigned long*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{

 unsigned long VAR_7;
 int VAR_8 = FUNC_1(VAR_5, &VAR_7, 4);
 if (VAR_8)
  return VAR_8;


 if (VAR_7 >= VAR_2 / VAR_1)
  return -VAR_0;

 VAR_7 = VAR_7 * VAR_1 / 10000;

 if (VAR_7 >= VAR_3)
  VAR_7 = VAR_3-1;
 if (VAR_7 < 1)
  VAR_7 = 1;
 VAR_4->bitmap_info.daemon_sleep = VAR_7;
 if (VAR_4->thread) {




  if (VAR_4->thread->timeout < VAR_3) {
   VAR_4->thread->timeout = VAR_7;
   FUNC_0(VAR_4->thread);
  }
 }
 return VAR_6;
}
