
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc {int mmio; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct zx_tvenc*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct zx_tvenc* FUNC_5 (struct device*,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_7 (struct device*) ;
 int FUNC_8 (struct zx_tvenc*) ;
 int FUNC_9 (struct drm_device*,struct zx_tvenc*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_3, struct device *VAR_4, void *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_7(VAR_3);
 struct drm_device *VAR_7 = VAR_5;
 struct resource *VAR_8;
 struct zx_tvenc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_3, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_3;
 FUNC_3(VAR_3, VAR_9);

 VAR_8 = FUNC_6(VAR_6, VAR_2, 0);
 VAR_9->mmio = FUNC_4(VAR_3, VAR_8);
 if (FUNC_1(VAR_9->mmio)) {
  VAR_10 = FUNC_2(VAR_9->mmio);
  FUNC_0(VAR_3, "failed to remap tvenc region: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to init power control: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_7, VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_3, "failed to register tvenc: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
