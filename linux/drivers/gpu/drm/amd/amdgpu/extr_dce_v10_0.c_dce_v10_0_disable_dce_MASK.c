
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 scalar_t__* VAR_2 ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_7(struct amdgpu_device *VAR_5)
{

 if (FUNC_4(VAR_5)) {
  u32 VAR_6;
  int VAR_7, VAR_8;

  FUNC_6(VAR_5, 0);


  for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_5); VAR_8++) {
   VAR_7 = FUNC_0(FUNC_2(VAR_3 + VAR_2[VAR_8]),
          VAR_0, VAR_1);
   if (VAR_7) {
    FUNC_3(VAR_4 + VAR_2[VAR_8], 1);
    VAR_6 = FUNC_2(VAR_3 + VAR_2[VAR_8]);
    VAR_6 = FUNC_1(VAR_6, VAR_0, VAR_1, 0);
    FUNC_3(VAR_3 + VAR_2[VAR_8], VAR_6);
    FUNC_3(VAR_4 + VAR_2[VAR_8], 0);
   }
  }
 }
}
