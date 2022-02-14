
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum idh_event { ____Placeholder_idh_event } idh_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3,
       enum idh_event VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_1, 0,
          VAR_2));
 if (VAR_5 != VAR_4)
  return -VAR_0;

 FUNC_2(VAR_3);

 return 0;
}
