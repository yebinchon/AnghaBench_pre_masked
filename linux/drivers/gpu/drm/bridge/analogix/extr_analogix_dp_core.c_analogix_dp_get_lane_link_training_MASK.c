
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct analogix_dp_device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct analogix_dp_device*) ;
 unsigned int FUNC_2 (struct analogix_dp_device*) ;
 unsigned int FUNC_3 (struct analogix_dp_device*) ;
 unsigned int FUNC_4 (struct analogix_dp_device*) ;

__attribute__((used)) static unsigned int
FUNC_5(struct analogix_dp_device *VAR_0,
       int VAR_1)
{
 u32 VAR_2;

 switch (VAR_1) {
 case 0:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 1:
  VAR_2 = FUNC_2(VAR_0);
  break;
 case 2:
  VAR_2 = FUNC_3(VAR_0);
  break;
 case 3:
  VAR_2 = FUNC_4(VAR_0);
  break;
 default:
  FUNC_0(1);
  return 0;
 }

 return VAR_2;
}
