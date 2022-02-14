
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm_bus {int dummy; } ;
struct nvdimm {int dummy; } ;
struct nfit_mem {TYPE_6__* memdev_dcr; int idt_dcr; TYPE_5__* spa_dcr; TYPE_4__* dcr; TYPE_2__* memdev_bdw; int idt_bdw; TYPE_5__* spa_bdw; TYPE_1__* bdw; } ;
struct TYPE_9__ {scalar_t__ base; } ;
struct nfit_blk_mmio {int line_size; TYPE_5__* spa; int idt; int base_offset; int size; TYPE_3__ addr; } ;
struct nfit_blk {scalar_t__ stat_offset; scalar_t__ cmd_offset; int nd_region; struct nfit_blk_mmio* mmio; int bdw_offset; } ;
struct nd_blk_region {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_12__ {int interleave_ways; int region_offset; } ;
struct TYPE_11__ {int length; int address; } ;
struct TYPE_10__ {int window_size; scalar_t__ status_offset; scalar_t__ command_offset; } ;
struct TYPE_8__ {int interleave_ways; int region_offset; } ;
struct TYPE_7__ {int size; int offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvdimm_bus_descriptor*,struct nvdimm*,struct nfit_blk*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 struct nfit_blk* FUNC_3 (struct device*,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ,int ,int ) ;
 int FUNC_6 (struct nd_blk_region*) ;
 int FUNC_7 (struct nd_blk_region*,struct nfit_blk*) ;
 struct nvdimm* FUNC_8 (struct nd_blk_region*) ;
 int FUNC_9 (struct nfit_blk_mmio*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct nvdimm*) ;
 struct nfit_mem* FUNC_12 (struct nvdimm*) ;
 struct nd_blk_region* FUNC_13 (struct device*) ;
 struct nvdimm_bus_descriptor* FUNC_14 (struct nvdimm_bus*) ;
 int FUNC_15 (struct device*) ;

__attribute__((used)) static int FUNC_16(struct nvdimm_bus *VAR_5,
  struct device *VAR_6)
{
 struct nvdimm_bus_descriptor *VAR_7 = FUNC_14(VAR_5);
 struct nd_blk_region *VAR_8 = FUNC_13(VAR_6);
 struct nfit_blk_mmio *VAR_9;
 struct nfit_blk *VAR_10;
 struct nfit_mem *VAR_11;
 struct nvdimm *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_8(VAR_8);
 VAR_11 = FUNC_12(VAR_12);
 if (!VAR_11 || !VAR_11->dcr || !VAR_11->bdw) {
  FUNC_1(VAR_6, "missing%s%s%s\n",
    VAR_11 ? "" : " nfit_mem",
    (VAR_11 && VAR_11->dcr) ? "" : " dcr",
    (VAR_11 && VAR_11->bdw) ? "" : " bdw");
  return -VAR_3;
 }

 VAR_10 = FUNC_3(VAR_6, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_2;
 FUNC_7(VAR_8, VAR_10);
 VAR_10->nd_region = FUNC_15(VAR_6);


 VAR_10->bdw_offset = VAR_11->bdw->offset;
 VAR_9 = &VAR_10->mmio[VAR_0];
 VAR_9->addr.base = FUNC_5(VAR_6, VAR_11->spa_bdw->address,
                        VAR_11->spa_bdw->length, FUNC_6(VAR_8));
 if (!VAR_9->addr.base) {
  FUNC_1(VAR_6, "%s failed to map bdw\n",
    FUNC_11(VAR_12));
  return -VAR_2;
 }
 VAR_9->size = VAR_11->bdw->size;
 VAR_9->base_offset = VAR_11->memdev_bdw->region_offset;
 VAR_9->idt = VAR_11->idt_bdw;
 VAR_9->spa = VAR_11->spa_bdw;
 VAR_13 = FUNC_9(VAR_9, VAR_11->idt_bdw,
   VAR_11->memdev_bdw->interleave_ways);
 if (VAR_13) {
  FUNC_1(VAR_6, "%s failed to init bdw interleave\n",
    FUNC_11(VAR_12));
  return VAR_13;
 }


 VAR_10->cmd_offset = VAR_11->dcr->command_offset;
 VAR_10->stat_offset = VAR_11->dcr->status_offset;
 VAR_9 = &VAR_10->mmio[VAR_1];
 VAR_9->addr.base = FUNC_4(VAR_6, VAR_11->spa_dcr->address,
   VAR_11->spa_dcr->length);
 if (!VAR_9->addr.base) {
  FUNC_1(VAR_6, "%s failed to map dcr\n",
    FUNC_11(VAR_12));
  return -VAR_2;
 }
 VAR_9->size = VAR_11->dcr->window_size;
 VAR_9->base_offset = VAR_11->memdev_dcr->region_offset;
 VAR_9->idt = VAR_11->idt_dcr;
 VAR_9->spa = VAR_11->spa_dcr;
 VAR_13 = FUNC_9(VAR_9, VAR_11->idt_dcr,
   VAR_11->memdev_dcr->interleave_ways);
 if (VAR_13) {
  FUNC_1(VAR_6, "%s failed to init dcr interleave\n",
    FUNC_11(VAR_12));
  return VAR_13;
 }

 VAR_13 = FUNC_0(VAR_7, VAR_12, VAR_10);
 if (VAR_13 < 0) {
  FUNC_1(VAR_6, "%s failed get DIMM flags\n",
    FUNC_11(VAR_12));
  return VAR_13;
 }

 if (FUNC_10(VAR_10->nd_region) < 0)
  FUNC_2(VAR_6, "unable to guarantee persistence of writes\n");

 if (VAR_9->line_size == 0)
  return 0;

 if ((u32) VAR_10->cmd_offset % VAR_9->line_size
   + 8 > VAR_9->line_size) {
  FUNC_1(VAR_6, "cmd_offset crosses interleave boundary\n");
  return -VAR_3;
 } else if ((u32) VAR_10->stat_offset % VAR_9->line_size
   + 8 > VAR_9->line_size) {
  FUNC_1(VAR_6, "stat_offset crosses interleave boundary\n");
  return -VAR_3;
 }

 return 0;
}
