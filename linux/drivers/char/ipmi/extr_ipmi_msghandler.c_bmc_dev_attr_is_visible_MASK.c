
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct ipmi_device_id {scalar_t__ aux_firmware_revision_set; } ;
struct device {int dummy; } ;
struct bmc_device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {struct attribute attr; } ;


 int FUNC_0 (int *,struct bmc_device*,struct ipmi_device_id*,int*,int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct device* FUNC_1 (struct kobject*) ;
 struct bmc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static umode_t FUNC_3(struct kobject *VAR_2,
           struct attribute *VAR_3, int VAR_4)
{
 struct device *VAR_5 = FUNC_1(VAR_2);
 struct bmc_device *VAR_6 = FUNC_2(VAR_5);
 umode_t VAR_7 = VAR_3->mode;
 int VAR_8;

 if (VAR_3 == &VAR_0.attr) {
  struct ipmi_device_id VAR_9;

  VAR_8 = FUNC_0(((void*)0), VAR_6, &VAR_9, ((void*)0), ((void*)0));
  return (!VAR_8 && VAR_9.aux_firmware_revision_set) ? VAR_7 : 0;
 }
 if (VAR_3 == &VAR_1.attr) {
  bool VAR_10;

  VAR_8 = FUNC_0(((void*)0), VAR_6, ((void*)0), &VAR_10, ((void*)0));
  return (!VAR_8 && VAR_10) ? VAR_7 : 0;
 }
 return VAR_7;
}
