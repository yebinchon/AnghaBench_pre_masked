
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct cdn_dp_device*,int ,int ,int,int*) ;

int FUNC_2(struct cdn_dp_device *VAR_2, int VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = !!VAR_3;

 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_0,
      sizeof(VAR_4), &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_2->dev, "set video status failed: %d\n", VAR_5);

 return VAR_5;
}
