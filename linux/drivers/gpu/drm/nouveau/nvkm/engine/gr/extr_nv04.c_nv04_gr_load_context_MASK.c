
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct nv04_gr_chan {int* nv04; TYPE_4__* gr; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct TYPE_8__ {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nv04_gr_chan *VAR_4, int VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_4->gr->base.engine.subdev.device;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++)
  FUNC_2(VAR_6, VAR_3[VAR_7], VAR_4->nv04[VAR_7]);

 FUNC_2(VAR_6, VAR_0, 0x10010100);
 FUNC_1(VAR_6, VAR_1, 0xff000000, VAR_5 << 24);
 FUNC_1(VAR_6, VAR_2, 0xfff00000, 0x00000000);
 return 0;
}
