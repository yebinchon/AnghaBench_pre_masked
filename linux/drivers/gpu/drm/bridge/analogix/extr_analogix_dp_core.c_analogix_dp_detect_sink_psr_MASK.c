
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {int dev; int aux; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,unsigned char*) ;

__attribute__((used)) static bool FUNC_3(struct analogix_dp_device *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2->aux, VAR_1, &VAR_3);
 if (VAR_4 != 1) {
  FUNC_1(VAR_2->dev, "failed to get PSR version, disable it\n");
  return 0;
 }

 FUNC_0(VAR_2->dev, "Panel PSR version : %x\n", VAR_3);
 return VAR_3 & VAR_0;
}
