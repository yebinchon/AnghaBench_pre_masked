
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_gmc {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_gmc*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_gmc*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_1,
           struct amdgpu_gmc *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_0) & 0xFFFF;
 VAR_3 <<= 24;

 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_2);
}
