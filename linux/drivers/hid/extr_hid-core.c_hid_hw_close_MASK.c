
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {int ll_open_lock; TYPE_1__* ll_driver; int ll_open_count; } ;
struct TYPE_2__ {int (* close ) (struct hid_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hid_device*) ;

void FUNC_3(struct hid_device *VAR_0)
{
 FUNC_0(&VAR_0->ll_open_lock);
 if (!--VAR_0->ll_open_count)
  VAR_0->ll_driver->close(VAR_0);
 FUNC_1(&VAR_0->ll_open_lock);
}
