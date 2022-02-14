
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fire_softc {int* sc_msi_msiq_table; int sc_msi_first; int sc_msi_mtx; int sc_msi_bitmap; int sc_msiq_bitmap; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct fire_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3)
{
 struct fire_softc *VAR_4;
 u_int VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 FUNC_2(&VAR_4->sc_msi_mtx);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(VAR_4->sc_msiq_bitmap,
      VAR_4->sc_msi_msiq_table[VAR_3[VAR_5] - VAR_4->sc_msi_first]);
  FUNC_0(VAR_4->sc_msi_bitmap, VAR_3[VAR_5] - VAR_4->sc_msi_first);
 }
 FUNC_3(&VAR_4->sc_msi_mtx);
 return (0);
}
