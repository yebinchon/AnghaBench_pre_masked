
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_6)
{
 if (VAR_6->pg_flags & (VAR_3 |
         VAR_4 |
         VAR_2 |
         VAR_0 |
         VAR_1 |
         VAR_5)) {
  FUNC_3(VAR_6, 1);
  FUNC_2(VAR_6, 1);
  if (VAR_6->pg_flags & VAR_3) {
   FUNC_5(VAR_6);
   FUNC_0(VAR_6, 1);
   FUNC_1(VAR_6, 1);
  }
  FUNC_4(VAR_6);
  FUNC_6(VAR_6, 1);
 }
}
