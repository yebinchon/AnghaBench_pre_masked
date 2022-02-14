
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pidff_device {scalar_t__* status_id; int hid; TYPE_3__* block_load; TYPE_2__* block_load_status; int * reports; TYPE_1__* create_new_effect_type; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_4__ {int* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pidff_device *VAR_10, int VAR_11)
{
 int VAR_12;

 VAR_10->create_new_effect_type->value[0] = VAR_11;
 FUNC_2(VAR_10->hid, VAR_10->reports[VAR_7],
   VAR_3);
 FUNC_0(VAR_10->hid, "create_new_effect sent, type: %d\n", VAR_11);

 VAR_10->block_load[VAR_8].value[0] = 0;
 VAR_10->block_load_status->value[0] = 0;
 FUNC_3(VAR_10->hid);

 for (VAR_12 = 0; VAR_12 < 60; VAR_12++) {
  FUNC_0(VAR_10->hid, "pid_block_load requested\n");
  FUNC_2(VAR_10->hid, VAR_10->reports[VAR_4],
    VAR_2);
  FUNC_3(VAR_10->hid);
  if (VAR_10->block_load_status->value[0] ==
      VAR_10->status_id[VAR_6]) {
   FUNC_0(VAR_10->hid, "device reported free memory: %d bytes\n",
     VAR_10->block_load[VAR_9].value ?
     VAR_10->block_load[VAR_9].value[0] : -1);
   return 0;
  }
  if (VAR_10->block_load_status->value[0] ==
      VAR_10->status_id[VAR_5]) {
   FUNC_0(VAR_10->hid, "not enough memory free: %d bytes\n",
    VAR_10->block_load[VAR_9].value ?
    VAR_10->block_load[VAR_9].value[0] : -1);
   return -VAR_1;
  }
 }
 FUNC_1(VAR_10->hid, "pid_block_load failed 60 times\n");
 return -VAR_0;
}
