
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int drm_pdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *) ;
 struct dss_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct dss_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->drm_pdev);

 FUNC_2(((void*)0));

 FUNC_0(VAR_0, ((void*)0));
}
