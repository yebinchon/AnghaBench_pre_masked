
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__* VAR_4 ;
 unsigned long FUNC_7 (scalar_t__,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct pci_bus *VAR_5, unsigned int VAR_6,
 int VAR_7, int VAR_8, u32 *VAR_9)
{
 unsigned long VAR_10;

 *VAR_9 = 0xffffffff;

 if (VAR_5->number == 0) {
  if (VAR_4[FUNC_0(VAR_6)] == 0)
   return VAR_0;
 }

 VAR_10 = FUNC_7(VAR_5->number, VAR_6, VAR_7);
 FUNC_4(VAR_2 | VAR_10, VAR_1);
 FUNC_2(VAR_1);
 VAR_10 = VAR_3 + (VAR_7 & 0x3);

 switch (VAR_8) {
 case 1:
  *VAR_9 = FUNC_1(VAR_10);
  break;
 case 2:
  *VAR_9 = FUNC_5(FUNC_3(VAR_10));
  break;
 default:
  *VAR_9 = FUNC_6(FUNC_2(VAR_10));
  break;
 }

 FUNC_4(0, VAR_1);
 FUNC_2(VAR_1);
 return VAR_0;
}
