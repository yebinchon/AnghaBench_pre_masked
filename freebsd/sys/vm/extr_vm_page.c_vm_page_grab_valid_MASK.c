
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_object_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ,int **,int,int *,int *) ;
 scalar_t__ FUNC_20 (int ,int ,int *,int *) ;

int
FUNC_21(vm_page_t *VAR_12, vm_object_t VAR_13, vm_pindex_t VAR_14, int VAR_15)
{
 vm_page_t VAR_16;
 bool VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_0((VAR_15 & VAR_6) == 0 ||
     (VAR_15 & VAR_2) != 0,
     ("vm_page_grab_valid: VM_ALLOC_SBUSY/VM_ALLOC_IGN_SBUSY mismatch"));
 FUNC_0((VAR_15 &
     (VAR_5 | VAR_7 | VAR_9)) == 0,
     ("vm_page_grab_valid: Invalid flags 0x%X", VAR_15));
 FUNC_2(VAR_13);
 VAR_19 = VAR_15 & ~(VAR_3 | VAR_6);
 VAR_19 |= VAR_7;

retrylookup:
 VAR_18 = 0;
 if ((VAR_16 = FUNC_11(VAR_13, VAR_14)) != ((void*)0)) {
  if (!FUNC_5(VAR_16) ||
      (VAR_15 & (VAR_2 | VAR_6)) == 0) {
   VAR_17 = !FUNC_14(VAR_16);
   VAR_18 = 1;
  } else
   VAR_17 = !FUNC_13(VAR_16);
  if (VAR_17) {





   if ((VAR_15 & VAR_4) == 0)
    FUNC_4(VAR_16, VAR_0);
   FUNC_9(VAR_16, "pgrbwt", (VAR_15 &
       VAR_2) != 0);
   FUNC_3(VAR_13);
   goto retrylookup;
  }
  if ((VAR_15 & VAR_4) != 0 &&
     !FUNC_5(VAR_16)) {
   if (VAR_18)
    FUNC_17(VAR_16);
   else
    FUNC_12(VAR_16);
   *VAR_12 = ((void*)0);
   return (VAR_10);
  }
  if ((VAR_15 & VAR_8) != 0)
   FUNC_16(VAR_16);
  if (FUNC_5(VAR_16))
   goto out;
 } else if ((VAR_15 & VAR_4) != 0) {
  *VAR_12 = ((void*)0);
  return (VAR_10);
 } else if ((VAR_16 = FUNC_6(VAR_13, VAR_14, VAR_19)) != ((void*)0)) {
  VAR_18 = 1;
 } else {
  goto retrylookup;
 }

 FUNC_7(VAR_16);
 FUNC_1(VAR_18);
 if (FUNC_20(VAR_13, VAR_14, ((void*)0), ((void*)0))) {
  VAR_20 = FUNC_19(VAR_13, &VAR_16, 1, ((void*)0), ((void*)0));
  if (VAR_20 != VAR_11) {
   if (VAR_15 & VAR_8)
    FUNC_15(VAR_16);
   FUNC_10(VAR_16);
   *VAR_12 = ((void*)0);
   return (VAR_20);
  }
  FUNC_1(FUNC_5(VAR_16));
 } else {
  FUNC_18(VAR_16, VAR_1);
 }
out:
 if ((VAR_15 & VAR_3) != 0) {
  if (VAR_18)
   FUNC_17(VAR_16);
  else
   FUNC_12(VAR_16);
 }
 if ((VAR_15 & VAR_6) != 0 && VAR_18)
  FUNC_8(VAR_16);
 *VAR_12 = VAR_16;
 return (VAR_11);
}
