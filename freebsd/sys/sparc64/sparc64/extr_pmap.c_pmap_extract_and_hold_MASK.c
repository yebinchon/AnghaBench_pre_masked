
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int * vm_page_t ;
typedef int vm_offset_t ;
struct tte {int tte_data; } ;
typedef scalar_t__ pmap_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tte*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct tte* FUNC_5 (int ) ;
 struct tte* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;

vm_page_t
FUNC_8(pmap_t VAR_5, vm_offset_t VAR_6, vm_prot_t VAR_7)
{
 struct tte *VAR_8;
 vm_page_t VAR_9;

 VAR_9 = ((void*)0);
 FUNC_1(VAR_5);
 if (VAR_5 == VAR_4) {
  if (VAR_6 >= VAR_2) {
   VAR_8 = ((void*)0);
   VAR_9 = FUNC_0(FUNC_3(VAR_6));
   if (!FUNC_7(VAR_9))
    VAR_9 = ((void*)0);
  } else {
   VAR_8 = FUNC_5(VAR_6);
   if ((VAR_8->tte_data & VAR_1) == 0)
    VAR_8 = ((void*)0);
  }
 } else
  VAR_8 = FUNC_6(VAR_5, VAR_6);
 if (VAR_8 != ((void*)0) && ((VAR_8->tte_data & VAR_0) ||
     (VAR_7 & VAR_3) == 0)) {
  VAR_9 = FUNC_0(FUNC_4(VAR_8));
  if (!FUNC_7(VAR_9))
   VAR_9 = ((void*)0);
 }
 FUNC_2(VAR_5);
 return (VAR_9);
}
