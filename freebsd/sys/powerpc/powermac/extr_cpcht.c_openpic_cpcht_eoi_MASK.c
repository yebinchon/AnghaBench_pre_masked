
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct openpic_cpcht_softc {int sc_ht_mtx; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ht_base; scalar_t__ apple_eoi; int ht_source; int eoi_data; int edge; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct openpic_cpcht_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,void*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_2, u_int VAR_3, void *VAR_4)
{
 struct openpic_cpcht_softc *VAR_5;
 uint32_t VAR_6, VAR_7;

 if (VAR_3 == 255)
  return;

 VAR_5 = FUNC_0(VAR_2);

 if (VAR_1 != ((void*)0) && VAR_3 < 128 &&
     VAR_1[VAR_3].ht_base > 0 && !VAR_1[VAR_3].edge) {


  if (VAR_1[VAR_3].apple_eoi) {
   VAR_6 = (VAR_1[VAR_3].ht_source >> 3) & ~3;
   VAR_7 = 1 << (VAR_1[VAR_3].ht_source & 0x1f);
   FUNC_4(VAR_1[VAR_3].apple_eoi + VAR_6, VAR_7);
  } else {
   FUNC_1(&VAR_5->sc_ht_mtx);

   FUNC_5(VAR_1[VAR_3].ht_base + VAR_0,
       0x11 + (VAR_1[VAR_3].ht_source << 1));
   FUNC_4(VAR_1[VAR_3].ht_base + 4,
       VAR_1[VAR_3].eoi_data);

   FUNC_2(&VAR_5->sc_ht_mtx);
  }
 }

 FUNC_3(VAR_2, VAR_3, VAR_4);
}
