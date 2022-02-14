
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct shadow {TYPE_1__* func; int data; } ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {int * data; struct nvkm_subdev subdev; } ;
struct nvbios_image {int base; int type; int size; int last; } ;
struct TYPE_2__ {int (* size ) (int ) ;int rw; int require_checksum; int ignore_checksum; scalar_t__ no_pcir; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nvkm_bios*,int,struct nvbios_image*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_3 (struct nvkm_bios*,struct shadow*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_bios *VAR_0, int VAR_1, u32 VAR_2, struct shadow *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_0->subdev;
 struct nvbios_image VAR_5;
 int VAR_6 = 1;

 if (VAR_3->func->no_pcir) {
  VAR_5.base = 0;
  VAR_5.type = 0;
  VAR_5.size = VAR_3->func->size(VAR_3->data);
  VAR_5.last = 1;
 } else {
  if (!FUNC_3(VAR_0, VAR_3, VAR_2 + 0x1000)) {
   FUNC_2(VAR_4, "%08x: header fetch failed\n",
       VAR_2);
   return 0;
  }

  if (!FUNC_1(VAR_0, VAR_1, &VAR_5)) {
   FUNC_2(VAR_4, "image %d invalid\n", VAR_1);
   return 0;
  }
 }
 FUNC_2(VAR_4, "%08x: type %02x, %d bytes\n",
     VAR_5.base, VAR_5.type, VAR_5.size);

 if (!FUNC_3(VAR_0, VAR_3, VAR_5.size)) {
  FUNC_2(VAR_4, "%08x: fetch failed\n", VAR_5.base);
  return 0;
 }

 switch (VAR_5.type) {
 case 0x00:
  if (!VAR_3->func->ignore_checksum &&
      FUNC_0(&VAR_0->data[VAR_5.base], VAR_5.size)) {
   FUNC_2(VAR_4, "%08x: checksum failed\n",
       VAR_5.base);
   if (!VAR_3->func->require_checksum) {
    if (VAR_3->func->rw)
     VAR_6 += 1;
    VAR_6 += 1;
   } else
    return 0;
  } else {
   VAR_6 += 3;
  }
  break;
 default:
  VAR_6 += 3;
  break;
 }

 if (!VAR_5.last)
  VAR_6 += FUNC_5(VAR_0, VAR_1 + 1, VAR_2 + VAR_5.size, VAR_3);
 return VAR_6;
}
