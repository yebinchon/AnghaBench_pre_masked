
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_1, unsigned int VAR_2,
       int VAR_3, u8 *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);

 if (VAR_3 & 1)
  VAR_5 >>= 8;
 if (VAR_3 & 2)
  VAR_5 >>= 16;
 *VAR_4 = VAR_5 & 0xff;
 return VAR_6;
}
