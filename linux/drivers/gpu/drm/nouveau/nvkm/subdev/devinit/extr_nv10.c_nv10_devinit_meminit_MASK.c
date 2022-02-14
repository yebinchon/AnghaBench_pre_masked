
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;
struct io_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (struct nvkm_device*) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 int FUNC_4 (struct nvkm_subdev*,char*) ;
 int FUNC_5 (struct nvkm_device*,int ,int,int const) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct nvkm_devinit *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_4->subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 static const int VAR_7[] = { 0x10, 0x00, 0x20 };
 int VAR_8;
 uint32_t VAR_9 = 0xdeadbeef;
 struct io_mapping *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_6->card_type >= VAR_3 && VAR_6->chipset >= 0x17)
  VAR_8 = 3;
 else
  VAR_8 = 2;


 VAR_10 = FUNC_1(VAR_6);
 if (!VAR_10) {
  FUNC_4(VAR_5, "failed to map fb\n");
  return;
 }

 FUNC_7(VAR_6, VAR_1, VAR_2);


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  FUNC_5(VAR_6, VAR_0, 0x30, VAR_7[VAR_11]);

  for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
   for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
    FUNC_3(VAR_10, 0x1c, 0);

   FUNC_3(VAR_10, 0x1c, VAR_9);
   FUNC_3(VAR_10, 0x3c, 0);

   if (FUNC_2(VAR_10, 0x1c) == VAR_9)
    goto mem_width_found;
  }
 }

mem_width_found:
 VAR_9 <<= 1;


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  int VAR_14 = FUNC_6(VAR_6, 0x10020c) - 0x100000;

  FUNC_3(VAR_10, VAR_14, VAR_9);
  FUNC_3(VAR_10, 0, 0);

  FUNC_2(VAR_10, 0);
  FUNC_2(VAR_10, 0);
  FUNC_2(VAR_10, 0);
  FUNC_2(VAR_10, 0);

  if (FUNC_2(VAR_10, VAR_14) == VAR_9)
   goto amount_found;
 }


 FUNC_5(VAR_6, VAR_0, 0x1000, 0);

amount_found:
 FUNC_0(VAR_10);
}
