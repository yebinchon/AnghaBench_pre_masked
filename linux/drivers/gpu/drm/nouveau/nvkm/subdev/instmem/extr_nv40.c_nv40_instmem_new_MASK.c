
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_instmem {int subdev; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct nv40_instmem {struct nvkm_instmem base; int iomem; } ;
struct TYPE_2__ {int (* resource_size ) (struct nvkm_device*,int) ;int (* resource_addr ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct nv40_instmem* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct nvkm_device*,int,struct nvkm_instmem*) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (struct nvkm_device*,int) ;

int
FUNC_7(struct nvkm_device *VAR_4, int VAR_5,
   struct nvkm_instmem **VAR_6)
{
 struct nv40_instmem *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2)))
  return -VAR_1;
 FUNC_3(&VAR_3, VAR_4, VAR_5, &VAR_7->base);
 *VAR_6 = &VAR_7->base;


 if (VAR_4->func->resource_size(VAR_4, 2))
  VAR_8 = 2;
 else
  VAR_8 = 3;

 VAR_7->iomem = FUNC_0(VAR_4->func->resource_addr(VAR_4, VAR_8),
     VAR_4->func->resource_size(VAR_4, VAR_8));
 if (!VAR_7->iomem) {
  FUNC_2(&VAR_7->base.subdev, "unable to map PRAMIN BAR\n");
  return -VAR_0;
 }

 return 0;
}
