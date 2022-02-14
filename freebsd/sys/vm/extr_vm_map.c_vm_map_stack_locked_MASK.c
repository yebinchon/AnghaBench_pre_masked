
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct TYPE_10__ {int p_flag2; int p_fctl0; } ;
struct TYPE_9__ {scalar_t__ next_read; } ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ end; int eflags; scalar_t__ next_read; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_7__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 TYPE_5__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int ,scalar_t__,scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(vm_map_t VAR_17, vm_offset_t VAR_18, vm_size_t VAR_19,
    vm_size_t VAR_20, vm_prot_t VAR_21, vm_prot_t VAR_22, int VAR_23)
{
 vm_map_entry_t VAR_24, VAR_25;
 vm_offset_t VAR_26, VAR_27, VAR_28, VAR_29;
 vm_size_t VAR_30, VAR_31;
 int VAR_32, VAR_33;






 VAR_32 = VAR_23 & (VAR_9 | VAR_10);
 FUNC_0(VAR_32 != 0, ("No stack grow direction"));
 FUNC_0(VAR_32 != (VAR_9 | VAR_10),
     ("bi-dir stack"));

 if (VAR_18 < FUNC_7(VAR_17) ||
     VAR_18 + VAR_19 > FUNC_6(VAR_17) ||
     VAR_18 + VAR_19 <= VAR_18)
  return (VAR_0);
 VAR_31 = ((VAR_15->p_flag2 & VAR_12) != 0 ||
     (VAR_15->p_fctl0 & VAR_11) != 0) ? 0 :
     (vm_size_t)VAR_16 * VAR_13;
 if (VAR_31 >= VAR_19)
  return (VAR_1);

 VAR_30 = VAR_20;
 if (VAR_19 < VAR_30 + VAR_31)
  VAR_30 = VAR_19 - VAR_31;


 if (FUNC_5(VAR_17, VAR_18, &VAR_25))
  return (VAR_2);




 if (FUNC_3(VAR_25)->start < VAR_18 + VAR_19)
  return (VAR_2);
 if (VAR_32 == VAR_9) {
  VAR_26 = VAR_18 + VAR_19 - VAR_30;
  VAR_29 = VAR_26 + VAR_30;
  VAR_27 = VAR_18;
  VAR_28 = VAR_26;
 } else {
  VAR_26 = VAR_18;
  VAR_29 = VAR_26 + VAR_30;
  VAR_27 = VAR_29;
  VAR_28 = VAR_18 + VAR_19;
 }
 VAR_33 = FUNC_4(VAR_17, ((void*)0), 0, VAR_26, VAR_29, VAR_21, VAR_22, VAR_23);
 if (VAR_33 != VAR_3)
  return (VAR_33);
 VAR_24 = FUNC_3(VAR_25);
 FUNC_0(VAR_24->end == VAR_29 || VAR_24->start == VAR_26,
     ("Bad entry start/end for new stack entry"));
 FUNC_0((VAR_32 & VAR_9) == 0 ||
     (VAR_24->eflags & VAR_7) != 0,
     ("new entry lacks MAP_ENTRY_GROWS_DOWN"));
 FUNC_0((VAR_32 & VAR_10) == 0 ||
     (VAR_24->eflags & VAR_8) != 0,
     ("new entry lacks MAP_ENTRY_GROWS_UP"));
 if (VAR_27 == VAR_28)
  return (VAR_3);
 VAR_33 = FUNC_4(VAR_17, ((void*)0), 0, VAR_27, VAR_28, VAR_14,
     VAR_14, VAR_4 | (VAR_32 == VAR_9 ?
     VAR_5 : VAR_6));
 if (VAR_33 == VAR_3) {






  if (VAR_32 == VAR_9)
   FUNC_2(VAR_24)->next_read = VAR_31;
  else
   FUNC_3(VAR_24)->next_read = VAR_31;
 } else {
  (void)FUNC_1(VAR_17, VAR_26, VAR_29);
 }
 return (VAR_33);
}
