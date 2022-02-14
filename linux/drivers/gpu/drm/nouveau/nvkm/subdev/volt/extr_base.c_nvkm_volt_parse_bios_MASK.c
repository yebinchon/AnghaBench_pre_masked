
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_volt {int min_uv; int max_uv; size_t vid_nr; int vid_mask; TYPE_1__* vid; } ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_volt_entry {scalar_t__ voltage; int vid; } ;
struct nvbios_volt {int vidmask; scalar_t__ base; scalar_t__ step; int min; int max; scalar_t__ type; int pwm_range; scalar_t__ ranged; } ;
struct TYPE_2__ {scalar_t__ uv; int vid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,int,int*,int*,struct nvbios_volt_entry*) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int*,int*,int*,int*,struct nvbios_volt*) ;
 int FUNC_4 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_bios *VAR_1, struct nvkm_volt *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 struct nvbios_volt_entry VAR_4;
 struct nvbios_volt VAR_5;
 u8 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_1, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_5);
 if (VAR_10 && VAR_5.vidmask && VAR_5.base && VAR_5.step && VAR_5.ranged) {
  FUNC_4(VAR_3, "found ranged based VIDs\n");
  VAR_2->min_uv = VAR_5.min;
  VAR_2->max_uv = VAR_5.max;
  for (VAR_11 = 0; VAR_11 < VAR_5.vidmask + 1; VAR_11++) {
   if (VAR_5.base >= VAR_5.min &&
    VAR_5.base <= VAR_5.max) {
    VAR_2->vid[VAR_2->vid_nr].uv = VAR_5.base;
    VAR_2->vid[VAR_2->vid_nr].vid = VAR_11;
    VAR_2->vid_nr++;
   }
   VAR_5.base += VAR_5.step;
  }
  VAR_2->vid_mask = VAR_5.vidmask;
 } else if (VAR_10 && VAR_5.vidmask && !VAR_5.ranged) {
  FUNC_4(VAR_3, "found entry based VIDs\n");
  VAR_2->min_uv = 0xffffffff;
  VAR_2->max_uv = 0;
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_10 = FUNC_2(VAR_1, VAR_11, &VAR_6, &VAR_7,
             &VAR_4);
   if (VAR_10) {
    VAR_2->vid[VAR_2->vid_nr].uv = VAR_4.voltage;
    VAR_2->vid[VAR_2->vid_nr].vid = VAR_4.vid;
    VAR_2->vid_nr++;
    VAR_2->min_uv = FUNC_1(VAR_2->min_uv, VAR_4.voltage);
    VAR_2->max_uv = FUNC_0(VAR_2->max_uv, VAR_4.voltage);
   }
  }
  VAR_2->vid_mask = VAR_5.vidmask;
 } else if (VAR_10 && VAR_5.type == VAR_0) {
  VAR_2->min_uv = VAR_5.base;
  VAR_2->max_uv = VAR_5.base + VAR_5.pwm_range;
 }
}
