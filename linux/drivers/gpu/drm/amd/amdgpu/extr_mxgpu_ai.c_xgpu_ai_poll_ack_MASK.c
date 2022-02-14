
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4 = VAR_1;
 u8 VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_0);
  if (VAR_5 & 2)
   return 0;

  FUNC_1(5);
  VAR_4 -= 5;
 } while (VAR_4 > 1);

 FUNC_2("Doesn't get TRN_MSG_ACK from pf in %d msec\n", VAR_1);

 return -VAR_2;
}
