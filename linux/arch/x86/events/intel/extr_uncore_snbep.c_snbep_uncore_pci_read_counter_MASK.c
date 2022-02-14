
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hw_perf_event {scalar_t__ event_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static u64 FUNC_1(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pci_dev;
 struct hw_perf_event *VAR_3 = &VAR_1->hw;
 u64 VAR_4 = 0;

 FUNC_0(VAR_2, VAR_3->event_base, (u32 *)&VAR_4);
 FUNC_0(VAR_2, VAR_3->event_base + 4, (u32 *)&VAR_4 + 1);

 return VAR_4;
}
