
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
struct TYPE_13__ {int flags; } ;


 int FUNC_0 (int,char*) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

vm_page_t
FUNC_13(vm_object_t VAR_11, vm_pindex_t VAR_12, int VAR_13)
{
 vm_page_t VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_1(VAR_11);
 FUNC_0((VAR_13 & VAR_6) == 0 ||
     (VAR_13 & VAR_2) != 0,
     ("vm_page_grab: VM_ALLOC_SBUSY/VM_ALLOC_IGN_SBUSY mismatch"));
 VAR_16 = VAR_13 &
     ~(VAR_5 | VAR_8 | VAR_7 |
     VAR_3);
 if ((VAR_13 & VAR_5) == 0)
  VAR_16 |= VAR_7;
 if ((VAR_13 & VAR_2) != 0)
  VAR_16 |= VAR_6;
retrylookup:
 if ((VAR_14 = FUNC_7(VAR_11, VAR_12)) != ((void*)0)) {
  if ((VAR_13 & (VAR_2 | VAR_6)) != 0)
   VAR_15 = !FUNC_9(VAR_14);
  else
   VAR_15 = !FUNC_10(VAR_14);
  if (VAR_15) {
   if ((VAR_13 & VAR_5) != 0)
    return (((void*)0));





   if ((VAR_13 & VAR_4) == 0)
    FUNC_4(VAR_14, VAR_0);
   FUNC_6(VAR_14, "pgrbwt", (VAR_13 &
       VAR_2) != 0);
   FUNC_2(VAR_11);
   if ((VAR_13 & VAR_7) != 0)
    return (((void*)0));
   goto retrylookup;
  } else {
   if ((VAR_13 & VAR_9) != 0)
    FUNC_11(VAR_14);
   goto out;
  }
 }
 if ((VAR_13 & VAR_4) != 0)
  return (((void*)0));
 VAR_14 = FUNC_5(VAR_11, VAR_12, VAR_16);
 if (VAR_14 == ((void*)0)) {
  if ((VAR_13 & VAR_5) != 0)
   return (((void*)0));
  goto retrylookup;
 }
 if (VAR_13 & VAR_10 && (VAR_14->flags & VAR_1) == 0)
  FUNC_3(VAR_14);

out:
 if ((VAR_13 & VAR_3) != 0) {
  if ((VAR_13 & VAR_2) != 0)
   FUNC_8(VAR_14);
  else
   FUNC_12(VAR_14);
 }
 return (VAR_14);
}
