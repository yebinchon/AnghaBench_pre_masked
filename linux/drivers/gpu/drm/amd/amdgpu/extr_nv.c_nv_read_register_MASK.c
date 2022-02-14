
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ u32 ;
struct soc15_allowed_register_entry {size_t hwip; size_t inst; size_t seg; scalar_t__ reg_offset; int grbm_indexed; } ;
struct amdgpu_device {scalar_t__*** reg_offset; } ;


 size_t FUNC_0 (struct soc15_allowed_register_entry*) ;
 int VAR_0 ;
 struct soc15_allowed_register_entry* VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2, u32 VAR_3,
       u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{
 uint32_t VAR_7;
 struct soc15_allowed_register_entry *VAR_8;

 *VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  VAR_8 = &VAR_1[VAR_7];
  if (VAR_5 !=
      (VAR_2->reg_offset[VAR_8->hwip][VAR_8->inst][VAR_8->seg] + VAR_8->reg_offset))
   continue;

  *VAR_6 = FUNC_1(VAR_2,
            VAR_1[VAR_7].grbm_indexed,
            VAR_3, VAR_4, VAR_5);
  return 0;
 }
 return -VAR_0;
}
