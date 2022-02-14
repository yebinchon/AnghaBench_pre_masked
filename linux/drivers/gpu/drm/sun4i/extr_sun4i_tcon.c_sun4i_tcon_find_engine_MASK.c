
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_engine {int dummy; } ;
struct sun4i_drv {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct sunxi_engine* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (struct device_node*) ;
 struct sunxi_engine* FUNC_5 (struct sun4i_drv*,struct device_node*,int ) ;
 struct sunxi_engine* FUNC_6 (struct sun4i_drv*,int) ;
 int FUNC_7 (struct sun4i_drv*) ;
 int FUNC_8 (struct device_node*) ;

__attribute__((used)) static struct sunxi_engine *FUNC_9(struct sun4i_drv *VAR_1,
         struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 struct sunxi_engine *VAR_4;

 VAR_3 = FUNC_2(VAR_2, 0);
 if (!VAR_3)
  return FUNC_0(-VAR_0);





 if (FUNC_1(VAR_3) > 1) {
  int VAR_5;
  if (FUNC_4(VAR_2))
   VAR_5 = FUNC_7(VAR_1);
  else
   VAR_5 = FUNC_8(VAR_3);


  VAR_4 = FUNC_6(VAR_1, VAR_5);

  FUNC_3(VAR_3);
  return VAR_4;
 }


 FUNC_3(VAR_3);
 return FUNC_5(VAR_1, VAR_2, 0);
}
