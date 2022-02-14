
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_wb; char used; scalar_t__ wb; int gpu_addr; int * wb_obj; } ;
struct amdgpu_device {TYPE_1__ wb; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int **,int *,void**) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->wb.wb_obj == ((void*)0)) {

  VAR_4 = FUNC_0(VAR_3, VAR_1 * sizeof(uint32_t) * 8,
         VAR_2, VAR_0,
         &VAR_3->wb.wb_obj, &VAR_3->wb.gpu_addr,
         (void **)&VAR_3->wb.wb);
  if (VAR_4) {
   FUNC_1(VAR_3->dev, "(%d) create WB bo failed\n", VAR_4);
   return VAR_4;
  }

  VAR_3->wb.num_wb = VAR_1;
  FUNC_2(&VAR_3->wb.used, 0, sizeof(VAR_3->wb.used));


  FUNC_2((char *)VAR_3->wb.wb, 0, VAR_1 * sizeof(uint32_t) * 8);
 }

 return 0;
}
