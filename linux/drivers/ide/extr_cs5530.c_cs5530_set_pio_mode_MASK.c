
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int ide_hwif_t ;
struct TYPE_3__ {size_t pio_mode; int dn; } ;
typedef TYPE_1__ ide_drive_t ;


 unsigned long FUNC_0 (int *) ;
 size_t VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = (FUNC_1(VAR_4 + 4) >> 31) & 1;
 const u8 VAR_6 = VAR_3->pio_mode - VAR_0;

 FUNC_2(VAR_1[VAR_5][VAR_6], VAR_4 + ((VAR_3->dn & 1)<<3));
}
