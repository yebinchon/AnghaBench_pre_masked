
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fire_softc {int sc_flags; int sc_msiq_count; int sc_msi_count; int* sc_msi_msiq_table; int sc_msi_first; int sc_msi_mtx; int sc_msi_bitmap; int sc_msiq_bitmap; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fire_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3, int *VAR_4)
{
 struct fire_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 if ((VAR_5->sc_flags & VAR_1) == 0)
  return (VAR_0);
 FUNC_2(&VAR_5->sc_msi_mtx);
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->sc_msiq_count; VAR_6++) {
  if (FUNC_1(VAR_5->sc_msiq_bitmap, VAR_6) != 0) {
   VAR_7 = VAR_6;
   break;
  }
 }
 if (VAR_6 == VAR_5->sc_msiq_count) {
  FUNC_3(&VAR_5->sc_msi_mtx);
  return (VAR_0);
 }
 for (VAR_6 = VAR_5->sc_msi_count - 1; VAR_6 >= 0; VAR_6--) {
  if (FUNC_1(VAR_5->sc_msi_bitmap, VAR_6) != 0) {
   FUNC_4(VAR_5->sc_msiq_bitmap, VAR_7);
   FUNC_4(VAR_5->sc_msi_bitmap, VAR_6);
   VAR_5->sc_msi_msiq_table[VAR_6] = VAR_7;
   *VAR_4 = VAR_5->sc_msi_first + VAR_6;
   FUNC_3(&VAR_5->sc_msi_mtx);
   return (0);
  }
 }
 FUNC_3(&VAR_5->sc_msi_mtx);
 return (VAR_0);
}
