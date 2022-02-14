
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_2, unsigned int VAR_3,
     int VAR_4, int VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8 = FUNC_0(VAR_1,
   VAR_2, VAR_3, VAR_4, &VAR_7);

 if (VAR_8 != VAR_0)
  return VAR_8;

 if (VAR_5 == 1)
  *VAR_6 = (VAR_7 >> ((VAR_4 & 3) << 3)) & 0xff;
 else if (VAR_5 == 2)
  *VAR_6 = (VAR_7 >> ((VAR_4 & 3) << 3)) & 0xffff;
 else
  *VAR_6 = VAR_7;

 return VAR_0;
}
