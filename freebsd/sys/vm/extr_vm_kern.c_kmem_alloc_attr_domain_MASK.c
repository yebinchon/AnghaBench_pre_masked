
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vmem_t ;
typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_memattr_t ;
struct TYPE_8__ {int * vmd_kernel_arena; } ;
struct TYPE_7__ {int flags; int valid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,scalar_t__,TYPE_1__*,int,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_4__* VAR_19 ;
 TYPE_1__* FUNC_9 (int ,int ,int,int,int,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int,int,int,int ,int ,scalar_t__,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *,scalar_t__,int,scalar_t__*) ;
 int FUNC_14 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static vm_offset_t
FUNC_15(int VAR_20, vm_size_t VAR_21, int VAR_22, vm_paddr_t VAR_23,
    vm_paddr_t VAR_24, vm_memattr_t VAR_25)
{
 vmem_t *VAR_26;
 vm_object_t VAR_27 = VAR_17;
 vm_offset_t VAR_28, VAR_29, VAR_30;
 vm_page_t VAR_31;
 int VAR_32, VAR_33;
 vm_prot_t VAR_34;

 VAR_21 = FUNC_8(VAR_21);
 VAR_26 = VAR_19[VAR_20].vmd_kernel_arena;
 if (FUNC_13(VAR_26, VAR_21, VAR_0 | VAR_22, &VAR_28))
  return (0);
 VAR_30 = VAR_28 - VAR_13;
 VAR_32 = FUNC_5(VAR_22) | VAR_8 | VAR_12;
 VAR_32 &= ~(VAR_9 | VAR_11 | VAR_10);
 VAR_32 |= VAR_9;
 VAR_34 = (VAR_22 & VAR_1) != 0 ? VAR_15 : VAR_16;
 FUNC_1(VAR_27);
 for (VAR_29 = 0; VAR_29 < VAR_21; VAR_29 += VAR_5) {
  VAR_33 = 0;
retry:
  VAR_31 = FUNC_9(VAR_27, FUNC_3(VAR_30 + VAR_29),
      VAR_20, VAR_32, 1, VAR_23, VAR_24, VAR_5, 0, VAR_25);
  if (VAR_31 == ((void*)0)) {
   FUNC_2(VAR_27);
   if (VAR_33 < ((VAR_22 & VAR_2) != 0 ? 1 : 3)) {
    if (!FUNC_10(VAR_20,
        VAR_32, 1, VAR_23, VAR_24, VAR_5, 0) &&
        (VAR_22 & VAR_3) != 0)
     FUNC_12(VAR_20);
    FUNC_1(VAR_27);
    VAR_33++;
    goto retry;
   }
   FUNC_4(VAR_27, VAR_28, VAR_29);
   FUNC_14(VAR_26, VAR_28, VAR_21);
   return (0);
  }
  FUNC_0(FUNC_11(VAR_31) == VAR_20,
      ("kmem_alloc_attr_domain: Domain mismatch %d != %d",
      FUNC_11(VAR_31), VAR_20));
  if ((VAR_22 & VAR_4) && (VAR_31->flags & VAR_6) == 0)
   FUNC_7(VAR_31);
  VAR_31->valid = VAR_14;
  FUNC_6(VAR_18, VAR_28 + VAR_29, VAR_31, VAR_34,
      VAR_34 | VAR_7, 0);
 }
 FUNC_2(VAR_27);
 return (VAR_28);
}
