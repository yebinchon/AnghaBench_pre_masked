
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dss_device {struct platform_device* drm_pdev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 struct dss_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct dss_device*) ;
 struct platform_device* FUNC_6 (char*,int ,int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0)
{
 struct dss_device *VAR_1 = FUNC_4(VAR_0);
 struct platform_device *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, ((void*)0));
 if (VAR_3)
  return VAR_3;

 FUNC_7(0);

 FUNC_5(VAR_1);

 VAR_2 = FUNC_6("omapdrm", 0, ((void*)0), 0);
 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_0, ((void*)0));
  return FUNC_1(VAR_2);
 }

 VAR_1->drm_pdev = VAR_2;

 return 0;
}
