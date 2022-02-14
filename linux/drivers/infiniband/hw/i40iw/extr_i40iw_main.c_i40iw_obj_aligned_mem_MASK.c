
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef long u32 ;
struct i40iw_dma_mem {long size; scalar_t__ va; scalar_t__ pa; } ;
struct TYPE_4__ {scalar_t__ va; scalar_t__ pa; } ;
struct TYPE_3__ {scalar_t__ va; scalar_t__ size; } ;
struct i40iw_device {TYPE_2__ obj_next; TYPE_1__ obj_mem; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 unsigned long FUNC_0 (unsigned long,long) ;
 int VAR_0 ;

enum i40iw_status_code FUNC_1(struct i40iw_device *VAR_1,
          struct i40iw_dma_mem *VAR_2,
          u32 VAR_3,
          u32 VAR_4)
{
 unsigned long VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_5 = (unsigned long)VAR_1->obj_next.va;
 VAR_6 = VAR_5;
 if (VAR_4)
  VAR_6 = FUNC_0(VAR_5, (VAR_4 + 1));
 VAR_7 = VAR_6 - VAR_5;
 VAR_2->va = (u8 *)VAR_5 + VAR_7;
 VAR_2->pa = VAR_1->obj_next.pa + VAR_7;
 VAR_2->size = VAR_3;
 if ((VAR_2->va + VAR_3) > (VAR_1->obj_mem.va + VAR_1->obj_mem.size))
  return VAR_0;

 VAR_1->obj_next.va = VAR_2->va + VAR_3;
 VAR_1->obj_next.pa = VAR_2->pa + VAR_3;
 return 0;
}
