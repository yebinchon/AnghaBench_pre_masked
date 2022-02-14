
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pn_t ;
typedef int pd_entry_t ;
struct TYPE_8__ {int system_mtx; } ;
struct TYPE_7__ {int flags; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_1__* FUNC_13 (int *,int,int) ;

void
FUNC_14(vm_offset_t VAR_17)
{
 vm_paddr_t VAR_18;
 vm_page_t VAR_19;
 pd_entry_t *VAR_20, *VAR_21;
 pt_entry_t VAR_22;
 pn_t VAR_23;

 FUNC_1(&VAR_14->system_mtx, VAR_4);

 VAR_17 = FUNC_11(VAR_17, VAR_3);
 if (VAR_17 - 1 >= FUNC_12(VAR_14))
  VAR_17 = FUNC_12(VAR_14);
 while (VAR_16 < VAR_17) {
  VAR_20 = FUNC_5(VAR_15, VAR_16);
  if (FUNC_8(VAR_20) == 0) {

   VAR_19 = FUNC_13(((void*)0), VAR_16 >> VAR_0,
       VAR_10 | VAR_11 |
       VAR_12 | VAR_13);
   if (VAR_19 == ((void*)0))
    FUNC_2("pmap_growkernel: no memory to grow kernel");
   if ((VAR_19->flags & VAR_6) == 0)
    FUNC_10(VAR_19);
   VAR_18 = FUNC_0(VAR_19);

   VAR_23 = (VAR_18 / VAR_5);
   VAR_22 = (VAR_9);
   VAR_22 |= (VAR_23 << VAR_7);
   FUNC_9(VAR_20, VAR_22);
   FUNC_3(VAR_15,
       FUNC_6(VAR_16), VAR_22);
   continue;
  }
  VAR_21 = FUNC_7(VAR_20, VAR_16);
  if ((FUNC_8(VAR_21) & VAR_9) != 0 &&
      (FUNC_8(VAR_21) & VAR_8) == 0) {
   VAR_16 = (VAR_16 + VAR_3) & ~VAR_1;
   if (VAR_16 - 1 >= FUNC_12(VAR_14)) {
    VAR_16 = FUNC_12(VAR_14);
    break;
   }
   continue;
  }

  VAR_19 = FUNC_13(((void*)0), VAR_16 >> VAR_2,
      VAR_10 | VAR_11 | VAR_12 |
      VAR_13);
  if (VAR_19 == ((void*)0))
   FUNC_2("pmap_growkernel: no memory to grow kernel");
  if ((VAR_19->flags & VAR_6) == 0) {
   FUNC_10(VAR_19);
  }
  VAR_18 = FUNC_0(VAR_19);

  VAR_23 = (VAR_18 / VAR_5);
  VAR_22 = (VAR_9);
  VAR_22 |= (VAR_23 << VAR_7);
  FUNC_9(VAR_21, VAR_22);

  FUNC_4(VAR_15, VAR_16);

  VAR_16 = (VAR_16 + VAR_3) & ~VAR_1;
  if (VAR_16 - 1 >= FUNC_12(VAR_14)) {
   VAR_16 = FUNC_12(VAR_14);
   break;
  }
 }
}
