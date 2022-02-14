
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_volt {scalar_t__ max_uv; } ;
struct nvkm_cstate {int id; int head; int * domain; int voltage; } ;
struct nvkm_pstate {int list; int pstate; struct nvkm_cstate base; } ;
struct nvkm_domain {scalar_t__ name; int flags; int bios; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_clk {struct nvkm_domain* domains; TYPE_2__ subdev; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_cstepX {int freq; int voltage; } ;
struct TYPE_3__ {struct nvkm_volt* volt; struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvkm_cstate* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct nvkm_bios*,int,int *,int *,struct nvbios_cstepX*) ;
 int FUNC_3 (struct nvkm_clk*,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct nvkm_volt*,int ) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_clk *VAR_6, int VAR_7, struct nvkm_pstate *VAR_8)
{
 struct nvkm_bios *VAR_9 = VAR_6->subdev.device->bios;
 struct nvkm_volt *VAR_10 = VAR_6->subdev.device->volt;
 const struct nvkm_domain *VAR_11 = VAR_6->domains;
 struct nvkm_cstate *VAR_12 = ((void*)0);
 struct nvbios_cstepX VAR_13;
 u8 VAR_14, VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_2(VAR_9, VAR_7, &VAR_14, &VAR_15, &VAR_13);
 if (!VAR_16)
  return -VAR_1;

 if (VAR_10 && FUNC_4(VAR_10, VAR_13.voltage) > VAR_10->max_uv)
  return -VAR_0;

 VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 *VAR_12 = VAR_8->base;
 VAR_12->voltage = VAR_13.voltage;
 VAR_12->id = VAR_7;

 while (VAR_11 && VAR_11->name != VAR_5) {
  if (VAR_11->flags & VAR_4) {
   u32 VAR_17 = FUNC_3(VAR_6, 1, VAR_8->pstate,
         VAR_11->bios, VAR_13.freq);
   VAR_12->domain[VAR_11->name] = VAR_17;
  }
  VAR_11++;
 }

 FUNC_1(&VAR_12->head, &VAR_8->list);
 return 0;
}
