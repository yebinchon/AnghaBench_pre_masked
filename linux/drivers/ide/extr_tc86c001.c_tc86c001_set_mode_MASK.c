
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int config_data; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dma_mode; scalar_t__ dn; } ;
typedef TYPE_2__ ide_drive_t ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_0, ide_drive_t *VAR_1)
{
 unsigned long VAR_2 = VAR_0->config_data + (VAR_1->dn ? 0x02 : 0x00);
 u16 VAR_3, VAR_4 = FUNC_0(VAR_2);
 const u8 VAR_5 = VAR_1->dma_mode;

 switch (VAR_5) {
 case 128: VAR_3 = 0x00c0; break;
 case 129: VAR_3 = 0x00b0; break;
 case 130: VAR_3 = 0x00a0; break;
 case 131: VAR_3 = 0x0090; break;
 case 132: VAR_3 = 0x0080; break;
 case 138: VAR_3 = 0x0070; break;
 case 139: VAR_3 = 0x0060; break;
 case 140: VAR_3 = 0x0050; break;
 case 133: VAR_3 = 0x0400; break;
 case 134: VAR_3 = 0x0300; break;
 case 135: VAR_3 = 0x0200; break;
 case 136: VAR_3 = 0x0100; break;
 case 137:
 default: VAR_3 = 0x0000; break;
 }

 VAR_4 &= (VAR_5 < 140) ? 0xf8ff : 0xff0f;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_4, VAR_2);
}
