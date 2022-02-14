
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum idh_event { ____Placeholder_idh_event } idh_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_6,
       enum idh_event VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = FUNC_0(VAR_2, VAR_3);


 if (VAR_7 != VAR_1) {
  VAR_8 = FUNC_1(VAR_4);
  if (!(VAR_8 & VAR_9))
   return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8 != VAR_7)
  return -VAR_0;


 FUNC_2(VAR_6);

 return 0;
}
