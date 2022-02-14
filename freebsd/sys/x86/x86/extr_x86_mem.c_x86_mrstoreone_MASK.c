
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int64_t ;
struct mem_range_softc {int mr_cap; int mr_ndesc; struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {int mr_flags; int mr_base; int mr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void
FUNC_12(void *VAR_16)
{
 struct mem_range_softc *VAR_17 = VAR_16;
 struct mem_range_desc *VAR_18;
 u_int64_t VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;
 u_long VAR_24, VAR_25;

 VAR_18 = VAR_17->mr_desc;

 FUNC_0();


 VAR_25 = FUNC_6();
 FUNC_4(VAR_25 & ~VAR_2);


 VAR_24 = FUNC_5();
 FUNC_3((VAR_24 & ~VAR_1) | VAR_0);


 FUNC_9();
 FUNC_2();


 FUNC_10(VAR_9, FUNC_7(VAR_9) & ~VAR_10);


 if (VAR_17->mr_cap & VAR_4) {
  VAR_23 = VAR_7;
  for (VAR_21 = 0; VAR_21 < VAR_13 / 8; VAR_21++, VAR_23++) {
   VAR_20 = 0;
   VAR_19 = FUNC_7(VAR_23);
   for (VAR_22 = 7; VAR_22 >= 0; VAR_22--) {
    VAR_20 = VAR_20 << 8;
    VAR_20 |= FUNC_11((VAR_18 + VAR_22)->mr_flags,
        VAR_19 >> (VAR_22 * 8));
   }
   FUNC_10(VAR_23, VAR_20);
   VAR_18 += 8;
  }
  VAR_23 = VAR_5;
  for (VAR_21 = 0; VAR_21 < VAR_11 / 8; VAR_21++, VAR_23++) {
   VAR_20 = 0;
   VAR_19 = FUNC_7(VAR_23);
   for (VAR_22 = 7; VAR_22 >= 0; VAR_22--) {
    VAR_20 = VAR_20 << 8;
    VAR_20 |= FUNC_11((VAR_18 + VAR_22)->mr_flags,
        VAR_19 >> (VAR_22 * 8));
   }
   FUNC_10(VAR_23, VAR_20);
   VAR_18 += 8;
  }
  VAR_23 = VAR_6;
  for (VAR_21 = 0; VAR_21 < VAR_12 / 8; VAR_21++, VAR_23++) {
   VAR_20 = 0;
   VAR_19 = FUNC_7(VAR_23);
   for (VAR_22 = 7; VAR_22 >= 0; VAR_22--) {
    VAR_20 = VAR_20 << 8;
    VAR_20 |= FUNC_11((VAR_18 + VAR_22)->mr_flags,
        VAR_19 >> (VAR_22 * 8));
   }
   FUNC_10(VAR_23, VAR_20);
   VAR_18 += 8;
  }
 }


 VAR_23 = VAR_8;
 for (; VAR_18 - VAR_17->mr_desc < VAR_17->mr_ndesc; VAR_23 += 2, VAR_18++) {

  VAR_19 = FUNC_7(VAR_23);
  if (VAR_18->mr_flags & VAR_3) {
   VAR_20 = VAR_18->mr_base & VAR_15;
   VAR_20 |= FUNC_11(VAR_18->mr_flags, VAR_19);
  } else {
   VAR_20 = 0;
  }
  FUNC_10(VAR_23, VAR_20);


  if (VAR_18->mr_flags & VAR_3) {
   VAR_20 = VAR_14 |
       FUNC_8(VAR_15, VAR_18->mr_len);
  } else {
   VAR_20 = 0;
  }
  FUNC_10(VAR_23 + 1, VAR_20);
 }


 FUNC_9();
 FUNC_2();


 FUNC_10(VAR_9, FUNC_7(VAR_9) | VAR_10);


 FUNC_3(VAR_24);
 FUNC_4(VAR_25);

 FUNC_1();
}
