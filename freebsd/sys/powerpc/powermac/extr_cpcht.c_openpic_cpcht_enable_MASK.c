
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct openpic_cpcht_softc {int sc_ht_mtx; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ht_base; int ht_source; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct openpic_cpcht_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,void*) ;
 int FUNC_5 (int ,int,int,void**) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_3, u_int VAR_4, u_int VAR_5, void **VAR_6)
{
 struct openpic_cpcht_softc *VAR_7;
 uint32_t VAR_8;

 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_2 != ((void*)0) && VAR_4 < 128 &&
     VAR_2[VAR_4].ht_base > 0) {
  FUNC_2(&VAR_7->sc_ht_mtx);


  FUNC_7(VAR_2[VAR_4].ht_base + VAR_1,
      0x10 + (VAR_2[VAR_4].ht_source << 1));


  VAR_8 = FUNC_1(VAR_2[VAR_4].ht_base + 4);
  VAR_8 &= ~VAR_0;
  FUNC_6(VAR_2[VAR_4].ht_base + 4, VAR_8);

  FUNC_3(&VAR_7->sc_ht_mtx);
 }

 FUNC_4(VAR_3, VAR_4, *VAR_6);
}
