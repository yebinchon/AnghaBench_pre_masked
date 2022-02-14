
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {struct nvkm_device* device; } ;
struct nvkm_mmu {TYPE_1__* func; TYPE_4__ subdev; } ;
struct nvkm_device {TYPE_3__* func; TYPE_2__* bar; } ;
struct TYPE_7__ {scalar_t__ cpu_coherent; } ;
struct TYPE_6__ {scalar_t__ iomap_uncached; } ;
struct TYPE_5__ {int kind_sys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvkm_mmu*,int ,unsigned long long) ;
 int FUNC_1 (struct nvkm_mmu*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_mmu *VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_5->subdev.device;
 u8 VAR_7 = VAR_2 * !!VAR_5->func->kind_sys;
 int VAR_8;


 VAR_8 = FUNC_0(VAR_5, VAR_1, ~0ULL);
 FUNC_1(VAR_5, VAR_8, VAR_7);







 VAR_7 |= VAR_3;
 if (!VAR_6->bar || VAR_6->bar->iomap_uncached)
  FUNC_1(VAR_5, VAR_8, VAR_7 & ~VAR_2);
 else
  FUNC_1(VAR_5, VAR_8, VAR_7);







 VAR_7 |= VAR_0;
 if (VAR_6->func->cpu_coherent)
  FUNC_1(VAR_5, VAR_8, VAR_7 & ~VAR_2);


 FUNC_1(VAR_5, VAR_8, VAR_7 |= VAR_4);
}
