
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct cdn_dp_device*,int ,int,int,int) ;

int FUNC_2(struct cdn_dp_device *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 4, 1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "audio mute failed: %d\n", VAR_3);

 return VAR_3;
}
