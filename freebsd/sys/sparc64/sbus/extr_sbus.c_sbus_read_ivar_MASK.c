
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbus_softc {uintptr_t sc_ign; } ;
struct sbus_devinfo {uintptr_t sdi_burstsz; uintptr_t sdi_clockfreq; uintptr_t sdi_slot; } ;
typedef int device_t ;


 int VAR_0 ;




 struct sbus_devinfo* FUNC_0 (int ) ;
 struct sbus_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct sbus_softc *VAR_5;
 struct sbus_devinfo *VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 if ((VAR_6 = FUNC_0(VAR_2)) == ((void*)0))
  return (VAR_0);
 switch (VAR_3) {
 case 131:
  *VAR_4 = VAR_6->sdi_burstsz;
  break;
 case 130:
  *VAR_4 = VAR_6->sdi_clockfreq;
  break;
 case 129:
  *VAR_4 = VAR_5->sc_ign;
  break;
 case 128:
  *VAR_4 = VAR_6->sdi_slot;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
