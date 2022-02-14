
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {TYPE_2__* device; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_pmuR {int init_addr_pmu; int args_addr_pmu; int data_size; int data_addr; int data_addr_pmu; int code_size; int code_addr; int code_addr_pmu; int boot_size; int boot_addr; int boot_addr_pmu; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct nv50_devinit {TYPE_1__ base; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ,struct nvbios_pmuR*) ;
 int FUNC_1 (struct nv50_devinit*,int ,int ,int ,int) ;
 int FUNC_2 (struct nv50_devinit*,int ,int ,int ) ;
 int FUNC_3 (struct nv50_devinit*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nv50_devinit *VAR_1, u8 VAR_2, bool VAR_3,
  u32 *VAR_4, u32 *VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_1->base.subdev;
 struct nvkm_bios *VAR_7 = VAR_6->device->bios;
 struct nvbios_pmuR VAR_8;

 if (!FUNC_0(VAR_7, VAR_2, &VAR_8))
  return -VAR_0;

 if (!VAR_3)
  return 0;

 FUNC_1(VAR_1, VAR_8.boot_addr_pmu, VAR_8.boot_addr, VAR_8.boot_size, 0);
 FUNC_1(VAR_1, VAR_8.code_addr_pmu, VAR_8.code_addr, VAR_8.code_size, 1);
 FUNC_2(VAR_1, VAR_8.data_addr_pmu, VAR_8.data_addr, VAR_8.data_size);

 if (VAR_4) {
  *VAR_4 = VAR_8.init_addr_pmu;
  *VAR_5 = VAR_8.args_addr_pmu;
  return 0;
 }

 return FUNC_3(VAR_1, VAR_8.init_addr_pmu), 0;
}
