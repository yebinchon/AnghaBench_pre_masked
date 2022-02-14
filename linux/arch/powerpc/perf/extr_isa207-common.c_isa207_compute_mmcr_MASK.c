
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ exclude_kernel; scalar_t__ exclude_hv; scalar_t__ exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 int VAR_23 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (unsigned int) ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 unsigned long FUNC_5 (int) ;
 unsigned long FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned long FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int,unsigned long*) ;
 unsigned long FUNC_12 (unsigned long) ;

int FUNC_13(u64 VAR_30[], int VAR_31,
          unsigned int VAR_32[], unsigned long VAR_33[],
          struct perf_event *VAR_34[])
{
 unsigned long VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 unsigned int VAR_43, VAR_44;
 int VAR_45;

 VAR_44 = 0;


 for (VAR_45 = 0; VAR_45 < VAR_31; ++VAR_45) {
  VAR_43 = (VAR_30[VAR_45] >> VAR_6) & VAR_5;
  if (VAR_43)
   VAR_44 |= 1 << VAR_43;
 }

 VAR_35 = VAR_36 = VAR_37 = 0;


 for (VAR_45 = 0; VAR_45 < VAR_31; ++VAR_45) {
  VAR_43 = (VAR_30[VAR_45] >> VAR_6) & VAR_5;
  VAR_38 = (VAR_30[VAR_45] >> VAR_17) & VAR_16;
  VAR_39 = FUNC_5(VAR_30[VAR_45]);
  VAR_40 = VAR_30[VAR_45] & VAR_7;

  if (!VAR_43) {
   for (VAR_43 = 1; VAR_43 <= 4; ++VAR_43) {
    if (!(VAR_44 & (1 << VAR_43)))
     break;
   }

   VAR_44 |= 1 << VAR_43;
  }

  if (VAR_43 <= 4) {
   VAR_36 |= VAR_38 << FUNC_1(VAR_43);
   VAR_36 |= VAR_39 << FUNC_6(VAR_43);
   VAR_36 |= VAR_40 << FUNC_0(VAR_43);
  }


  FUNC_11(VAR_30[VAR_45], &VAR_35);

  if (FUNC_7(VAR_0)) {
   VAR_41 = FUNC_8(VAR_30[VAR_45]);
   VAR_36 |= (VAR_41) << VAR_22;
  } else {
   if (VAR_30[VAR_45] & VAR_4) {
    VAR_41 = FUNC_8(VAR_30[VAR_45]);
    VAR_36 |= (VAR_41) << VAR_22;
   }
  }

  if (FUNC_10(VAR_30[VAR_45])) {
   VAR_35 |= VAR_25;

   VAR_42 = (VAR_30[VAR_45] >> VAR_9) & VAR_8;
   if (VAR_42) {
    VAR_35 |= (VAR_42 & 3) << VAR_27;
    VAR_35 |= (VAR_42 >> 2) << VAR_26;
   }
  }





  if (!FUNC_7(VAR_0) && FUNC_9(VAR_30[VAR_45])) {
   VAR_36 |= ((VAR_30[VAR_45] >> VAR_13) &
      VAR_12) << VAR_23;
  } else {
   VAR_42 = (VAR_30[VAR_45] >> VAR_13) & VAR_12;
   VAR_35 |= VAR_42 << VAR_28;
   VAR_42 = (VAR_30[VAR_45] >> VAR_15) & VAR_14;
   VAR_35 |= VAR_42 << VAR_29;
   VAR_42 = (VAR_30[VAR_45] >> VAR_11) & VAR_10;
   VAR_35 |= FUNC_12(VAR_42);
  }

  if (VAR_30[VAR_45] & VAR_18) {
   VAR_42 = (VAR_30[VAR_45] >> VAR_3) & VAR_2;
   VAR_35 |= VAR_42 << VAR_24;
  }

  if (VAR_34[VAR_45]->attr.exclude_user)
   VAR_37 |= FUNC_3(VAR_43);

  if (VAR_34[VAR_45]->attr.exclude_hv)
   VAR_37 |= FUNC_2(VAR_43);

  if (VAR_34[VAR_45]->attr.exclude_kernel) {
   if (FUNC_7(VAR_1))
    VAR_37 |= FUNC_2(VAR_43);
   else
    VAR_37 |= FUNC_4(VAR_43);
  }

  VAR_32[VAR_45] = VAR_43 - 1;
 }


 VAR_33[0] = 0;


 if (VAR_44 & 2)
  VAR_33[0] = VAR_20;

 if (VAR_44 & 0x7c)
  VAR_33[0] |= VAR_21;


 if (!(VAR_44 & 0x60))
  VAR_33[0] |= VAR_19;

 VAR_33[1] = VAR_36;
 VAR_33[2] = VAR_35;
 VAR_33[3] = VAR_37;

 return 0;
}
