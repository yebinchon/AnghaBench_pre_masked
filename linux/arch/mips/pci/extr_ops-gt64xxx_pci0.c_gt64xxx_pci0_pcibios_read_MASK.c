
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_3, unsigned int VAR_4,
  int VAR_5, int VAR_6, u32 * VAR_7)
{
 u32 VAR_8 = 0;

 if (FUNC_0(VAR_2, VAR_3, VAR_4,
            VAR_5, &VAR_8))
  return VAR_0;

 if (VAR_6 == 1)
  *VAR_7 = (VAR_8 >> ((VAR_5 & 3) << 3)) & 0xff;
 else if (VAR_6 == 2)
  *VAR_7 = (VAR_8 >> ((VAR_5 & 3) << 3)) & 0xffff;
 else
  *VAR_7 = VAR_8;

 return VAR_1;
}
