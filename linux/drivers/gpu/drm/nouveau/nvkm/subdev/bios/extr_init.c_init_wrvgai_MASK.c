
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvkm_device {scalar_t__ card_type; } ;
struct nvbios_init {int head; TYPE_1__* subdev; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvbios_init *VAR_1, u16 VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_1->subdev->device;


 if (VAR_5->card_type < VAR_0) {
  if (VAR_2 == 0x03d4 && VAR_3 == 0x44)
   VAR_1->head = 0;
 }

 if (FUNC_0(VAR_1)) {
  int VAR_6 = VAR_1->head < 0 ? 0 : VAR_1->head;
  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_3, VAR_4);
 }


 if (VAR_5->card_type < VAR_0) {
  if (VAR_2 == 0x03d4 && VAR_3 == 0x44 && VAR_4 == 3)
   VAR_1->head = 1;
 }
}
