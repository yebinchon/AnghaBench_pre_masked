
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ asic_type; int last_mm_index; int rio_mem_size; scalar_t__ rio_mem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2(struct amdgpu_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_3->asic_type >= VAR_0 && VAR_4 == 0) {
  VAR_3->last_mm_index = VAR_5;
 }

 if ((VAR_4 * 4) < VAR_3->rio_mem_size)
  FUNC_0(VAR_5, VAR_3->rio_mem + (VAR_4 * 4));
 else {
  FUNC_0((VAR_4 * 4), VAR_3->rio_mem + (VAR_2 * 4));
  FUNC_0(VAR_5, VAR_3->rio_mem + (VAR_1 * 4));
 }

 if (VAR_3->asic_type >= VAR_0 && VAR_4 == 1 && VAR_3->last_mm_index == 0x5702C) {
  FUNC_1(500);
 }
}
