
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwr_rail_t {int mode; int resistor_count; scalar_t__ config; int extdev_id; struct pwr_rail_resistor_t* resistors; } ;
struct pwr_rail_resistor_t {scalar_t__ mohm; int enabled; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_iccsense_sensor {scalar_t__ config; int type; } ;
struct nvkm_iccsense_rail {int (* read ) (struct nvkm_iccsense*,struct nvkm_iccsense_rail*) ;int idx; int head; scalar_t__ mohm; struct nvkm_iccsense_sensor* sensor; } ;
struct nvkm_iccsense {int data_valid; int rails; int power_w_crit; int power_w_max; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_power_budget_entry {int max_w; int avg_w; } ;
struct nvbios_power_budget {int cap_entry; } ;
struct nvbios_iccsense {int nr_entry; struct pwr_rail_t* rail; } ;
struct TYPE_2__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct nvkm_iccsense_rail* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,struct nvbios_iccsense*) ;
 int FUNC_3 (struct nvkm_bios*,struct nvbios_power_budget*,int,struct nvbios_power_budget_entry*) ;
 int FUNC_4 (struct nvkm_bios*,struct nvbios_power_budget*) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int ,int,scalar_t__) ;
 int FUNC_6 (struct nvkm_subdev*,char*,int ) ;
 struct nvkm_iccsense* FUNC_7 (struct nvkm_subdev*) ;
 struct nvkm_iccsense_sensor* FUNC_8 (struct nvkm_iccsense*,int ) ;
 int FUNC_9 (struct nvkm_iccsense*,struct nvkm_iccsense_rail*) ;
 int FUNC_10 (struct nvkm_iccsense*,struct nvkm_iccsense_rail*) ;
 int FUNC_11 (struct nvkm_iccsense*,struct nvkm_iccsense_rail*) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_subdev *VAR_2)
{
 struct nvkm_iccsense *VAR_3 = FUNC_7(VAR_2);
 struct nvkm_bios *VAR_4 = VAR_2->device->bios;
 struct nvbios_power_budget VAR_5;
 struct nvbios_iccsense VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_4)
  return 0;

 VAR_8 = FUNC_4(VAR_4, &VAR_5);
 if (!VAR_8 && VAR_5.cap_entry != 0xff) {
  struct nvbios_power_budget_entry VAR_9;
  VAR_8 = FUNC_3(VAR_4, &VAR_5,
                                  VAR_5.cap_entry, &VAR_9);
  if (!VAR_8) {
   VAR_3->power_w_max = VAR_9.avg_w;
   VAR_3->power_w_crit = VAR_9.max_w;
  }
 }

 if (FUNC_2(VAR_4, &VAR_6) || !VAR_6.nr_entry)
  return 0;

 VAR_3->data_valid = 1;
 for (VAR_7 = 0; VAR_7 < VAR_6.nr_entry; ++VAR_7) {
  struct pwr_rail_t *VAR_10 = &VAR_6.rail[VAR_7];
  struct nvkm_iccsense_sensor *VAR_11;
  int VAR_12;

  if (VAR_10->mode != 1 || !VAR_10->resistor_count)
   continue;

  VAR_11 = FUNC_8(VAR_3, VAR_10->extdev_id);
  if (!VAR_11)
   continue;

  if (!VAR_11->config)
   VAR_11->config = VAR_10->config;
  else if (VAR_11->config != VAR_10->config)
   FUNC_6(VAR_2, "config mismatch found for extdev %i\n", VAR_10->extdev_id);

  for (VAR_12 = 0; VAR_12 < VAR_10->resistor_count; ++VAR_12) {
   struct nvkm_iccsense_rail *VAR_13;
   struct pwr_rail_resistor_t *VAR_14 = &VAR_10->resistors[VAR_12];
   int (*VAR_15)(struct nvkm_iccsense *,
        struct nvkm_iccsense_rail *);

   if (!VAR_14->mohm || !VAR_14->enabled)
    continue;

   switch (VAR_11->type) {
   case 130:
    VAR_15 = FUNC_9;
    break;
   case 129:
    VAR_15 = FUNC_10;
    break;
   case 128:
    VAR_15 = FUNC_11;
    break;
   default:
    continue;
   }

   VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_1);
   if (!VAR_13)
    return -VAR_0;

   VAR_13->read = VAR_15;
   VAR_13->sensor = VAR_11;
   VAR_13->idx = VAR_12;
   VAR_13->mohm = VAR_14->mohm;
   FUNC_5(VAR_2, "create rail for extdev %i: { idx: %i, mohm: %i }\n", VAR_10->extdev_id, VAR_12, VAR_13->mohm);
   FUNC_1(&VAR_13->head, &VAR_3->rails);
  }
 }
 return 0;
}
