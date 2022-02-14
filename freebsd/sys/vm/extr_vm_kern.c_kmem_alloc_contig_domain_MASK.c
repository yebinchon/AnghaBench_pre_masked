
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vmem_t ;
typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_object_t ;
typedef int vm_memattr_t ;
typedef int u_long ;
struct TYPE_8__ {int * vmd_kernel_arena; } ;
struct TYPE_7__ {int flags; int valid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__,TYPE_1__*,int,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_4__* VAR_17 ;
 TYPE_1__* FUNC_8 (int ,int,int,int,int,int ,int ,int,int ,int ) ;
 int FUNC_9 (int,int,int,int ,int ,int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,int,scalar_t__*) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static vm_offset_t
FUNC_14(int VAR_18, vm_size_t VAR_19, int VAR_20, vm_paddr_t VAR_21,
    vm_paddr_t VAR_22, u_long VAR_23, vm_paddr_t VAR_24,
    vm_memattr_t VAR_25)
{
 vmem_t *VAR_26;
 vm_object_t VAR_27 = VAR_15;
 vm_offset_t VAR_28, VAR_29, VAR_30;
 vm_page_t VAR_31, VAR_32;
 u_long VAR_33;
 int VAR_34, VAR_35;

 VAR_19 = FUNC_7(VAR_19);
 VAR_26 = VAR_17[VAR_18].vmd_kernel_arena;
 if (FUNC_12(VAR_26, VAR_19, VAR_20 | VAR_0, &VAR_28))
  return (0);
 VAR_29 = VAR_28 - VAR_12;
 VAR_34 = FUNC_4(VAR_20) | VAR_7 | VAR_11;
 VAR_34 &= ~(VAR_8 | VAR_10 | VAR_9);
 VAR_34 |= VAR_8;
 VAR_33 = FUNC_3(VAR_19);
 FUNC_1(VAR_27);
 VAR_35 = 0;
retry:
 VAR_32 = FUNC_8(VAR_27, FUNC_3(VAR_29), VAR_18, VAR_34,
     VAR_33, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);
 if (VAR_32 == ((void*)0)) {
  FUNC_2(VAR_27);
  if (VAR_35 < ((VAR_20 & VAR_1) != 0 ? 1 : 3)) {
   if (!FUNC_9(VAR_18, VAR_34,
       VAR_33, VAR_21, VAR_22, VAR_23, VAR_24) &&
       (VAR_20 & VAR_2) != 0)
    FUNC_11(VAR_18);
   FUNC_1(VAR_27);
   VAR_35++;
   goto retry;
  }
  FUNC_13(VAR_26, VAR_28, VAR_19);
  return (0);
 }
 FUNC_0(FUNC_10(VAR_32) == VAR_18,
     ("kmem_alloc_contig_domain: Domain mismatch %d != %d",
     FUNC_10(VAR_32), VAR_18));
 VAR_31 = VAR_32 + VAR_33;
 VAR_30 = VAR_28;
 for (; VAR_32 < VAR_31; VAR_32++) {
  if ((VAR_20 & VAR_3) && (VAR_32->flags & VAR_5) == 0)
   FUNC_6(VAR_32);
  VAR_32->valid = VAR_13;
  FUNC_5(VAR_16, VAR_30, VAR_32, VAR_14,
      VAR_14 | VAR_6, 0);
  VAR_30 += VAR_4;
 }
 FUNC_2(VAR_27);
 return (VAR_28);
}
