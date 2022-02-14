
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef int PPSMC_Msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_4,
         bool VAR_5)
{
 PPSMC_Msg VAR_6 = VAR_5 ?
  VAR_1 : VAR_2;

 return (FUNC_0(VAR_4, VAR_6) == VAR_3) ?
  0 : -VAR_0;
}
