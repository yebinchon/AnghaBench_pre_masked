
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_2__ {void* patch; void* micro; void* minor; void* chip; void* major; } ;
struct nvkm_bios {TYPE_1__ version; int subdev; void* bmp_offset; void* bit_offset; int size; int data; int imaged_addr; int image0_size; } ;
struct nvbios_image {int type; int base; int size; } ;
struct bit_entry {int length; void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_bios*) ;
 struct nvkm_bios* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (struct nvkm_bios*,int ,struct nvbios_image*) ;
 void* FUNC_5 (struct nvkm_bios*,void*) ;
 int FUNC_6 (struct nvkm_bios*) ;
 int VAR_2 ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*,void*,void*,void*,void*,void*) ;
 int FUNC_9 (int *,struct nvkm_device*,int,int *) ;

int
FUNC_10(struct nvkm_device *VAR_3, int VAR_4, struct nvkm_bios **VAR_5)
{
 struct nvkm_bios *VAR_6;
 struct nvbios_image VAR_7;
 struct bit_entry VAR_8;
 int VAR_9, VAR_10 = 0;

 if (!(VAR_6 = *VAR_5 = FUNC_2(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 FUNC_9(&VAR_2, VAR_3, VAR_4, &VAR_6->subdev);

 VAR_9 = FUNC_6(VAR_6);
 if (VAR_9)
  return VAR_9;




 if (FUNC_4(VAR_6, VAR_10++, &VAR_7)) {
  VAR_6->image0_size = VAR_7.size;
  while (FUNC_4(VAR_6, VAR_10++, &VAR_7)) {
   if (VAR_7.type == 0xe0) {
    VAR_6->imaged_addr = VAR_7.base;
    break;
   }
  }
 }


 VAR_6->bmp_offset = FUNC_3(VAR_6->data, VAR_6->size,
       "\xff\x7f""NV\0", 5);
 if (VAR_6->bmp_offset) {
  FUNC_7(&VAR_6->subdev, "BMP version %x.%x\n",
      FUNC_1(VAR_6) >> 8,
      FUNC_1(VAR_6) & 0xff);
 }

 VAR_6->bit_offset = FUNC_3(VAR_6->data, VAR_6->size,
       "\xff\xb8""BIT", 5);
 if (VAR_6->bit_offset)
  FUNC_7(&VAR_6->subdev, "BIT signature found\n");


 if (!FUNC_0(VAR_6, 'i', &VAR_8) && VAR_8.length >= 4) {
  VAR_6->version.major = FUNC_5(VAR_6, VAR_8.offset + 3);
  VAR_6->version.chip = FUNC_5(VAR_6, VAR_8.offset + 2);
  VAR_6->version.minor = FUNC_5(VAR_6, VAR_8.offset + 1);
  VAR_6->version.micro = FUNC_5(VAR_6, VAR_8.offset + 0);
  VAR_6->version.patch = FUNC_5(VAR_6, VAR_8.offset + 4);
 } else
 if (FUNC_1(VAR_6)) {
  VAR_6->version.major = FUNC_5(VAR_6, VAR_6->bmp_offset + 13);
  VAR_6->version.chip = FUNC_5(VAR_6, VAR_6->bmp_offset + 12);
  VAR_6->version.minor = FUNC_5(VAR_6, VAR_6->bmp_offset + 11);
  VAR_6->version.micro = FUNC_5(VAR_6, VAR_6->bmp_offset + 10);
 }

 FUNC_8(&VAR_6->subdev, "version %02x.%02x.%02x.%02x.%02x\n",
    VAR_6->version.major, VAR_6->version.chip,
    VAR_6->version.minor, VAR_6->version.micro, VAR_6->version.patch);
 return 0;
}
