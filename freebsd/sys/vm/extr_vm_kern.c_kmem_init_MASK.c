
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vmem_release_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
struct vm_page {int dummy; } ;
struct TYPE_9__ {int * vmd_kernel_rwx_arena; int * vmd_kernel_arena; } ;
struct TYPE_8__ {int system_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_6__* VAR_13 ;
 TYPE_1__* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,int ,scalar_t__,scalar_t__,int ,int ,int ,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 void* FUNC_5 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,char*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int *,int *,int ) ;
 scalar_t__ VAR_17 ;

void
FUNC_8(vm_offset_t VAR_18, vm_offset_t VAR_19)
{
 vm_map_t VAR_20;
 int VAR_21;

 VAR_20 = FUNC_1(VAR_10, VAR_5, VAR_19);
 VAR_20->system_map = 1;
 FUNC_3(VAR_20);

 VAR_9 = VAR_20;
 (void)FUNC_2(VAR_20, ((void*)0), 0,

     VAR_0,



     VAR_18, VAR_6, VAR_6, VAR_2);
 (void)FUNC_2(VAR_20, ((void*)0), 0, (vm_offset_t)VAR_15,
     (vm_offset_t)VAR_15 + FUNC_0(VAR_16 *
     sizeof(struct vm_page)),
     VAR_7, VAR_7, VAR_2);

 FUNC_4(VAR_20);




 FUNC_6(VAR_8, "kernel arena", 0, 0, VAR_4, 0, 0);
 FUNC_7(VAR_8, VAR_11, ((void*)0), ((void*)0), VAR_1);

 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {






  VAR_13[VAR_21].vmd_kernel_arena = FUNC_5(
      "kernel arena domain", 0, 0, VAR_4, 0, VAR_3);
  FUNC_7(VAR_13[VAR_21].vmd_kernel_arena,
      VAR_12, ((void*)0), VAR_8, VAR_1);
 }
}
