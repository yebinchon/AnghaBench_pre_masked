
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum idh_event { ____Placeholder_idh_event } idh_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2, enum idh_event VAR_3)
{
 int VAR_4 = 0, VAR_5 = VAR_1;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 while (VAR_4) {
  if (VAR_5 <= 0) {
   FUNC_1("Doesn't get ack from pf.\n");
   VAR_4 = -VAR_0;
   break;
  }
  FUNC_0(5);
  VAR_5 -= 5;

  VAR_4 = FUNC_2(VAR_2, VAR_3);
 }

 return VAR_4;
}
