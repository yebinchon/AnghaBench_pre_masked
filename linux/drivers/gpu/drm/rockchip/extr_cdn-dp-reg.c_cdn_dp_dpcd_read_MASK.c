
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cdn_dp_device {int dummy; } ;
typedef int reg ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdn_dp_device*,int*,int) ;
 int FUNC_1 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int) ;

int FUNC_3(struct cdn_dp_device *VAR_2, u32 VAR_3, u8 *VAR_4, u16 VAR_5)
{
 u8 VAR_6[5], VAR_7[5];
 int VAR_8;

 VAR_6[0] = (VAR_5 >> 8) & 0xff;
 VAR_6[1] = VAR_5 & 0xff;
 VAR_6[2] = (VAR_3 >> 16) & 0xff;
 VAR_6[3] = (VAR_3 >> 8) & 0xff;
 VAR_6[4] = VAR_3 & 0xff;
 VAR_8 = FUNC_1(VAR_2, VAR_1, VAR_0,
      sizeof(VAR_6), VAR_6);
 if (VAR_8)
  goto err_dpcd_read;

 VAR_8 = FUNC_2(VAR_2, VAR_1,
           VAR_0,
           sizeof(VAR_7) + VAR_5);
 if (VAR_8)
  goto err_dpcd_read;

 VAR_8 = FUNC_0(VAR_2, VAR_7, sizeof(VAR_7));
 if (VAR_8)
  goto err_dpcd_read;

 VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_5);

err_dpcd_read:
 return VAR_8;
}
