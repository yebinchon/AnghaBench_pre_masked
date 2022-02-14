
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmem_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
struct TYPE_2__ {int * vmd_kernel_arena; int * vmd_kernel_rwx_arena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int,int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static vm_offset_t
FUNC_5(int VAR_5, vm_size_t VAR_6, int VAR_7)
{
 vmem_t *VAR_8;
 vm_offset_t VAR_9;
 int VAR_10;







 VAR_8 = VAR_4[VAR_5].vmd_kernel_arena;

 VAR_6 = FUNC_2(VAR_6);
 if (FUNC_3(VAR_8, VAR_6, VAR_7 | VAR_1, &VAR_9))
  return (0);

 VAR_10 = FUNC_1(VAR_5, VAR_3, VAR_9, VAR_6, VAR_7);
 if (VAR_10 != VAR_0) {
  FUNC_4(VAR_8, VAR_9, VAR_6);
  return (0);
 }
 return (VAR_9);
}
