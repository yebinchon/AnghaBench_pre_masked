
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int* FUNC_3 (int ,int) ;
 int* FUNC_4 (int*,int) ;
 int FUNC_5 (int*) ;

int
FUNC_6(pmap_t VAR_13, vm_offset_t VAR_14, vm_paddr_t *VAR_15)
{
 pt_entry_t *VAR_16, *VAR_17, VAR_18;
 vm_paddr_t VAR_19;
 int VAR_20;
 bool VAR_21;

 FUNC_0(VAR_13);
 VAR_16 = FUNC_3(VAR_13, VAR_14);
 if (VAR_16 != ((void*)0) && ((VAR_18 = FUNC_5(VAR_16)) & VAR_12) != 0) {
  if ((VAR_18 & VAR_10) != 0) {
   VAR_19 = FUNC_2(VAR_18) | (VAR_14 & VAR_0);
   VAR_20 = VAR_2 | VAR_7;
  } else {
   VAR_17 = FUNC_4(VAR_16, VAR_14);
   VAR_18 = FUNC_5(VAR_17);
   if ((VAR_18 & VAR_12) == 0) {
    FUNC_1(VAR_13);
    return (0);
   }
   VAR_19 = FUNC_2(VAR_18) | (VAR_14 & VAR_1);
   VAR_20 = VAR_2;
  }

  if ((VAR_18 & VAR_9) != 0)
   VAR_20 |= VAR_3 | VAR_4;
  if ((VAR_18 & VAR_8) != 0)
   VAR_20 |= VAR_5 | VAR_6;
  VAR_21 = (VAR_18 & VAR_11) == VAR_11;
 } else {
  VAR_21 = 0;
  VAR_20 = 0;
 }
 if ((VAR_20 & (VAR_4 | VAR_6)) !=
     (VAR_4 | VAR_6) && VAR_21) {
  *VAR_15 = VAR_19;
 }
 FUNC_1(VAR_13);
 return (VAR_20);
}
