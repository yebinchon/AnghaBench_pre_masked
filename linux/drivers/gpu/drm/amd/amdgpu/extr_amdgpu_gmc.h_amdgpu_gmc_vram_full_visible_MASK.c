
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_gmc {scalar_t__ real_vram_size; scalar_t__ visible_vram_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct amdgpu_gmc *VAR_0)
{
 FUNC_0(VAR_0->real_vram_size < VAR_0->visible_vram_size);

 return (VAR_0->real_vram_size == VAR_0->visible_vram_size);
}
