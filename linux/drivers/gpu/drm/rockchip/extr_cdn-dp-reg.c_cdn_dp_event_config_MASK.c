
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_2 (int*,int ,int) ;

int FUNC_3(struct cdn_dp_device *VAR_4)
{
 u8 VAR_5[5];
 int VAR_6;

 FUNC_2(VAR_5, 0, sizeof(VAR_5));

 VAR_5[0] = VAR_1 | VAR_2;

 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_0,
      sizeof(VAR_5), VAR_5);
 if (VAR_6)
  FUNC_0(VAR_4->dev, "set event config failed: %d\n", VAR_6);

 return VAR_6;
}
