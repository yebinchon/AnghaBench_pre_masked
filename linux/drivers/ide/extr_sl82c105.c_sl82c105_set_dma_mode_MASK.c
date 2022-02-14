
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
typedef int ide_hwif_t ;
struct TYPE_5__ {size_t dma_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t const VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_1, ide_drive_t *VAR_2)
{
 static u16 VAR_3[] = {0x0707, 0x0201, 0x0200};
 unsigned long VAR_4 = (unsigned long)FUNC_0(VAR_2);
 u16 VAR_5;
 const u8 VAR_6 = VAR_2->dma_mode;

 VAR_5 = VAR_3[VAR_6 - VAR_0];





 VAR_4 &= 0x0000ffff;
 VAR_4 |= (unsigned long)VAR_5 << 16;
 FUNC_1(VAR_2, (void *)VAR_4);
}
