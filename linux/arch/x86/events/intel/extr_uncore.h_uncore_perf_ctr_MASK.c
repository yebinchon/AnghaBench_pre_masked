
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_box {scalar_t__ io_addr; scalar_t__ pci_dev; } ;


 int FUNC_0 (struct intel_uncore_box*,int) ;
 int FUNC_1 (struct intel_uncore_box*,int) ;

__attribute__((used)) static inline
unsigned FUNC_2(struct intel_uncore_box *VAR_0, int VAR_1)
{
 if (VAR_0->pci_dev || VAR_0->io_addr)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
