
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {int ll_open_lock; int ll_open_count; TYPE_1__* ll_driver; } ;
struct TYPE_2__ {int (* open ) (struct hid_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hid_device*) ;

int FUNC_3(struct hid_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->ll_open_lock);
 if (VAR_1)
  return VAR_1;

 if (!VAR_0->ll_open_count++) {
  VAR_1 = VAR_0->ll_driver->open(VAR_0);
  if (VAR_1)
   VAR_0->ll_open_count--;
 }

 FUNC_1(&VAR_0->ll_open_lock);
 return VAR_1;
}
