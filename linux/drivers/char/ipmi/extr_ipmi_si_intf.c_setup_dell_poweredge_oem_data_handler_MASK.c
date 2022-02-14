
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_device_id {scalar_t__ manufacturer_id; scalar_t__ device_id; scalar_t__ device_revision; scalar_t__ ipmi_version; } ;
struct smi_info {void* oem_data_avail_handler; struct ipmi_device_id device_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipmi_device_id*) ;
 int FUNC_1 (struct ipmi_device_id*) ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct smi_info *VAR_5)
{
 struct ipmi_device_id *VAR_6 = &VAR_5->device_id;
 if (VAR_6->manufacturer_id == VAR_0) {
  if (VAR_6->device_id == VAR_1 &&
      VAR_6->device_revision == VAR_2 &&
      VAR_6->ipmi_version == VAR_3) {
   VAR_5->oem_data_avail_handler =
    VAR_4;
  } else if (FUNC_0(VAR_6) < 1 ||
      (FUNC_0(VAR_6) == 1 &&
       FUNC_1(VAR_6) < 5)) {
   VAR_5->oem_data_avail_handler =
    VAR_4;
  }
 }
}
