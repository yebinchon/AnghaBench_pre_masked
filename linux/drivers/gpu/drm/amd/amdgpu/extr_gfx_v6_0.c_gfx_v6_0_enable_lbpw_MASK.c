
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3, bool VAR_4)
{
 FUNC_1(VAR_1, VAR_0, VAR_4 ? 1 : 0);

 if (!VAR_4) {
  FUNC_2(VAR_3, 0xffffffff, 0xffffffff, 0xffffffff);
  FUNC_0(VAR_2, 0x00ff);
 }
}
