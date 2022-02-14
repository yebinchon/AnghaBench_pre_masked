
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ide_hwif_t ;
struct TYPE_3__ {int dma_mode; int dn; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned long FUNC_0 (int *) ;






 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_0, ide_drive_t *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3, VAR_4 = 0;

 switch (VAR_1->dma_mode) {
  case 130: VAR_4 = 0x00921250; break;
  case 129: VAR_4 = 0x00911140; break;
  case 128: VAR_4 = 0x00911030; break;
  case 133: VAR_4 = 0x00077771; break;
  case 132: VAR_4 = 0x00012121; break;
  case 131: VAR_4 = 0x00002020; break;
 }
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_2 + 4);
 VAR_4 |= VAR_3 & 0x80000000;
 if ((VAR_1-> dn & 1) == 0) {
  FUNC_2(VAR_4, VAR_2 + 4);
 } else {
  if (VAR_4 & 0x00100000)
   VAR_3 |= 0x00100000;
  else
   VAR_3 &= ~0x00100000;
  FUNC_2(VAR_3, VAR_2 + 4);
  FUNC_2(VAR_4, VAR_2 + 12);
 }
}
