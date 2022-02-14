
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct amdgpu_sa_manager {unsigned int size; int cpu_ptr; int gpu_addr; int * bo; int * flist; int olist; int * hole; void* align; void* domain; int wq; } ;
struct amdgpu_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*,unsigned int,void*,void*,int **,int *,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,unsigned int) ;

int FUNC_5(struct amdgpu_device *VAR_1,
         struct amdgpu_sa_manager *VAR_2,
         unsigned VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_3(&VAR_2->wq);
 VAR_2->bo = ((void*)0);
 VAR_2->size = VAR_3;
 VAR_2->domain = VAR_5;
 VAR_2->align = VAR_4;
 VAR_2->hole = &VAR_2->olist;
 FUNC_0(&VAR_2->olist);
 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  FUNC_0(&VAR_2->flist[VAR_6]);

 VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, &VAR_2->bo,
    &VAR_2->gpu_addr, &VAR_2->cpu_ptr);
 if (VAR_7) {
  FUNC_2(VAR_1->dev, "(%d) failed to allocate bo for manager\n", VAR_7);
  return VAR_7;
 }

 FUNC_4(VAR_2->cpu_ptr, 0, VAR_2->size);
 return VAR_7;
}
