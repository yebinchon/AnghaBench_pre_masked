
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wiiproto_handler {int size; scalar_t__ id; int (* func ) (struct wiimote_data*,scalar_t__*) ;} ;
struct TYPE_2__ {int lock; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct wiiproto_handler* VAR_1 ;
 struct wiimote_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct wiimote_data*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_2, struct hid_report *VAR_3,
       u8 *VAR_4, int VAR_5)
{
 struct wiimote_data *VAR_6 = FUNC_0(VAR_2);
 struct wiiproto_handler *VAR_7;
 int VAR_8;
 unsigned long VAR_9;

 if (VAR_5 < 1)
  return -VAR_0;

 FUNC_2(&VAR_6->state.lock, VAR_9);

 for (VAR_8 = 0; VAR_1[VAR_8].id; ++VAR_8) {
  VAR_7 = &VAR_1[VAR_8];
  if (VAR_7->id == VAR_4[0] && VAR_7->size < VAR_5) {
   VAR_7->func(VAR_6, &VAR_4[1]);
   break;
  }
 }

 if (!VAR_1[VAR_8].id)
  FUNC_1(VAR_2, "Unhandled report %hhu size %d\n", VAR_4[0],
         VAR_5);

 FUNC_3(&VAR_6->state.lock, VAR_9);

 return 0;
}
