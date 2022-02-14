
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
 int FUNC_0 (char*,int) ;
 struct pk_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (char*,char*,int,int,int) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct hid_device *VAR_5 = FUNC_3(VAR_2);
 struct pk_device *VAR_6 = FUNC_1(VAR_5);

 FUNC_0("pcmidi sysfs read octave=%d\n", VAR_6->pm->midi_octave);

 return FUNC_2(VAR_4, "%d (min:%d, max:%d)\n", VAR_6->pm->midi_octave,
  VAR_1, VAR_0);
}
