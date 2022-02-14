
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_macio_softc {int rev; int* udmaconf; int* wdmaconf; int* pioconf; int max_mode; } ;
typedef int device_t ;
struct TYPE_6__ {int cycle; int active; } ;
struct TYPE_5__ {int cycle; int active; } ;
struct TYPE_4__ {int cycle; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ata_macio_softc* FUNC_1 (int ) ;
 TYPE_3__* VAR_10 ;
 int FUNC_2 (int,int ) ;
 TYPE_2__* VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_13, int VAR_14, int VAR_15)
{
 struct ata_macio_softc *VAR_16 = FUNC_1(VAR_13);

 int VAR_17 = 0, VAR_18 = 0;
        int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22;

 VAR_15 = FUNC_2(VAR_15, VAR_16->max_mode);

 if ((VAR_15 & VAR_0) == VAR_3) {
  VAR_17 = VAR_12[VAR_15 & VAR_1].cycle;
  VAR_18 = VAR_12[VAR_15 & VAR_1].active;

  VAR_19 = FUNC_0(VAR_16->rev,VAR_17);
  VAR_20 = FUNC_0(VAR_16->rev,VAR_18);


  VAR_16->udmaconf[VAR_14] =
      (VAR_19 << 21) | (VAR_20 << 25) | 0x100000;
 } else if ((VAR_15 & VAR_0) == VAR_4) {
  VAR_17 = VAR_10[VAR_15 & VAR_1].cycle;
  VAR_18 = VAR_10[VAR_15 & VAR_1].active;

  VAR_19 = FUNC_0(VAR_16->rev,VAR_17);
  VAR_20 = FUNC_0(VAR_16->rev,VAR_18);

  if (VAR_16->rev == 4) {
   VAR_21 = VAR_19 - VAR_20;

   VAR_16->wdmaconf[VAR_14] =
       (VAR_20 << 10) | (VAR_21 << 15);
  } else {
   VAR_21 = VAR_19 - VAR_20 - VAR_6;
   if (VAR_21 < VAR_5)
    VAR_21 = VAR_5;
   VAR_22 = 0;


   VAR_16->wdmaconf[VAR_14] = (VAR_22 << 21)
       | (VAR_21 << 16) | (VAR_20 << 11);
  }
 } else {
  VAR_17 =
      VAR_11[(VAR_15 & VAR_1) - VAR_2].cycle;
  VAR_18 =
      VAR_11[(VAR_15 & VAR_1) - VAR_2].active;

  VAR_19 = FUNC_0(VAR_16->rev,VAR_17);
  VAR_20 = FUNC_0(VAR_16->rev,VAR_18);

  if (VAR_16->rev == 4) {
   VAR_21 = VAR_19 - VAR_20;


   VAR_16->pioconf[VAR_14] =
       (VAR_21 << 5) | VAR_20;
  } else {
   if (VAR_20 < VAR_7)
    VAR_20 = VAR_7;

   VAR_21 = VAR_19 - VAR_20 - VAR_9;
   if (VAR_21 < VAR_8)
    VAR_21 = VAR_8;


   VAR_16->pioconf[VAR_14] =
       (VAR_21 << 5) | VAR_20;
  }
 }

 return (VAR_15);
}
