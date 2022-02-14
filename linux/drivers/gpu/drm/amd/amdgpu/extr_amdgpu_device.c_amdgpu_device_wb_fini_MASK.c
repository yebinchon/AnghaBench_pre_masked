
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wb_obj; int wb; int gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int **,int *,void**) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 if (VAR_0->wb.wb_obj) {
  FUNC_0(&VAR_0->wb.wb_obj,
          &VAR_0->wb.gpu_addr,
          (void **)&VAR_0->wb.wb);
  VAR_0->wb.wb_obj = ((void*)0);
 }
}
