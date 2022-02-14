
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_5(struct amdgpu_device *VAR_4)
{

 if (FUNC_2(VAR_4)) {
  u32 VAR_5;
  int VAR_6, VAR_7;

  FUNC_4(VAR_4, 0);


  for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_4); VAR_7++) {
   VAR_6 = FUNC_0(VAR_2 + VAR_1[VAR_7]) &
    VAR_0;
   if (VAR_6) {
    FUNC_1(VAR_3 + VAR_1[VAR_7], 1);
    VAR_5 = FUNC_0(VAR_2 + VAR_1[VAR_7]);
    VAR_5 &= ~VAR_0;
    FUNC_1(VAR_2 + VAR_1[VAR_7], VAR_5);
    FUNC_1(VAR_3 + VAR_1[VAR_7], 0);
   }
  }
 }
}
