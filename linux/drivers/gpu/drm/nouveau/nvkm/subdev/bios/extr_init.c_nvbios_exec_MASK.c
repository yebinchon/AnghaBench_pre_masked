
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_init {int nested; int offset; TYPE_2__* subdev; } ;
struct TYPE_7__ {int (* exec ) (struct nvbios_init*) ;} ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {struct nvkm_bios* bios; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t) ;
 TYPE_3__* VAR_1 ;
 size_t FUNC_2 (struct nvkm_bios*,int ) ;
 int FUNC_3 (struct nvbios_init*) ;

int
FUNC_4(struct nvbios_init *VAR_2)
{
 struct nvkm_bios *VAR_3 = VAR_2->subdev->device->bios;

 VAR_2->nested++;
 while (VAR_2->offset) {
  u8 VAR_4 = FUNC_2(VAR_3, VAR_2->offset);
  if (VAR_4 >= FUNC_0(VAR_1) ||
      !VAR_1[VAR_4].exec) {
   FUNC_1("unknown opcode 0x%02x\n", VAR_4);
   return -VAR_0;
  }

  VAR_1[VAR_4].exec(VAR_2);
 }
 VAR_2->nested--;
 return 0;
}
