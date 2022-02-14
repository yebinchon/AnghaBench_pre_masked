
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
struct TYPE_2__ {int midi_octave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct pk_device* FUNC_1 (struct hid_device*) ;
 scalar_t__ FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char const*) ;
 struct hid_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
 struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct hid_device *VAR_7 = FUNC_4(VAR_3);
 struct pk_device *VAR_8 = FUNC_1(VAR_7);

 int VAR_9 = 0;

 if (FUNC_2(VAR_5, "%d", &VAR_9) > 0 &&
  VAR_9 >= VAR_2 && VAR_9 <= VAR_1) {
  FUNC_0("pcmidi sysfs write octave=%d\n", VAR_9);
  VAR_8->pm->midi_octave = VAR_9;
  return FUNC_3(VAR_5);
 }
 return -VAR_0;
}
