
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ channel; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_6, ide_drive_t *VAR_7)
{
 const u8 VAR_8 = VAR_7->dma_mode;
 u8 VAR_9 = (VAR_8 & 0x10) >> 4, VAR_10 = 0, VAR_11 = 0;

 VAR_10 = VAR_6->channel ? VAR_3 : VAR_2;

 VAR_11 = (VAR_8 & 3) | (VAR_9 << 2);

 FUNC_0(VAR_10, VAR_4);
 FUNC_0(VAR_11, VAR_1);
 VAR_11 = VAR_0;
 FUNC_0(VAR_5, VAR_4);
 FUNC_0(VAR_11, VAR_1);
}
