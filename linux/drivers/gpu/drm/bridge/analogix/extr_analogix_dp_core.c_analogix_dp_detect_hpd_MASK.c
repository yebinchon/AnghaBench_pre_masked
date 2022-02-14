
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int dev; int force_hpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct analogix_dp_device*) ;
 scalar_t__ FUNC_1 (struct analogix_dp_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct analogix_dp_device *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_4 < VAR_0) {
  if (FUNC_1(VAR_3) == 0)
   return 0;

  VAR_4++;
  FUNC_4(1000, 1100);
 }






 if (!VAR_3->force_hpd)
  return -VAR_2;






 FUNC_2(VAR_3->dev, "failed to get hpd plug status, try to force hpd\n");

 FUNC_0(VAR_3);

 if (FUNC_1(VAR_3) != 0) {
  FUNC_3(VAR_3->dev, "failed to get hpd plug in status\n");
  return -VAR_1;
 }

 FUNC_2(VAR_3->dev, "success to get plug in status after force hpd\n");

 return 0;
}
