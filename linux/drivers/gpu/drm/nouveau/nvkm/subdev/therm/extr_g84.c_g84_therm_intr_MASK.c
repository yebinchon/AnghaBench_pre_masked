
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int alarm_program_lock; } ;
struct nvbios_therm_sensor {int thrs_critical; int thrs_fan_boost; int thrs_shutdown; int thrs_down_clock; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ sensor; struct nvbios_therm_sensor bios_sensor; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_therm*,int,int,int *,int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_therm *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_4->subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 struct nvbios_therm_sensor *VAR_7 = &VAR_4->bios_sensor;
 unsigned long VAR_8;
 uint32_t VAR_9;

 FUNC_4(&VAR_4->sensor.alarm_program_lock, VAR_8);

 VAR_9 = FUNC_2(VAR_6, 0x20100) & 0x3ff;


 if (VAR_9 & 0x002) {
  FUNC_0(VAR_4, 0x20414, 24,
         &VAR_7->thrs_down_clock,
         VAR_1);
  VAR_9 &= ~0x002;
 }


 if (VAR_9 & 0x004) {
  FUNC_0(VAR_4, 0x20480, 20,
         &VAR_7->thrs_shutdown,
         VAR_3);
  VAR_9 &= ~0x004;
 }


 if (VAR_9 & 0x008) {
  FUNC_0(VAR_4, 0x204c4, 21,
         &VAR_7->thrs_fan_boost,
         VAR_2);
  VAR_9 &= ~0x008;
 }


 if (VAR_9 & 0x010) {
  FUNC_0(VAR_4, 0x204c0, 22,
         &VAR_7->thrs_critical,
         VAR_0);
  VAR_9 &= ~0x010;
 }

 if (VAR_9)
  FUNC_1(VAR_5, "intr %08x\n", VAR_9);


 FUNC_3(VAR_6, 0x20100, 0xffffffff);
 FUNC_3(VAR_6, 0x1100, 0x10000);

 FUNC_5(&VAR_4->sensor.alarm_program_lock, VAR_8);
}
