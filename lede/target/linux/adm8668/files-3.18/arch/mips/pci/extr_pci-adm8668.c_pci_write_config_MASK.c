
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
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_2, unsigned int VAR_3,
    int VAR_4, int VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_2(&VAR_1, VAR_7);

 FUNC_4(FUNC_0(VAR_2, VAR_3, VAR_4));
 VAR_8 = FUNC_1();

 switch (VAR_5) {
 case 1:
  VAR_9 = ((VAR_4 & 3) << 3);
  VAR_8 &= ~(0xff << VAR_9);
  VAR_8 |= ((VAR_6 & 0xff) << VAR_9);
  break;
 case 2:
  VAR_9 = ((VAR_4 & 2) << 4);
  VAR_8 &= ~(0xffff << VAR_9);
  VAR_8 |= ((VAR_6 & 0xffff) << VAR_9);
  break;
 case 4:
  VAR_8 = VAR_6;
  break;
 }

 FUNC_5(VAR_8);

 FUNC_3(&VAR_1, VAR_7);

 return VAR_0;
}
