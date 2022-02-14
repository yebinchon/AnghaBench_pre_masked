
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct hw_perf_event {int config; int config_base; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_4,
     struct perf_event *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pci_dev;
 struct hw_perf_event *VAR_7 = &VAR_5->hw;

 if ((VAR_5->attr.config & VAR_2)
       == VAR_3)
  FUNC_0(VAR_6, VAR_7->config_base,
           VAR_7->config | VAR_0);
 else
  FUNC_0(VAR_6, VAR_7->config_base,
           VAR_7->config | VAR_1);
}
