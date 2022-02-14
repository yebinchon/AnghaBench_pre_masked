
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pidff_device {int * reports; struct hid_device* hid; TYPE_2__* pool; int * control_id; TYPE_1__* device_control; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,int ,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct pidff_device *VAR_7)
{
 struct hid_device *VAR_8 = VAR_7->hid;
 int VAR_9 = 0;

 VAR_7->device_control->value[0] = VAR_7->control_id[VAR_5];

 FUNC_1(VAR_8, VAR_7->reports[VAR_2], VAR_1);
 FUNC_2(VAR_8);
 FUNC_1(VAR_8, VAR_7->reports[VAR_2], VAR_1);
 FUNC_2(VAR_8);

 VAR_7->device_control->value[0] =
  VAR_7->control_id[VAR_3];
 FUNC_1(VAR_8, VAR_7->reports[VAR_2], VAR_1);
 FUNC_2(VAR_8);


 FUNC_1(VAR_8, VAR_7->reports[VAR_4], VAR_0);
 FUNC_2(VAR_8);

 if (VAR_7->pool[VAR_6].value) {
  while (VAR_7->pool[VAR_6].value[0] < 2) {
   if (VAR_9++ > 20) {
    FUNC_3(VAR_7->hid,
      "device reports %d simultaneous effects\n",
      VAR_7->pool[VAR_6].value[0]);
    break;
   }
   FUNC_0(VAR_7->hid, "pid_pool requested again\n");
   FUNC_1(VAR_8, VAR_7->reports[VAR_4],
       VAR_0);
   FUNC_2(VAR_8);
  }
 }
}
