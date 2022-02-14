
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfc_multi {scalar_t__ pci_iobase; } ;
typedef int __u32 ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct hfc_multi *VAR_0, unsigned char VAR_1, unsigned char VAR_2)
{
 unsigned short VAR_3;
 unsigned int VAR_4;

 if (!VAR_0->pci_iobase)
  return;

 if (VAR_1 == 0)
  VAR_3 = 0x4000;
 else
  VAR_3 = 0x5800;


 FUNC_1(VAR_3, VAR_0->pci_iobase + 4);

 VAR_4 = VAR_2 | ((__u32) VAR_2 << 8) | ((__u32) VAR_2 << 16) |
  ((__u32) VAR_2 << 24);
 FUNC_0(VAR_4, VAR_0->pci_iobase);
}
