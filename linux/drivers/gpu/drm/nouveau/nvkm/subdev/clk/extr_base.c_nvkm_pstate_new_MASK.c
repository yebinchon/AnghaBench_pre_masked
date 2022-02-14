
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_cstate {int * domain; int voltage; } ;
struct nvkm_pstate {int head; int pstate; int pcie_width; int pcie_speed; int fanspeed; int list; struct nvkm_cstate base; } ;
struct nvkm_domain {scalar_t__ name; int flags; int bios; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct nvkm_clk {int state_nr; int states; struct nvkm_domain* domains; TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_6__ {int freq; } ;
struct nvbios_perfS {TYPE_3__ v40; } ;
struct nvbios_perfE {int pstate; int disp; int vdec; int memory; int shader; int core; int voltage; int pcie_width; int pcie_speed; int fanspeed; } ;
struct nvbios_cstepE {int index; } ;
struct TYPE_4__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct nvkm_pstate* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int ,int*,int*,struct nvbios_cstepE*) ;
 scalar_t__ FUNC_4 (struct nvkm_bios*,int,int*,int*,int*,int*,struct nvbios_perfE*) ;
 scalar_t__ FUNC_5 (struct nvkm_bios*,scalar_t__,int ,int*,int*,int,int,struct nvbios_perfS*) ;
 int FUNC_6 (struct nvkm_clk*,int,int ,int ,int ) ;
 int FUNC_7 (struct nvkm_clk*,int,struct nvkm_pstate*) ;
 int FUNC_8 (struct nvkm_clk*,struct nvkm_pstate*) ;

__attribute__((used)) static int
FUNC_9(struct nvkm_clk *VAR_10, int VAR_11)
{
 struct nvkm_bios *VAR_12 = VAR_10->subdev.device->bios;
 const struct nvkm_domain *VAR_13 = VAR_10->domains - 1;
 struct nvkm_pstate *VAR_14;
 struct nvkm_cstate *VAR_15;
 struct nvbios_cstepE VAR_16;
 struct nvbios_perfE VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 VAR_22 = FUNC_4(VAR_12, VAR_11, &VAR_18, &VAR_19, &VAR_20, &VAR_21, &VAR_17);
 if (!VAR_22)
  return -VAR_0;
 if (VAR_17.pstate == 0xff)
  return 0;

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_2);
 VAR_15 = &VAR_14->base;
 if (!VAR_14)
  return -VAR_1;

 FUNC_0(&VAR_14->list);

 VAR_14->pstate = VAR_17.pstate;
 VAR_14->fanspeed = VAR_17.fanspeed;
 VAR_14->pcie_speed = VAR_17.pcie_speed;
 VAR_14->pcie_width = VAR_17.pcie_width;
 VAR_15->voltage = VAR_17.voltage;
 VAR_15->domain[VAR_4] = VAR_17.core;
 VAR_15->domain[VAR_8] = VAR_17.shader;
 VAR_15->domain[VAR_7] = VAR_17.memory;
 VAR_15->domain[VAR_9] = VAR_17.vdec;
 VAR_15->domain[VAR_5] = VAR_17.disp;

 while (VAR_18 >= 0x40 && (++VAR_13)->name != VAR_6) {
  struct nvbios_perfS VAR_23;
  u8 VAR_24 = VAR_18, VAR_25 = VAR_19;
  u32 VAR_26 = FUNC_5(VAR_12, VAR_22, VAR_13->bios,
       &VAR_24, &VAR_25, VAR_20, VAR_21, &VAR_23);
  if (VAR_26 == 0 || VAR_24 != 0x40)
   continue;

  if (VAR_13->flags & VAR_3) {
   VAR_23.v40.freq = FUNC_6(VAR_10, 0,
        VAR_14->pstate,
        VAR_13->bios,
        VAR_23.v40.freq);
  }

  VAR_15->domain[VAR_13->name] = VAR_23.v40.freq;
 }

 VAR_22 = FUNC_3(VAR_12, VAR_14->pstate, &VAR_18, &VAR_19, &VAR_16);
 if (VAR_22) {
  int VAR_27 = VAR_16.index;
  do {
   FUNC_7(VAR_10, VAR_27, VAR_14);
  } while(VAR_27--);
 }

 FUNC_8(VAR_10, VAR_14);
 FUNC_2(&VAR_14->head, &VAR_10->states);
 VAR_10->state_nr++;
 return 0;
}
