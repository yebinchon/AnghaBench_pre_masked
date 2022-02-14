
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int FUNC_2 (char*,int) ;

void FUNC_3(int VAR_15)
{
 int VAR_16, VAR_17;

 VAR_17 = 0;
 if (VAR_15 & VAR_1) {
  VAR_17 = VAR_15 - VAR_1;
  VAR_15 = VAR_1;

  VAR_14 |= (VAR_9 | VAR_11 | VAR_7);
 } else {

  VAR_15 &= (VAR_9);

  VAR_14 |= VAR_15;

  if (VAR_14 & ~VAR_12 & VAR_0)
   VAR_14 |= (VAR_11 | VAR_7);
  if (VAR_15 & (VAR_10 | VAR_2)) {
   if (!(VAR_15 & VAR_8))


    VAR_14 &= ~VAR_8;
  }
 }

 VAR_4;
 if ((~VAR_12 & VAR_15 & VAR_0) || (VAR_15 == VAR_1)) {

  for (VAR_16 = 0; VAR_13[VAR_16].type; VAR_16++)
   if ((VAR_13[VAR_16].type & VAR_15) ==
       VAR_13[VAR_16].type)
    break;

  if (VAR_13[VAR_16].type) {



  } else
   FUNC_2("FPU emulator: Unknown Exception: 0x%04x!\n", VAR_15);

  if (VAR_15 == VAR_1) {
   FUNC_2("FPU emulator: Internal error type 0x%04x\n",
          VAR_17);
   FUNC_0();
  }
 }
 VAR_5;





}
