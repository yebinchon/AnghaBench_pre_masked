
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pk_device {TYPE_1__* pm; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int midi_channel; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 struct pk_device* FUNC_1 (struct hid_device*) ;
 scalar_t__ FUNC_2 (char const*,char*,unsigned int*) ;
 int FUNC_3 (char const*) ;
 struct hid_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct hid_device *VAR_6 = FUNC_4(VAR_2);
 struct pk_device *VAR_7 = FUNC_1(VAR_6);

 unsigned VAR_8 = 0;

 if (FUNC_2(VAR_4, "%u", &VAR_8) > 0 && VAR_8 <= VAR_1) {
  FUNC_0("pcmidi sysfs write channel=%u\n", VAR_8);
  VAR_7->pm->midi_channel = VAR_8;
  return FUNC_3(VAR_4);
 }
 return -VAR_0;
}
