
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int ide_hwif_t ;
struct TYPE_4__ {int pio_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_1, ide_drive_t *VAR_2)
{
 const u8 VAR_3 = VAR_2->pio_mode - VAR_0;





 if (VAR_3 == 8 || VAR_3 == 9)
  return;

 FUNC_0(VAR_2, VAR_0 + VAR_3);
}
