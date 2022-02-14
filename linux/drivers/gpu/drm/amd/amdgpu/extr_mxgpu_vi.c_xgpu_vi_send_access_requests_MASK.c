
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum idh_request { ____Placeholder_idh_request } idh_request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_4,
     enum idh_request VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4, VAR_5);


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_4, 0);


 if (VAR_5 == VAR_2 ||
  VAR_5 == VAR_1 ||
  VAR_5 == VAR_3) {
  VAR_6 = FUNC_4(VAR_4, VAR_0);
  if (VAR_6) {
   FUNC_0("Doesn't get ack from pf, give up\n");
   return VAR_6;
  }
 }

 return 0;
}
