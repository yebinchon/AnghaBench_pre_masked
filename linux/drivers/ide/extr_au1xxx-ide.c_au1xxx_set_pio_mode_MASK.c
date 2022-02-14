
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ide_hwif_t ;
struct TYPE_3__ {int pio_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_21, ide_drive_t *VAR_22)
{
 int VAR_23 = 0, VAR_24 = FUNC_1(VAR_0);

 switch (VAR_22->pio_mode - VAR_20) {
 case 0:
  VAR_23 = FUNC_0(VAR_2);


  VAR_24 |= VAR_19;
  VAR_24 &= ~VAR_17;
  VAR_24 &= ~VAR_18;
  VAR_24 |= VAR_7 | VAR_8;
  break;

 case 1:
  VAR_23 = FUNC_0(VAR_3);


  VAR_24 |= VAR_19;
  VAR_24 &= ~VAR_17;
  VAR_24 &= ~VAR_18;
  VAR_24 |= VAR_9 | VAR_10;
  break;

 case 2:
  VAR_23 = FUNC_0(VAR_4);


  VAR_24 &= ~VAR_19;
  VAR_24 &= ~VAR_17;
  VAR_24 &= ~VAR_18;
  VAR_24 |= VAR_11 | VAR_12;
  break;

 case 3:
  VAR_23 = FUNC_0(VAR_5);


  VAR_24 &= ~VAR_19;
  VAR_24 &= ~VAR_17;
  VAR_24 &= ~VAR_18;
  VAR_24 |= VAR_13 | VAR_14;

  break;

 case 4:
  VAR_23 = FUNC_0(VAR_6);


  VAR_24 &= ~VAR_19;
  VAR_24 &= ~VAR_17;
  VAR_24 &= ~VAR_18;
  VAR_24 |= VAR_15 | VAR_16;
  break;
 }

 FUNC_2(VAR_23,VAR_1);
 FUNC_2(VAR_24,VAR_0);
}
