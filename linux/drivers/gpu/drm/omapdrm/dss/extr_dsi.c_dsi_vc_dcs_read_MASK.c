
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_dss_device {int dummy; } ;
struct dsi_data {int dummy; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dsi_data*,int,int ) ;
 int FUNC_2 (struct dsi_data*,int,int *,int,int ) ;
 int FUNC_3 (struct omap_dss_device*,int) ;
 struct dsi_data* FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_2, int VAR_3, u8 VAR_4,
  u8 *VAR_5, int VAR_6)
{
 struct dsi_data *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_3(VAR_2, VAR_3);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_5, VAR_6,
  VAR_0);
 if (VAR_8 < 0)
  goto err;

 if (VAR_8 != VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }

 return 0;
err:
 FUNC_0("dsi_vc_dcs_read(ch %d, cmd 0x%02x) failed\n", VAR_3, VAR_4);
 return VAR_8;
}
