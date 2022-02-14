
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {unsigned int wptr; unsigned int buf_mask; int cond_exe_gpu_addr; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned FUNC_4(struct amdgpu_ring *VAR_1)
{
 unsigned VAR_2;

 FUNC_1(VAR_1, FUNC_0(VAR_0, 3));
 FUNC_1(VAR_1, FUNC_2(VAR_1->cond_exe_gpu_addr));
 FUNC_1(VAR_1, FUNC_3(VAR_1->cond_exe_gpu_addr));
 FUNC_1(VAR_1, 0);
 VAR_2 = VAR_1->wptr & VAR_1->buf_mask;
 FUNC_1(VAR_1, 0x55aa55aa);
 return VAR_2;
}
