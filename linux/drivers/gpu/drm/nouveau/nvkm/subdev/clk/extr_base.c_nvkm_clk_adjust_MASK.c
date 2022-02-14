
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_clk {TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_boostS {scalar_t__ domain; int percent; int max; int min; } ;
struct nvbios_boostE {int max; int min; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,struct nvbios_boostE*) ;
 int FUNC_3 (struct nvkm_bios*,int ,int,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,struct nvbios_boostS*) ;

__attribute__((used)) static u32
FUNC_4(struct nvkm_clk *VAR_0, bool VAR_1,
  u8 VAR_2, u8 VAR_3, u32 VAR_4)
{
 struct nvkm_bios *VAR_5 = VAR_0->subdev.device->bios;
 struct nvbios_boostE VAR_6;
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_2(VAR_5, VAR_2, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_6);
 if (VAR_11) {
  struct nvbios_boostS VAR_12;
  u8 VAR_13 = 0, VAR_14, VAR_15;
  u32 VAR_16;

  VAR_4 = FUNC_0(VAR_6.min, VAR_4);
  VAR_4 = FUNC_1(VAR_6.max, VAR_4);
  do {
   VAR_14 = VAR_7;
   VAR_15 = VAR_8;
   VAR_16 = FUNC_3(VAR_5, VAR_13++, VAR_11, &VAR_14, &VAR_15,
           VAR_9, VAR_10, &VAR_12);
   if (VAR_16 && VAR_12.domain == VAR_3) {
    if (VAR_1)
     VAR_4 = VAR_4 * VAR_12.percent / 100;
    VAR_4 = FUNC_0(VAR_12.min, VAR_4);
    VAR_4 = FUNC_1(VAR_12.max, VAR_4);
    break;
   }
  } while (VAR_16);
 }

 return VAR_4;
}
