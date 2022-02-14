
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_device {int cfgopt; int event; struct nvkm_bios* bios; } ;
struct nvkm_clk_func {int nr_pstates; TYPE_1__* pstates; int domains; } ;
struct nvkm_clk {int boost_khz; int base_khz; int ustate_ac; int ustate_dc; int allow_reclock; int state_nr; int boost_mode; int pwrsrc_ntfy; int states; int waiting; int wait; int work; int domains; struct nvkm_clk_func const* func; struct nvkm_subdev subdev; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vpstate_header {int base_id; int boost_id; } ;
struct nvbios_vpstate_entry {int clock_mhz; } ;
struct TYPE_2__ {int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nvkm_bios*,struct nvbios_vpstate_header*,int ,struct nvbios_vpstate_entry*) ;
 int FUNC_6 (struct nvkm_bios*,struct nvbios_vpstate_header*) ;
 int VAR_1 ;
 void* FUNC_7 (struct nvkm_clk*,char const*,int) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *,int *,int ,int,int *,int ,int ,int *) ;
 int FUNC_10 (struct nvkm_clk*,int ) ;
 int VAR_3 ;
 char* FUNC_11 (int ,char*,int*) ;
 int FUNC_12 (int *,struct nvkm_device*,int,struct nvkm_subdev*) ;

int
FUNC_13(const struct nvkm_clk_func *VAR_4, struct nvkm_device *VAR_5,
       int VAR_6, bool VAR_7, struct nvkm_clk *VAR_8)
{
 struct nvkm_subdev *VAR_9 = &VAR_8->subdev;
 struct nvkm_bios *VAR_10 = VAR_5->bios;
 int VAR_11, VAR_12, VAR_13;
 const char *VAR_14;
 struct nvbios_vpstate_header VAR_15;

 FUNC_12(&VAR_1, VAR_5, VAR_6, VAR_9);

 if (VAR_10 && !FUNC_6(VAR_10, &VAR_15)) {
  struct nvbios_vpstate_entry VAR_16, VAR_17;
  if (!FUNC_5(VAR_10, &VAR_15, VAR_15.boost_id, &VAR_17))
   VAR_8->boost_khz = VAR_17.clock_mhz * 1000;
  if (!FUNC_5(VAR_10, &VAR_15, VAR_15.base_id, &VAR_16))
   VAR_8->base_khz = VAR_16.clock_mhz * 1000;
 }

 VAR_8->func = VAR_4;
 FUNC_0(&VAR_8->states);
 VAR_8->domains = VAR_4->domains;
 VAR_8->ustate_ac = -1;
 VAR_8->ustate_dc = -1;
 VAR_8->allow_reclock = VAR_7;

 FUNC_1(&VAR_8->work, VAR_3);
 FUNC_3(&VAR_8->wait);
 FUNC_2(&VAR_8->waiting, 0);


 if (!VAR_4->pstates) {
  VAR_12 = 0;
  do {
   VAR_11 = FUNC_10(VAR_8, VAR_12++);
  } while (VAR_11 == 0);
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_4->nr_pstates; VAR_12++)
   FUNC_4(&VAR_4->pstates[VAR_12].head, &VAR_8->states);
  VAR_8->state_nr = VAR_4->nr_pstates;
 }

 VAR_11 = FUNC_9(((void*)0), &VAR_5->event, VAR_2, 1,
          ((void*)0), 0, 0, &VAR_8->pwrsrc_ntfy);
 if (VAR_11)
  return VAR_11;

 VAR_14 = FUNC_11(VAR_5->cfgopt, "NvClkMode", &VAR_13);
 if (VAR_14) {
  VAR_8->ustate_ac = FUNC_7(VAR_8, VAR_14, VAR_13);
  VAR_8->ustate_dc = FUNC_7(VAR_8, VAR_14, VAR_13);
 }

 VAR_14 = FUNC_11(VAR_5->cfgopt, "NvClkModeAC", &VAR_13);
 if (VAR_14)
  VAR_8->ustate_ac = FUNC_7(VAR_8, VAR_14, VAR_13);

 VAR_14 = FUNC_11(VAR_5->cfgopt, "NvClkModeDC", &VAR_13);
 if (VAR_14)
  VAR_8->ustate_dc = FUNC_7(VAR_8, VAR_14, VAR_13);

 VAR_8->boost_mode = FUNC_8(VAR_5->cfgopt, "NvBoost",
           VAR_0);
 return 0;
}
