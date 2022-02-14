
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {scalar_t__ offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvbios_init*,int,int,int) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nvbios_init*,int,int) ;
 int FUNC_4 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_5 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_6 (char*,int,int,int,int,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_7(struct nvbios_init *VAR_0)
{
 struct nvkm_bios *VAR_1 = VAR_0->subdev->device->bios;
 u32 VAR_2 = FUNC_5(VAR_1, VAR_0->offset + 1);
 u8 VAR_3 = FUNC_4(VAR_1, VAR_0->offset + 5);
 u8 VAR_4 = FUNC_4(VAR_1, VAR_0->offset + 6);
 u8 VAR_5 = FUNC_4(VAR_1, VAR_0->offset + 7);
 u32 VAR_6 = FUNC_5(VAR_1, VAR_0->offset + 8);
 u32 VAR_7 = FUNC_5(VAR_1, VAR_0->offset + 12);
 u8 VAR_8 = FUNC_4(VAR_1, VAR_0->offset + 16);
 u32 VAR_9;

 FUNC_6("INIT_XLAT\tR[0x%06x] &= 0x%08x |= "
       "(X%02x((R[0x%06x] %s 0x%02x) & 0x%02x) << 0x%02x)\n",
       VAR_6, VAR_7, VAR_5, VAR_2, (VAR_3 & 0x80) ? "<<" : ">>",
       (VAR_3 & 0x80) ? (0x100 - VAR_3) : VAR_3, VAR_4, VAR_8);
 VAR_0->offset += 17;

 VAR_9 = FUNC_2(FUNC_1(VAR_0, VAR_2), VAR_3) & VAR_4;
 VAR_9 = FUNC_3(VAR_0, VAR_5, VAR_9) << VAR_8;
 FUNC_0(VAR_0, VAR_6, ~VAR_7, VAR_9);
}
