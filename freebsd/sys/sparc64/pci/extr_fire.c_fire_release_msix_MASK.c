
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fire_softc {int sc_flags; int* sc_msi_msiq_table; int sc_msi_first; int sc_msi_mtx; int sc_msi_bitmap; int sc_msiq_bitmap; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct fire_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4)
{
 struct fire_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if ((VAR_5->sc_flags & VAR_1) == 0)
  return (VAR_0);
 FUNC_2(&VAR_5->sc_msi_mtx);
 FUNC_0(VAR_5->sc_msiq_bitmap,
     VAR_5->sc_msi_msiq_table[VAR_4 - VAR_5->sc_msi_first]);
 FUNC_0(VAR_5->sc_msi_bitmap, VAR_4 - VAR_5->sc_msi_first);
 FUNC_3(&VAR_5->sc_msi_mtx);
 return (0);
}
