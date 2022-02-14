
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inrange_state; } ;
struct wacom_wac {TYPE_1__ hid_data; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 struct wacom* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_0,
  struct hid_report *VAR_1)
{
 struct wacom *VAR_2 = FUNC_0(VAR_0);
 struct wacom_wac *VAR_3 = &VAR_2->wacom_wac;

 VAR_3->hid_data.inrange_state = 0;
}
