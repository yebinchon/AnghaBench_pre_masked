
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum idh_event { ____Placeholder_idh_event } idh_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2, enum idh_event VAR_3)
{
 int VAR_4, VAR_5 = VAR_0;

 do {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (!VAR_4)
   return 0;

  FUNC_0(10);
  VAR_5 -= 10;
 } while (VAR_5 > 1);

 FUNC_1("Doesn't get msg:%d from pf, error=%d\n", VAR_3, VAR_4);

 return -VAR_1;
}
