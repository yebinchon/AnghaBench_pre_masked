
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {int* cond_exe_cpu_addr; } ;



__attribute__((used)) static inline void FUNC_0(struct amdgpu_ring *VAR_0,
       bool VAR_1)
{
 *VAR_0->cond_exe_cpu_addr = VAR_1;
}
