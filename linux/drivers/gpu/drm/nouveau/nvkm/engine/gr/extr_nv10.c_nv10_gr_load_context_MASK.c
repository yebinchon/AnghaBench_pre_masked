
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {scalar_t__ card_type; int chipset; } ;
struct nv10_gr_chan {int* nv10; int* nv17; struct nv10_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct nv10_gr_chan*,int,int) ;
 int FUNC_2 (struct nv10_gr_chan*) ;
 int * VAR_6 ;
 int FUNC_3 (struct nvkm_device*,int ,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ) ;
 int FUNC_5 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct nv10_gr_chan *VAR_7, int VAR_8)
{
 struct nv10_gr *VAR_9 = VAR_7->gr;
 struct nvkm_device *VAR_10 = VAR_9->base.engine.subdev.device;
 u32 VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5); VAR_12++)
  FUNC_5(VAR_10, VAR_5[VAR_12], VAR_7->nv10[VAR_12]);

 if (VAR_10->card_type >= VAR_4 && VAR_10->chipset >= 0x17) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++)
   FUNC_5(VAR_10, VAR_6[VAR_12], VAR_7->nv17[VAR_12]);
 }

 FUNC_2(VAR_7);

 VAR_11 = FUNC_4(VAR_10, VAR_3) & 0xffff;
 FUNC_1(VAR_7, VAR_8, VAR_11);

 FUNC_5(VAR_10, VAR_0, 0x10010100);
 FUNC_3(VAR_10, VAR_1, 0xff000000, VAR_8 << 24);
 FUNC_3(VAR_10, VAR_2, 0x30000000, 0x00000000);
 return 0;
}
