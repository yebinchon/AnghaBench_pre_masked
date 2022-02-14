
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kone_mouse_event {int tilt; } ;
struct TYPE_2__ {int tilt; } ;
struct kone_device {scalar_t__ roccat_claimed; TYPE_1__ last_mouse_event; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 struct kone_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct kone_device*,struct kone_mouse_event*) ;
 int FUNC_2 (struct kone_device*,struct kone_mouse_event*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*,struct kone_mouse_event*,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_0, struct hid_report *VAR_1,
  u8 *VAR_2, int VAR_3)
{
 struct kone_device *VAR_4 = FUNC_0(VAR_0);
 struct kone_mouse_event *VAR_5 = (struct kone_mouse_event *)VAR_2;


 if (VAR_3 != sizeof(struct kone_mouse_event))
  return 0;

 if (VAR_4 == ((void*)0))
  return 0;






 if (FUNC_3(&VAR_4->last_mouse_event.tilt, &VAR_5->tilt, 5))
  FUNC_4(&VAR_4->last_mouse_event, VAR_5,
    sizeof(struct kone_mouse_event));
 else
  FUNC_5(&VAR_5->tilt, 0, 5);

 FUNC_1(VAR_4, VAR_5);

 if (VAR_4->roccat_claimed)
  FUNC_2(VAR_4, VAR_5);

 return 0;
}
