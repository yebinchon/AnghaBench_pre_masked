
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_2, unsigned int VAR_3,
    int VAR_4, int VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_2(&VAR_1, VAR_7);
 FUNC_4(FUNC_0(VAR_2, VAR_3, VAR_4));
 VAR_8 = FUNC_1();

 switch (VAR_5) {
 case 1:
  if (VAR_4 & 1)
   VAR_8 >>= 8;
  if (VAR_4 & 2)
   VAR_8 >>= 16;
  VAR_8 &= 0xff;
  break;
 case 2:
  if (VAR_4 & 2)
   VAR_8 >>= 16;
  VAR_8 &= 0xffff;
  break;
 }

 *VAR_6 = VAR_8;

 FUNC_3(&VAR_1, VAR_7);

 return VAR_0;
}
