
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_t ;
struct TYPE_17__ {int flags; int anon_loc; } ;
struct TYPE_16__ {int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 () ;
 int* VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 int* VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ,int*,int,int,int) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ,int,int,int ,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int,int,int ,int ,int ,int) ;
 int FUNC_13 (TYPE_2__*) ;

int
FUNC_14(vm_map_t VAR_23, vm_object_t VAR_24, vm_ooffset_t VAR_25,
     vm_offset_t *VAR_26,
     vm_size_t VAR_27, vm_offset_t VAR_28, int VAR_29,
     vm_prot_t VAR_30, vm_prot_t VAR_31, int VAR_32)
{
 vm_offset_t VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 bool VAR_40, VAR_41, VAR_42;

 FUNC_0((VAR_32 & (VAR_9 | VAR_10)) == 0 ||
     VAR_24 == ((void*)0),
     ("vm_map_find: non-NULL backing object for stack"));
 FUNC_1((VAR_32 & VAR_8) == 0 || (VAR_29 == VAR_15 &&
     (VAR_32 & (VAR_9 | VAR_10)) == 0));
 if (VAR_29 == VAR_16 && (VAR_24 == ((void*)0) ||
     (VAR_24->flags & VAR_12) == 0))
  VAR_29 = VAR_14;
 if (VAR_29 >> 8 != 0) {
  FUNC_0((VAR_29 & 0xff) == 0, ("bad VMFS flags"));
  VAR_33 = (vm_offset_t)1 << (VAR_29 >> 8);
 } else
  VAR_33 = 0;
 VAR_41 = (VAR_23->flags & VAR_4) != 0;
 VAR_42 = VAR_40 = FUNC_4(*VAR_26) &&
     (VAR_23->flags & VAR_7) == 0 && VAR_28 == 0 &&
     VAR_29 != VAR_15 && VAR_24 == ((void*)0) &&
     (VAR_32 & (VAR_6 | VAR_10 |
     VAR_9)) == 0 && VAR_30 != VAR_13;
 VAR_34 = VAR_35 = *VAR_26;
 if (VAR_41 && VAR_35 == 0 && !VAR_40 &&
     VAR_29 != VAR_15 &&
     (VAR_23->flags & VAR_5) != 0)
  VAR_34 = VAR_35 = FUNC_11(VAR_23);
 VAR_39 = 0;
 FUNC_9(VAR_23);
 if (VAR_40) {
  VAR_34 = VAR_23->anon_loc;
  if (VAR_34 == 0)
   VAR_40 = 0;
 }
 if (VAR_29 != VAR_15) {
  FUNC_0(VAR_29 == VAR_14 ||
      VAR_29 == VAR_16 ||
      VAR_29 == VAR_17 ||
      VAR_33 != 0, ("unexpected VMFS flag"));
again:
  VAR_39++;
  FUNC_1(VAR_39 <= 2);

  if (VAR_39 == 2) {






   VAR_34 = (VAR_23->flags & VAR_5) != 0 ?
       FUNC_11(VAR_23) : VAR_35;
   FUNC_3(&VAR_20, 1);
  }

  if (VAR_39 == 1 && VAR_41 && !VAR_40) {




   VAR_37 = VAR_11 > 1 && VAR_21[1] != 0 &&
       (VAR_29 == VAR_17 || VAR_29 ==
       VAR_16) ? 1 : 0;
   VAR_36 = FUNC_10(VAR_23) > VAR_3 &&
       (VAR_28 == 0 || VAR_28 > VAR_3) ?
       VAR_19[VAR_37] : VAR_18[VAR_37];
   *VAR_26 = FUNC_7(VAR_23, VAR_34,
       VAR_27 + VAR_36 * VAR_21[VAR_37]);
   if (*VAR_26 + VAR_27 + VAR_36 * VAR_21[VAR_37] >
       FUNC_10(VAR_23))
    goto again;

   *VAR_26 += (FUNC_2() % VAR_36) * VAR_21[VAR_37];
   if (VAR_28 != 0 && *VAR_26 + VAR_27 > VAR_28)
    goto again;
  } else {
   *VAR_26 = FUNC_7(VAR_23, VAR_34, VAR_27);
   if (*VAR_26 + VAR_27 > FUNC_10(VAR_23) ||
       (VAR_28 != 0 && *VAR_26 + VAR_27 > VAR_28)) {
    if (VAR_40) {
     VAR_40 = 0;
     FUNC_1(VAR_39 == 1);
     goto again;
    }
    VAR_38 = VAR_1;
    goto done;
   }
  }

  if (VAR_29 != VAR_14 &&
      (VAR_38 = FUNC_5(VAR_23, VAR_24, VAR_25, VAR_26, VAR_27,
      VAR_28, VAR_33)) != VAR_2) {
   if (VAR_29 == VAR_16) {
    VAR_29 = VAR_14;
    VAR_34 = VAR_35;
    VAR_40 = VAR_42;
    VAR_39 = 0;
    goto again;
   }
   goto done;
  }
 } else if ((VAR_32 & VAR_8) != 0) {
  if (*VAR_26 < FUNC_11(VAR_23) ||
      *VAR_26 + VAR_27 > FUNC_10(VAR_23) ||
      *VAR_26 + VAR_27 <= VAR_27) {
   VAR_38 = VAR_0;
   goto done;
  }
  FUNC_6(VAR_23, *VAR_26, *VAR_26 + VAR_27);
 }
 if ((VAR_32 & (VAR_9 | VAR_10)) != 0) {
  VAR_38 = FUNC_12(VAR_23, *VAR_26, VAR_27, VAR_22, VAR_30,
      VAR_31, VAR_32);
 } else {
  VAR_38 = FUNC_8(VAR_23, VAR_24, VAR_25, *VAR_26, *VAR_26 + VAR_27,
      VAR_30, VAR_31, VAR_32);
 }
 if (VAR_38 == VAR_2 && VAR_42)
  VAR_23->anon_loc = *VAR_26 + VAR_27;
done:
 FUNC_13(VAR_23);
 return (VAR_38);
}
