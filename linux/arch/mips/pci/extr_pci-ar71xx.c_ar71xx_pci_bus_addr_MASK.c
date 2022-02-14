
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline u32 FUNC_2(struct pci_bus *VAR_0, unsigned int VAR_1,
          int VAR_2)
{
 u32 VAR_3;

 if (!VAR_0->number) {

  VAR_3 = (1 << FUNC_1(VAR_1)) | (FUNC_0(VAR_1) << 8) |
        (VAR_2 & ~3);
 } else {

  VAR_3 = (VAR_0->number << 16) | (FUNC_1(VAR_1) << 11) |
        (FUNC_0(VAR_1) << 8) | (VAR_2 & ~3) | 1;
 }

 return VAR_3;
}
