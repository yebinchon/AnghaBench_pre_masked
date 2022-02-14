
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd_battery; int drm; int sync; int ready; int lock; } ;
struct TYPE_3__ {int worker; int lock; } ;
struct wiimote_data {int timer; int init_worker; TYPE_2__ state; TYPE_1__ queue; struct hid_device* hdev; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hid_device*,struct wiimote_data*) ;
 int FUNC_2 (int *) ;
 struct wiimote_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct wiimote_data *FUNC_7(struct hid_device *VAR_5)
{
 struct wiimote_data *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->hdev = VAR_5;
 FUNC_1(VAR_5, VAR_6);

 FUNC_5(&VAR_6->queue.lock);
 FUNC_0(&VAR_6->queue.worker, VAR_4);

 FUNC_5(&VAR_6->state.lock);
 FUNC_2(&VAR_6->state.ready);
 FUNC_4(&VAR_6->state.sync);
 VAR_6->state.drm = VAR_1;
 VAR_6->state.cmd_battery = 0xff;

 FUNC_0(&VAR_6->init_worker, VAR_3);
 FUNC_6(&VAR_6->timer, VAR_2, 0);

 return VAR_6;
}
