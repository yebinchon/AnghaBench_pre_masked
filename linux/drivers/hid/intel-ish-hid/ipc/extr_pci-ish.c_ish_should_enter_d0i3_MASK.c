
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline bool FUNC_1(struct pci_dev *VAR_1)
{
 return !FUNC_0() || VAR_1->device == VAR_0;
}
