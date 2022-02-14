
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lg_delta_lookup; scalar_t__ bin; scalar_t__ psz; } ;
typedef TYPE_1__ sc_t ;
struct TYPE_6__ {int ntiny; int nlbins; int nbins; int nsizes; unsigned int lg_ceil_nsizes; int npsizes; int lg_tiny_maxclass; size_t lookup_maxclass; size_t small_maxclass; int lg_large_minclass; int large_minclass; size_t large_maxclass; TYPE_1__* sc; } ;
typedef TYPE_2__ sc_data_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(

    sc_data_t *VAR_7,

    size_t VAR_8, int VAR_9,

    int VAR_10, int VAR_11, int VAR_12, int VAR_13) {
 int VAR_14 = (1 << VAR_8) * 8;
 int VAR_15 = (1 << VAR_13);
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = (unsigned)-1;
 int VAR_19 = 0;
 int VAR_20 = 0;

 int VAR_21 = 0;

 int VAR_22 = 0;
 int VAR_23 = VAR_10;
 int VAR_24 = VAR_23;


 size_t VAR_25 = 0;
 size_t VAR_26 = 0;
 int VAR_27 = 0;
 size_t VAR_28 = 0;


 while (VAR_23 < VAR_9) {
  sc_t *VAR_29 = &VAR_7->sc[VAR_21];
  FUNC_3(VAR_29, VAR_11, VAR_12, VAR_13, VAR_21,
      VAR_23, VAR_24, VAR_22);
  if (VAR_29->lg_delta_lookup != 0) {
   VAR_17 = VAR_21 + 1;
  }
  if (VAR_29->psz) {
   VAR_20++;
  }
  if (VAR_29->bin) {
   VAR_19++;
  }
  VAR_16++;

  VAR_18 = VAR_23;
  VAR_21++;
  VAR_24 = VAR_23;
  VAR_23++;
 }


 if (VAR_16 != 0) {
  sc_t *VAR_30 = &VAR_7->sc[VAR_21];




  VAR_23--;
  VAR_22 = 1;
  FUNC_3(VAR_30, VAR_11, VAR_12, VAR_13, VAR_21,
      VAR_23, VAR_24, VAR_22);
  VAR_21++;
  VAR_23++;
  VAR_24++;
  if (VAR_30->psz) {
   VAR_20++;
  }
  if (VAR_30->bin) {
   VAR_19++;
  }
 }
 while (VAR_22 < VAR_15) {
  sc_t *VAR_31 = &VAR_7->sc[VAR_21];
  FUNC_3(VAR_31, VAR_11, VAR_12, VAR_13, VAR_21,
      VAR_23, VAR_24, VAR_22);
  VAR_21++;
  VAR_22++;
  if (VAR_31->psz) {
   VAR_20++;
  }
  if (VAR_31->bin) {
   VAR_19++;
  }
 }


 VAR_23 = VAR_23 + VAR_13;
 while (VAR_23 < VAR_14 - 1) {
  VAR_22 = 1;
  int VAR_32;
  if (VAR_23 == VAR_14 - 2) {
   VAR_32 = VAR_15 - 1;
  } else {
   VAR_32 = VAR_15;
  }
  while (VAR_22 <= VAR_32) {
   sc_t *VAR_33 = &VAR_7->sc[VAR_21];
   FUNC_3(VAR_33, VAR_11, VAR_12, VAR_13, VAR_21,
       VAR_23, VAR_24, VAR_22);
   if (VAR_33->lg_delta_lookup != 0) {
    VAR_17 = VAR_21 + 1;

    VAR_25 = (FUNC_0(1) << VAR_23)
        + (FUNC_0(VAR_22) << VAR_24);
   }
   if (VAR_33->psz) {
    VAR_20++;
   }
   if (VAR_33->bin) {
    VAR_19++;

    VAR_26 = (FUNC_0(1) << VAR_23)
        + (FUNC_0(VAR_22) << VAR_24);
    if (VAR_13 > 0) {
     VAR_27 = VAR_23 + 1;
    } else {
     VAR_27 = VAR_23 + 2;
    }
   }
   VAR_28 = (FUNC_0(1) << VAR_23)
       + (FUNC_0(VAR_22) << VAR_24);
   VAR_21++;
   VAR_22++;
  }
  VAR_23++;
  VAR_24++;
 }

 int VAR_34 = VAR_21;
 unsigned VAR_35 = FUNC_2(VAR_34);


 VAR_7->ntiny = VAR_16;
 VAR_7->nlbins = VAR_17;
 VAR_7->nbins = VAR_19;
 VAR_7->nsizes = VAR_34;
 VAR_7->lg_ceil_nsizes = VAR_35;
 VAR_7->npsizes = VAR_20;
 VAR_7->lg_tiny_maxclass = VAR_18;
 VAR_7->lookup_maxclass = VAR_25;
 VAR_7->small_maxclass = VAR_26;
 VAR_7->lg_large_minclass = VAR_27;
 VAR_7->large_minclass = (FUNC_0(1) << VAR_27);
 VAR_7->large_maxclass = VAR_28;
 FUNC_1(VAR_7->npsizes == VAR_4);
 FUNC_1(VAR_7->lg_tiny_maxclass == VAR_3);
 FUNC_1(VAR_7->small_maxclass == VAR_5);
 FUNC_1(VAR_7->large_minclass == VAR_1);
 FUNC_1(VAR_7->lg_large_minclass == VAR_2);
 FUNC_1(VAR_7->large_maxclass == VAR_0);
 FUNC_1(VAR_0 < VAR_6);
}
