
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_dss_device {int dummy; } ;
struct dsi_data {int dummy; } ;
typedef enum dss_dsi_content_type { ____Placeholder_dss_dsi_content_type } dss_dsi_content_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct dsi_data*,int ,int,int) ;
 int FUNC_3 (struct dsi_data*,int) ;
 int FUNC_4 (struct omap_dss_device*,int) ;
 int FUNC_5 (struct dsi_data*,int,int *,int,int) ;
 struct dsi_data* FUNC_6 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_7(struct omap_dss_device *VAR_1,
          int VAR_2, u8 *VAR_3, int VAR_4,
          enum dss_dsi_content_type VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_6(VAR_1);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7)
  goto err;


 if (FUNC_2(VAR_6, FUNC_0(VAR_2), 20, 20)) {
  FUNC_1("rx fifo not empty after write, dumping data:\n");
  FUNC_3(VAR_6, VAR_2);
  VAR_7 = -VAR_0;
  goto err;
 }

 return 0;
err:
 FUNC_1("dsi_vc_write_common(ch %d, cmd 0x%02x, len %d) failed\n",
   VAR_2, VAR_3[0], VAR_4);
 return VAR_7;
}
