
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_4, unsigned int VAR_5,
       int VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_2(VAR_4->number, FUNC_1(VAR_5),
      FUNC_0(VAR_5), VAR_6);

 FUNC_5(&VAR_3, VAR_9);
 FUNC_4(VAR_10, VAR_1);
 VAR_11 = FUNC_3(VAR_2);

 switch (VAR_7) {
 case 1:
  VAR_11 = (VAR_11 & ~(0xff << ((VAR_6 & 3) << 3))) |
         (VAR_8 << ((VAR_6 & 3) << 3));
  break;
 case 2:
  VAR_11 = (VAR_11 & ~(0xffff << ((VAR_6 & 3) << 3))) |
         (VAR_8 << ((VAR_6 & 3) << 3));
  break;
 case 4:
  VAR_11 = VAR_8;
  break;
 }

 FUNC_4(VAR_11, VAR_2);
 FUNC_6(&VAR_3, VAR_9);

 return VAR_0;
}
