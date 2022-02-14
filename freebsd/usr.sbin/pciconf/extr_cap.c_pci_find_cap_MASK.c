
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct pci_conf {int pc_hdr; int pc_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int *,int,int) ;

uint8_t
FUNC_1(int VAR_7, struct pci_conf *VAR_8, uint8_t VAR_9)
{
 uint16_t VAR_10;
 uint8_t VAR_11, VAR_12;


 VAR_10 = FUNC_0(VAR_7, &VAR_8->pc_sel, VAR_6, 2);
 if (!(VAR_10 & VAR_3))
  return (0);

 switch (VAR_8->pc_hdr & VAR_2) {
 case 128:
 case 130:
  VAR_11 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_5;
  break;
 default:
  return (0);
 }

 VAR_11 = FUNC_0(VAR_7, &VAR_8->pc_sel, VAR_11, 1);
 while (VAR_11 != 0 && VAR_11 != 0xff) {
  VAR_12 = FUNC_0(VAR_7, &VAR_8->pc_sel, VAR_11 + VAR_0, 1);
  if (VAR_12 == VAR_9)
   return (VAR_11);
  VAR_11 = FUNC_0(VAR_7, &VAR_8->pc_sel, VAR_11 + VAR_1, 1);
 }
 return (0);
}
