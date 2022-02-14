
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int status ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct cdn_dp_device*,int*,int) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int ,int *) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ,int) ;

int FUNC_4(struct cdn_dp_device *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_0,
      0, ((void*)0));
 if (VAR_4)
  goto err_get_hpd;

 VAR_4 = FUNC_3(VAR_2, VAR_1,
           VAR_0, sizeof(VAR_3));
 if (VAR_4)
  goto err_get_hpd;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_4)
  goto err_get_hpd;

 return VAR_3;

err_get_hpd:
 FUNC_0(VAR_2->dev, "get hpd status failed: %d\n", VAR_4);
 return VAR_4;
}
