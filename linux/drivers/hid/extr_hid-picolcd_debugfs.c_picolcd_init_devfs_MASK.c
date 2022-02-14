
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_data {int addr_sz; void* debug_flash; void* debug_eeprom; void* debug_reset; int mutex_flash; struct hid_device* hdev; } ;
struct hid_report {int maxfield; TYPE_1__** field; } ;
struct hid_device {int debug_dir; } ;
struct TYPE_2__ {int report_size; int report_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int,int ,struct picolcd_data*,int *) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct picolcd_data *VAR_5,
  struct hid_report *VAR_6, struct hid_report *VAR_7,
  struct hid_report *VAR_8, struct hid_report *VAR_9,
  struct hid_report *VAR_10)
{
 struct hid_device *VAR_11 = VAR_5->hdev;

 FUNC_2(&VAR_5->mutex_flash);


 if (VAR_10)
  VAR_5->debug_reset = FUNC_0("reset", 0600,
    VAR_11->debug_dir, VAR_5, &VAR_4);


 if (VAR_6 || VAR_7)
  VAR_5->debug_eeprom = FUNC_0("eeprom",
   (VAR_7 ? VAR_1 : 0) | (VAR_6 ? VAR_0 : 0),
   VAR_11->debug_dir, VAR_5, &VAR_2);


 if (VAR_8 && VAR_8->maxfield == 1 && VAR_8->field[0]->report_size == 8)
  VAR_5->addr_sz = VAR_8->field[0]->report_count - 1;
 else
  VAR_5->addr_sz = -1;
 if (VAR_5->addr_sz == 2 || VAR_5->addr_sz == 3) {
  VAR_5->debug_flash = FUNC_0("flash",
   (VAR_9 ? VAR_1 : 0) | (VAR_8 ? VAR_0 : 0),
   VAR_11->debug_dir, VAR_5, &VAR_3);
 } else if (VAR_8 || VAR_9)
  FUNC_1(VAR_11, "Unexpected FLASH access reports, please submit rdesc for review\n");
}
