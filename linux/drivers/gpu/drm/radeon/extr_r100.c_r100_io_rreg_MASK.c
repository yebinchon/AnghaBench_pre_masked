
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ rio_mem_size; scalar_t__ rio_mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

u32 FUNC_2(struct radeon_device *VAR_2, u32 VAR_3)
{
 if (VAR_3 < VAR_2->rio_mem_size)
  return FUNC_0(VAR_2->rio_mem + VAR_3);
 else {
  FUNC_1(VAR_3, VAR_2->rio_mem + VAR_1);
  return FUNC_0(VAR_2->rio_mem + VAR_0);
 }
}
