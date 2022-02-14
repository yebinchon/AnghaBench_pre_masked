
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_kauai_softc {int * pioconf; int * wdmaconf; int * udmaconf; scalar_t__ shasta; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 struct ata_kauai_softc* FUNC_0 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_11, int VAR_12, int VAR_13)
{
 struct ata_kauai_softc *VAR_14 = FUNC_0(VAR_11);

 VAR_13 = FUNC_1(VAR_13,VAR_14->shasta ? VAR_4 : VAR_3);

 if (VAR_14->shasta) {
  switch (VAR_13 & VAR_0) {
      case 129:
   VAR_14->udmaconf[VAR_12]
       = VAR_10[VAR_13 & VAR_1];
   break;
      case 128:
   VAR_14->udmaconf[VAR_12] = 0;
   VAR_14->wdmaconf[VAR_12]
       = VAR_6[VAR_13 & VAR_1];
   break;
      default:
   VAR_14->pioconf[VAR_12]
       = VAR_8[(VAR_13 & VAR_1) -
       VAR_2];
   break;
  }
 } else {
  switch (VAR_13 & VAR_0) {
      case 129:
   VAR_14->udmaconf[VAR_12]
       = VAR_9[VAR_13 & VAR_1];
   break;
      case 128:
   VAR_14->udmaconf[VAR_12] = 0;
   VAR_14->wdmaconf[VAR_12]
       = VAR_5[VAR_13 & VAR_1];
   break;
      default:
   VAR_14->pioconf[VAR_12]
       = VAR_7[(VAR_13 & VAR_1)
       - VAR_2];
   break;
  }
 }

 return (VAR_13);
}
