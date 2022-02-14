
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum idh_request { ____Placeholder_idh_request } idh_request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_2,
        bool VAR_3)
{
 enum idh_request VAR_4;

 VAR_4 = VAR_3 ? VAR_1 : VAR_0;
 return FUNC_0(VAR_2, VAR_4);
}
