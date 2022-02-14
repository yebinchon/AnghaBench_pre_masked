
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_channel {scalar_t__ reg_base; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct pci_channel *VAR_0,
     unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_1, VAR_0->reg_base + VAR_2);
}
