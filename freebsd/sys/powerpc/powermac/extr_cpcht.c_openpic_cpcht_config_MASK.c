
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct openpic_cpcht_softc {int sc_ht_mtx; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ht_base; int edge; int ht_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct openpic_cpcht_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_6, u_int VAR_7, enum intr_trigger VAR_8,
    enum intr_polarity VAR_9)
{
 struct openpic_cpcht_softc *VAR_10;
 uint32_t VAR_11;
 VAR_10 = FUNC_0(VAR_6);

 if (VAR_5 != ((void*)0) && VAR_7 < 128 &&
     VAR_5[VAR_7].ht_base > 0 && !VAR_5[VAR_7].edge) {
  FUNC_2(&VAR_10->sc_ht_mtx);


  FUNC_5(VAR_5[VAR_7].ht_base + VAR_4,
      0x10 + (VAR_5[VAR_7].ht_source << 1));


  VAR_11 = FUNC_1(VAR_5[VAR_7].ht_base + 4);


  FUNC_4(VAR_5[VAR_7].ht_base + 4, VAR_11 | VAR_0);


  VAR_11 &= ~(VAR_2 | VAR_1);
  if (VAR_8 == VAR_3) {
   VAR_5[VAR_7].edge = 1;
  } else {
   VAR_5[VAR_7].edge = 0;
   VAR_11 |= VAR_2 | VAR_1;
  }
  FUNC_4(VAR_5[VAR_7].ht_base + 4, VAR_11);

  FUNC_3(&VAR_10->sc_ht_mtx);
 }
}
