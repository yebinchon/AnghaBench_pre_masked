
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct led_classdev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct led_classdev *VAR_2,
     unsigned long *VAR_3,
     unsigned long *VAR_4)
{
 u32 VAR_5 = 1;
 if (!(*VAR_3 == 0 && *VAR_4 == 0) &&
     !(*VAR_3 == 500 && *VAR_4 == 500))
  return -VAR_0;



 *VAR_3 = 500;
 *VAR_4 = 500;

 FUNC_0(VAR_2, VAR_1, VAR_5);

 return 0;
}
