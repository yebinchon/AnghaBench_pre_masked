
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * elements; } ;
union acpi_object {scalar_t__ type; TYPE_1__ package; } ;
struct soc_button_info {int acpi_index; char* name; int wakeup; int autorepeat; int event_code; int event_type; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_10,
         const union acpi_object *VAR_11,
         int VAR_12,
         struct soc_button_info *VAR_13)
{
 int VAR_14, VAR_15;

 if (VAR_11->type != VAR_0 ||
     VAR_11->package.count != 5 ||

     FUNC_2(&VAR_11->package.elements[0]) != 1 ||

     FUNC_2(&VAR_11->package.elements[2]) !=
           VAR_12) {
  FUNC_0(VAR_10, "Invalid ACPI Button Descriptor\n");
  return -VAR_1;
 }

 VAR_13->event_type = VAR_2;
 VAR_13->acpi_index =
  FUNC_2(&VAR_11->package.elements[1]);
 VAR_14 = FUNC_2(&VAR_11->package.elements[3]);
 VAR_15 = FUNC_2(&VAR_11->package.elements[4]);
 if (VAR_14 == 0x01 && VAR_15 == 0x81) {
  VAR_13->name = "power";
  VAR_13->event_code = VAR_5;
  VAR_13->wakeup = 1;
 } else if (VAR_14 == 0x01 && VAR_15 == 0xca) {
  VAR_13->name = "rotation lock switch";
  VAR_13->event_type = VAR_3;
  VAR_13->event_code = VAR_9;
 } else if (VAR_14 == 0x07 && VAR_15 == 0xe3) {
  VAR_13->name = "home";
  VAR_13->event_code = VAR_4;
  VAR_13->wakeup = 1;
 } else if (VAR_14 == 0x0c && VAR_15 == 0xe9) {
  VAR_13->name = "volume_up";
  VAR_13->event_code = VAR_8;
  VAR_13->autorepeat = 1;
 } else if (VAR_14 == 0x0c && VAR_15 == 0xea) {
  VAR_13->name = "volume_down";
  VAR_13->event_code = VAR_7;
  VAR_13->autorepeat = 1;
 } else {
  FUNC_1(VAR_10, "Unknown button index %d upage %02x usage %02x, ignoring\n",
    VAR_13->acpi_index, VAR_14, VAR_15);
  VAR_13->name = "unknown";
  VAR_13->event_code = VAR_6;
 }

 return 0;
}
