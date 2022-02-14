
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hw_perf_event_extra {scalar_t__ idx; int config; scalar_t__ reg; } ;
struct hw_perf_event {int config; scalar_t__ config_base; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {int dieid; TYPE_1__* pmu; struct pci_dev* pci_dev; } ;
struct TYPE_4__ {struct pci_dev** dev; } ;
struct TYPE_3__ {int pmu_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_4, struct perf_event *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pci_dev;
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 struct hw_perf_event_extra *VAR_8 = &VAR_7->extra_reg;
 struct hw_perf_event_extra *VAR_9 = &VAR_7->branch_reg;

 if (VAR_8->idx != VAR_0) {
  int VAR_10 = VAR_4->pmu->pmu_idx + VAR_1;
  int VAR_11 = VAR_4->dieid;
  struct pci_dev *VAR_12 = VAR_3[VAR_11].dev[VAR_10];

  if (VAR_12) {
   FUNC_0(VAR_12, VAR_8->reg,
      (u32)VAR_8->config);
   FUNC_0(VAR_12, VAR_8->reg + 4,
      (u32)(VAR_8->config >> 32));
   FUNC_0(VAR_12, VAR_9->reg,
      (u32)VAR_9->config);
   FUNC_0(VAR_12, VAR_9->reg + 4,
      (u32)(VAR_9->config >> 32));
  }
 }

 FUNC_0(VAR_6, VAR_7->config_base, VAR_7->config | VAR_2);
}
