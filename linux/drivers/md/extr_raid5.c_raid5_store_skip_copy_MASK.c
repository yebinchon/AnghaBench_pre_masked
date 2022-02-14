
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5conf {unsigned long skip_copy; } ;
struct mddev {TYPE_2__* queue; struct r5conf* private; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct r5conf *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_6 >= VAR_3)
  return -VAR_1;
 if (FUNC_0(VAR_5, 10, &VAR_8))
  return -VAR_1;
 VAR_8 = !!VAR_8;

 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9)
  return VAR_9;
 VAR_7 = VAR_4->private;
 if (!VAR_7)
  VAR_9 = -VAR_2;
 else if (VAR_8 != VAR_7->skip_copy) {
  FUNC_3(VAR_4);
  VAR_7->skip_copy = VAR_8;
  if (VAR_8)
   VAR_4->queue->backing_dev_info->capabilities |=
    VAR_0;
  else
   VAR_4->queue->backing_dev_info->capabilities &=
    ~VAR_0;
  FUNC_2(VAR_4);
 }
 FUNC_4(VAR_4);
 return VAR_9 ?: VAR_6;
}
