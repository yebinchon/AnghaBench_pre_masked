
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cdn_dp_device {int dev; } ;
typedef int reg ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cdn_dp_device*,int*,int) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ,int) ;

int FUNC_4(struct cdn_dp_device *VAR_3, u32 VAR_4, u8 VAR_5)
{
 u8 VAR_6[6], VAR_7[5];
 int VAR_8;

 VAR_6[0] = 0;
 VAR_6[1] = 1;
 VAR_6[2] = (VAR_4 >> 16) & 0xff;
 VAR_6[3] = (VAR_4 >> 8) & 0xff;
 VAR_6[4] = VAR_4 & 0xff;
 VAR_6[5] = VAR_5;
 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_0,
      sizeof(VAR_6), VAR_6);
 if (VAR_8)
  goto err_dpcd_write;

 VAR_8 = FUNC_3(VAR_3, VAR_2,
           VAR_0, sizeof(VAR_7));
 if (VAR_8)
  goto err_dpcd_write;

 VAR_8 = FUNC_1(VAR_3, VAR_7, sizeof(VAR_7));
 if (VAR_8)
  goto err_dpcd_write;

 if (VAR_4 != (VAR_7[2] << 16 | VAR_7[3] << 8 | VAR_7[4]))
  VAR_8 = -VAR_1;

err_dpcd_write:
 if (VAR_8)
  FUNC_0(VAR_3->dev, "dpcd write failed: %d\n", VAR_8);
 return VAR_8;
}
