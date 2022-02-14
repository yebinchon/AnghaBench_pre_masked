
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {scalar_t__ card_type; int chipset; } ;
struct nv10_gr_chan {void** nv17; void** nv10; struct nv10_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct nv10_gr_chan*) ;
 int * VAR_4 ;
 int FUNC_2 (struct nvkm_device*,int ,int,int) ;
 void* FUNC_3 (struct nvkm_device*,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct nv10_gr_chan *VAR_5)
{
 struct nv10_gr *VAR_6 = VAR_5->gr;
 struct nvkm_device *VAR_7 = VAR_6->base.engine.subdev.device;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
  VAR_5->nv10[VAR_8] = FUNC_3(VAR_7, VAR_3[VAR_8]);

 if (VAR_7->card_type >= VAR_2 && VAR_7->chipset >= 0x17) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
   VAR_5->nv17[VAR_8] = FUNC_3(VAR_7, VAR_4[VAR_8]);
 }

 FUNC_1(VAR_5);

 FUNC_4(VAR_7, VAR_0, 0x10000000);
 FUNC_2(VAR_7, VAR_1, 0xff000000, 0x1f000000);
 return 0;
}
