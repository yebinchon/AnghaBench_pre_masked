
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int rio_mem_size; scalar_t__ rio_mem; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

u32 FUNC_2(struct amdgpu_device *VAR_2, u32 VAR_3)
{
 if ((VAR_3 * 4) < VAR_2->rio_mem_size)
  return FUNC_0(VAR_2->rio_mem + (VAR_3 * 4));
 else {
  FUNC_1((VAR_3 * 4), VAR_2->rio_mem + (VAR_1 * 4));
  return FUNC_0(VAR_2->rio_mem + (VAR_0 * 4));
 }
}
