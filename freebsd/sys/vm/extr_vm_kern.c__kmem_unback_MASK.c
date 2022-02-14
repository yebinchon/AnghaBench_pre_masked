
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_object_t ;
struct vmem {int dummy; } ;
struct TYPE_10__ {struct vmem* vmd_kernel_arena; struct vmem* vmd_kernel_rwx_arena; } ;
struct TYPE_9__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 TYPE_8__* VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (scalar_t__,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static struct vmem *
FUNC_11(vm_object_t VAR_6, vm_offset_t VAR_7, vm_size_t VAR_8)
{
 struct vmem *VAR_9;
 vm_page_t VAR_10, VAR_11;
 vm_offset_t VAR_12, VAR_13;
 int VAR_14;

 FUNC_0(VAR_6 == VAR_3,
     ("kmem_unback: only supports kernel object."));

 if (VAR_8 == 0)
  return (((void*)0));
 FUNC_5(VAR_4, VAR_7, VAR_7 + VAR_8);
 VAR_13 = VAR_7 - VAR_1;
 VAR_12 = VAR_13 + VAR_8;
 FUNC_1(VAR_6);
 VAR_10 = FUNC_7(VAR_6, FUNC_4(VAR_13));
 VAR_14 = FUNC_10(VAR_10);






 VAR_9 = VAR_5[VAR_14].vmd_kernel_arena;

 for (; VAR_13 < VAR_12; VAR_13 += VAR_0, VAR_10 = VAR_11) {
  VAR_11 = FUNC_8(VAR_10);
  FUNC_9(VAR_10);
  FUNC_6(VAR_10);
 }
 FUNC_2(VAR_6);

 return (VAR_9);
}
