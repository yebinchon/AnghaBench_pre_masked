
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int hactive; } ;
struct dsi_data {int pix_fmt; scalar_t__ mode; int output; TYPE_1__ vm; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ VAR_5 ;
 int FUNC_2 (struct dsi_data*,int ,int,int,int) ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dsi_data*,int) ;
 int FUNC_7 (struct dsi_data*,int,int) ;
 int FUNC_8 (struct dsi_data*,int,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 struct dsi_data* FUNC_10 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_11(struct omap_dss_device *VAR_6, int VAR_7)
{
 struct dsi_data *VAR_8 = FUNC_10(VAR_6);
 int VAR_9 = FUNC_5(VAR_8->pix_fmt);
 u8 VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_8);
 if (VAR_12)
  return VAR_12;

 if (VAR_8->mode == VAR_5) {
  switch (VAR_8->pix_fmt) {
  case 128:
   VAR_10 = VAR_3;
   break;
  case 130:
   VAR_10 = VAR_4;
   break;
  case 129:
   VAR_10 = VAR_2;
   break;
  case 131:
   VAR_10 = VAR_1;
   break;
  default:
   VAR_12 = -VAR_0;
   goto err_pix_fmt;
  }

  FUNC_6(VAR_8, 0);
  FUNC_7(VAR_8, VAR_7, 0);


  FUNC_2(VAR_8, FUNC_1(VAR_7), 1, 4, 4);

  VAR_11 = FUNC_0(VAR_8->vm.hactive * VAR_9, 8);

  FUNC_8(VAR_8, VAR_7, VAR_10,
    VAR_11, 0);

  FUNC_7(VAR_8, VAR_7, 1);
  FUNC_6(VAR_8, 1);
 }

 VAR_12 = FUNC_9(&VAR_8->output);
 if (VAR_12)
  goto err_mgr_enable;

 return 0;

err_mgr_enable:
 if (VAR_8->mode == VAR_5) {
  FUNC_6(VAR_8, 0);
  FUNC_7(VAR_8, VAR_7, 0);
 }
err_pix_fmt:
 FUNC_4(VAR_8);
 return VAR_12;
}
