
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ rio_mem_size; scalar_t__ rio_mem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(struct radeon_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (VAR_3 < VAR_2->rio_mem_size)
  FUNC_0(VAR_4, VAR_2->rio_mem + VAR_3);
 else {
  FUNC_0(VAR_3, VAR_2->rio_mem + VAR_1);
  FUNC_0(VAR_4, VAR_2->rio_mem + VAR_0);
 }
}
