
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long i1; long i2; int min_lo; int min_hi; } ;
typedef TYPE_1__ xdpsplit_t ;
struct TYPE_6__ {long snake_cnt; long heur_min; long mxcost; } ;
typedef TYPE_2__ xdalgoenv_t ;


 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (long,long) ;
 long FUNC_1 (long,long) ;

__attribute__((used)) static long FUNC_2(unsigned long const *VAR_2, long VAR_3, long VAR_4,
        unsigned long const *VAR_5, long VAR_6, long VAR_7,
        long *VAR_8, long *VAR_9, int VAR_10, xdpsplit_t *VAR_11,
        xdalgoenv_t *VAR_12) {
 long VAR_13 = VAR_3 - VAR_7, VAR_14 = VAR_4 - VAR_6;
 long VAR_15 = VAR_3 - VAR_6, VAR_16 = VAR_4 - VAR_7;
 long VAR_17 = (VAR_15 - VAR_16) & 1;
 long VAR_18 = VAR_15, VAR_19 = VAR_15;
 long VAR_20 = VAR_16, VAR_21 = VAR_16;
 long VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;




 VAR_8[VAR_15] = VAR_3;
 VAR_9[VAR_16] = VAR_4;

 for (VAR_22 = 1;; VAR_22++) {
  int VAR_31 = 0;
  if (VAR_18 > VAR_13)
   VAR_8[--VAR_18 - 1] = -1;
  else
   ++VAR_18;
  if (VAR_19 < VAR_14)
   VAR_8[++VAR_19 + 1] = -1;
  else
   --VAR_19;

  for (VAR_23 = VAR_19; VAR_23 >= VAR_18; VAR_23 -= 2) {
   if (VAR_8[VAR_23 - 1] >= VAR_8[VAR_23 + 1])
    VAR_24 = VAR_8[VAR_23 - 1] + 1;
   else
    VAR_24 = VAR_8[VAR_23 + 1];
   VAR_26 = VAR_24;
   VAR_25 = VAR_24 - VAR_23;
   for (; VAR_24 < VAR_4 && VAR_25 < VAR_7 && VAR_2[VAR_24] == VAR_5[VAR_25]; VAR_24++, VAR_25++);
   if (VAR_24 - VAR_26 > VAR_12->snake_cnt)
    VAR_31 = 1;
   VAR_8[VAR_23] = VAR_24;
   if (VAR_17 && VAR_20 <= VAR_23 && VAR_23 <= VAR_21 && VAR_9[VAR_23] <= VAR_24) {
    VAR_11->i1 = VAR_24;
    VAR_11->i2 = VAR_25;
    VAR_11->min_lo = VAR_11->min_hi = 1;
    return VAR_22;
   }
  }
  if (VAR_20 > VAR_13)
   VAR_9[--VAR_20 - 1] = VAR_1;
  else
   ++VAR_20;
  if (VAR_21 < VAR_14)
   VAR_9[++VAR_21 + 1] = VAR_1;
  else
   --VAR_21;

  for (VAR_23 = VAR_21; VAR_23 >= VAR_20; VAR_23 -= 2) {
   if (VAR_9[VAR_23 - 1] < VAR_9[VAR_23 + 1])
    VAR_24 = VAR_9[VAR_23 - 1];
   else
    VAR_24 = VAR_9[VAR_23 + 1] - 1;
   VAR_26 = VAR_24;
   VAR_25 = VAR_24 - VAR_23;
   for (; VAR_24 > VAR_3 && VAR_25 > VAR_6 && VAR_2[VAR_24 - 1] == VAR_5[VAR_25 - 1]; VAR_24--, VAR_25--);
   if (VAR_26 - VAR_24 > VAR_12->snake_cnt)
    VAR_31 = 1;
   VAR_9[VAR_23] = VAR_24;
   if (!VAR_17 && VAR_18 <= VAR_23 && VAR_23 <= VAR_19 && VAR_24 <= VAR_8[VAR_23]) {
    VAR_11->i1 = VAR_24;
    VAR_11->i2 = VAR_25;
    VAR_11->min_lo = VAR_11->min_hi = 1;
    return VAR_22;
   }
  }

  if (VAR_10)
   continue;
  if (VAR_31 && VAR_22 > VAR_12->heur_min) {
   for (VAR_27 = 0, VAR_23 = VAR_19; VAR_23 >= VAR_18; VAR_23 -= 2) {
    VAR_28 = VAR_23 > VAR_15 ? VAR_23 - VAR_15: VAR_15 - VAR_23;
    VAR_24 = VAR_8[VAR_23];
    VAR_25 = VAR_24 - VAR_23;
    VAR_29 = (VAR_24 - VAR_3) + (VAR_25 - VAR_6) - VAR_28;

    if (VAR_29 > VAR_0 * VAR_22 && VAR_29 > VAR_27 &&
        VAR_3 + VAR_12->snake_cnt <= VAR_24 && VAR_24 < VAR_4 &&
        VAR_6 + VAR_12->snake_cnt <= VAR_25 && VAR_25 < VAR_7) {
     for (VAR_30 = 1; VAR_2[VAR_24 - VAR_30] == VAR_5[VAR_25 - VAR_30]; VAR_30++)
      if (VAR_30 == VAR_12->snake_cnt) {
       VAR_27 = VAR_29;
       VAR_11->i1 = VAR_24;
       VAR_11->i2 = VAR_25;
       break;
      }
    }
   }
   if (VAR_27 > 0) {
    VAR_11->min_lo = 1;
    VAR_11->min_hi = 0;
    return VAR_22;
   }

   for (VAR_27 = 0, VAR_23 = VAR_21; VAR_23 >= VAR_20; VAR_23 -= 2) {
    VAR_28 = VAR_23 > VAR_16 ? VAR_23 - VAR_16: VAR_16 - VAR_23;
    VAR_24 = VAR_9[VAR_23];
    VAR_25 = VAR_24 - VAR_23;
    VAR_29 = (VAR_4 - VAR_24) + (VAR_7 - VAR_25) - VAR_28;

    if (VAR_29 > VAR_0 * VAR_22 && VAR_29 > VAR_27 &&
        VAR_3 < VAR_24 && VAR_24 <= VAR_4 - VAR_12->snake_cnt &&
        VAR_6 < VAR_25 && VAR_25 <= VAR_7 - VAR_12->snake_cnt) {
     for (VAR_30 = 0; VAR_2[VAR_24 + VAR_30] == VAR_5[VAR_25 + VAR_30]; VAR_30++)
      if (VAR_30 == VAR_12->snake_cnt - 1) {
       VAR_27 = VAR_29;
       VAR_11->i1 = VAR_24;
       VAR_11->i2 = VAR_25;
       break;
      }
    }
   }
   if (VAR_27 > 0) {
    VAR_11->min_lo = 0;
    VAR_11->min_hi = 1;
    return VAR_22;
   }
  }





  if (VAR_22 >= VAR_12->mxcost) {
   long VAR_32, VAR_33, VAR_34, VAR_35;

   VAR_32 = VAR_33 = -1;
   for (VAR_23 = VAR_19; VAR_23 >= VAR_18; VAR_23 -= 2) {
    VAR_24 = FUNC_1(VAR_8[VAR_23], VAR_4);
    VAR_25 = VAR_24 - VAR_23;
    if (VAR_7 < VAR_25)
     VAR_24 = VAR_7 + VAR_23, VAR_25 = VAR_7;
    if (VAR_32 < VAR_24 + VAR_25) {
     VAR_32 = VAR_24 + VAR_25;
     VAR_33 = VAR_24;
    }
   }

   VAR_34 = VAR_35 = VAR_1;
   for (VAR_23 = VAR_21; VAR_23 >= VAR_20; VAR_23 -= 2) {
    VAR_24 = FUNC_0(VAR_3, VAR_9[VAR_23]);
    VAR_25 = VAR_24 - VAR_23;
    if (VAR_25 < VAR_6)
     VAR_24 = VAR_6 + VAR_23, VAR_25 = VAR_6;
    if (VAR_24 + VAR_25 < VAR_34) {
     VAR_34 = VAR_24 + VAR_25;
     VAR_35 = VAR_24;
    }
   }

   if ((VAR_4 + VAR_7) - VAR_34 < VAR_32 - (VAR_3 + VAR_6)) {
    VAR_11->i1 = VAR_33;
    VAR_11->i2 = VAR_32 - VAR_33;
    VAR_11->min_lo = 1;
    VAR_11->min_hi = 0;
   } else {
    VAR_11->i1 = VAR_35;
    VAR_11->i2 = VAR_34 - VAR_35;
    VAR_11->min_lo = 0;
    VAR_11->min_hi = 1;
   }
   return VAR_22;
  }
 }
}
