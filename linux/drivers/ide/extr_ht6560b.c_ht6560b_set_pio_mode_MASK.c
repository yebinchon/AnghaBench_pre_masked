
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int ide_hwif_t ;
struct TYPE_7__ {int pio_mode; int name; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int FUNC_1 (TYPE_1__*,int const) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (char*,int ,int const,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 const u8 VAR_6 = VAR_3->pio_mode - VAR_0;
 u8 VAR_7;

 switch (VAR_6) {
 case 8:
 case 9:
  FUNC_1(VAR_3, VAR_6 & 1);
  return;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_6);

 FUNC_5(&VAR_1, VAR_4);
 VAR_5 = (unsigned long)FUNC_2(VAR_3);
 VAR_5 &= 0xff00;
 VAR_5 |= VAR_7;
 FUNC_3(VAR_3, (void *)VAR_5);
 FUNC_6(&VAR_1, VAR_4);




}
