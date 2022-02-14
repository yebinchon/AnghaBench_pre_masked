
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static u64 FUNC_1(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pci_dev;
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 u64 VAR_5 = 0;

 FUNC_0(VAR_3, VAR_0[VAR_4->idx], (u32 *)&VAR_5);
 FUNC_0(VAR_3, VAR_0[VAR_4->idx] + 4, (u32 *)&VAR_5 + 1);

 return VAR_5;
}
