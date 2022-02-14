
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int owner; int dev; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

struct omap_dss_device *FUNC_3(struct omap_dss_device *VAR_0)
{
 if (!FUNC_2(VAR_0->owner))
  return ((void*)0);

 if (FUNC_0(VAR_0->dev) == ((void*)0)) {
  FUNC_1(VAR_0->owner);
  return ((void*)0);
 }

 return VAR_0;
}
