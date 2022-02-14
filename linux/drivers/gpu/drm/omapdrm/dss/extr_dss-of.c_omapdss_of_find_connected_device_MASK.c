
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct omap_dss_device* FUNC_0 (int ) ;
 struct device_node* FUNC_1 (struct device_node*,unsigned int,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct omap_dss_device* FUNC_3 (struct device_node*) ;

struct omap_dss_device *
FUNC_4(struct device_node *VAR_1, unsigned int VAR_2)
{
 struct device_node *VAR_3;
 struct omap_dss_device *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 return VAR_4 ? VAR_4 : FUNC_0(-VAR_0);
}
