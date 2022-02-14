
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mixer_drv_data {scalar_t__ has_sclk; scalar_t__ is_vp_enabled; int version; } ;
struct mixer_context {int flags; int mxr_ver; struct device* dev; struct platform_device* pdev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct device*,int *) ;
 struct mixer_context* FUNC_3 (struct device*,int,int ) ;
 int VAR_4 ;
 struct mixer_drv_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct platform_device*,struct mixer_context*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 const struct mixer_drv_data *VAR_7;
 struct mixer_context *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_0(VAR_6, "failed to alloc mixer context.\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_6);

 VAR_8->pdev = VAR_5;
 VAR_8->dev = VAR_6;
 VAR_8->mxr_ver = VAR_7->version;

 if (VAR_7->is_vp_enabled)
  FUNC_1(VAR_3, &VAR_8->flags);
 if (VAR_7->has_sclk)
  FUNC_1(VAR_2, &VAR_8->flags);

 FUNC_5(VAR_5, VAR_8);

 VAR_9 = FUNC_2(&VAR_5->dev, &VAR_4);
 if (!VAR_9)
  FUNC_6(VAR_6);

 return VAR_9;
}
