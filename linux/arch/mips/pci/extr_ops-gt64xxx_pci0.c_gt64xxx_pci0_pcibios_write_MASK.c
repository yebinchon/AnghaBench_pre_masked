
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_4, unsigned int VAR_5,
  int VAR_6, int VAR_7, u32 VAR_8)
{
 u32 VAR_9 = 0;

 if (VAR_7 == 4)
  VAR_9 = VAR_8;
 else {
  if (FUNC_0(VAR_2, VAR_4,
             VAR_5, VAR_6, &VAR_9))
   return VAR_0;

  if (VAR_7 == 1)
   VAR_9 = (VAR_9 & ~(0xff << ((VAR_6 & 3) << 3))) |
    (VAR_8 << ((VAR_6 & 3) << 3));
  else if (VAR_7 == 2)
   VAR_9 = (VAR_9 & ~(0xffff << ((VAR_6 & 3) << 3))) |
    (VAR_8 << ((VAR_6 & 3) << 3));
 }

 if (FUNC_0(VAR_3, VAR_4, VAR_5,
            VAR_6, &VAR_9))
  return VAR_0;

 return VAR_1;
}
