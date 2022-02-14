
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bus; int release; } ;
struct hid_device {int ll_open_lock; int driver_input_lock; int debug_list_lock; int debug_list; int debug_wait; TYPE_1__ dev; } ;


 int VAR_0 ;
 struct hid_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (struct hid_device*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 struct hid_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

struct hid_device *FUNC_10(void)
{
 struct hid_device *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(VAR_5);

 FUNC_3(&VAR_4->dev);
 VAR_4->dev.release = VAR_3;
 VAR_4->dev.bus = &VAR_2;
 FUNC_2(&VAR_4->dev);

 FUNC_4(VAR_4);

 FUNC_5(&VAR_4->debug_wait);
 FUNC_1(&VAR_4->debug_list);
 FUNC_9(&VAR_4->debug_list_lock);
 FUNC_8(&VAR_4->driver_input_lock, 1);
 FUNC_7(&VAR_4->ll_open_lock);

 return VAR_4;
}
