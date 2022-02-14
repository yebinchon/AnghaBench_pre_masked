
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct nvkm_bios {void* imaged_addr; } ;
struct nvbios_image {scalar_t__ last; scalar_t__ size; int base; } ;


 int FUNC_0 (struct nvbios_image*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,struct nvbios_image*) ;

bool
FUNC_2(struct nvkm_bios *VAR_0, int VAR_1, struct nvbios_image *VAR_2)
{
 u32 VAR_3 = VAR_0->imaged_addr;
 FUNC_0(VAR_2, 0x00, sizeof(*VAR_2));
 VAR_0->imaged_addr = 0;
 do {
  VAR_2->base += VAR_2->size;
  if (VAR_2->last || !FUNC_1(VAR_0, VAR_2)) {
   VAR_0->imaged_addr = VAR_3;
   return 0;
  }
 } while(VAR_1--);
 VAR_0->imaged_addr = VAR_3;
 return 1;
}
