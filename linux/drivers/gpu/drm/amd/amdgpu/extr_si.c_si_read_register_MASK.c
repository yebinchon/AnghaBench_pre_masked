
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ u32 ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {int grbm_indexed; scalar_t__ reg_offset; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{
 uint32_t VAR_7;

 *VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  bool VAR_8 = VAR_1[VAR_7].grbm_indexed;

  if (VAR_5 != VAR_1[VAR_7].reg_offset)
   continue;

  *VAR_6 = FUNC_1(VAR_2, VAR_8, VAR_3, VAR_4,
            VAR_5);
  return 0;
 }
 return -VAR_0;
}
