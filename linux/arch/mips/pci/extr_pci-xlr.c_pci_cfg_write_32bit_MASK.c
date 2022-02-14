
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct pci_bus *VAR_1, unsigned int VAR_2,
 int VAR_3, u32 VAR_4)
{
 u32 *VAR_5;

 VAR_5 = (u32 *)(VAR_0 +
   FUNC_1(VAR_1->number, VAR_2, VAR_3 & ~3));
 *VAR_5 = FUNC_0(VAR_4);
}
