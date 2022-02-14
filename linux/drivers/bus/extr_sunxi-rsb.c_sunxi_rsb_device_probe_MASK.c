
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_driver {int (* probe ) (struct sunxi_rsb_device*) ;} ;
struct sunxi_rsb_device {int irq; } ;
struct device {scalar_t__ of_node; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sunxi_rsb_device*) ;
 struct sunxi_rsb_device* FUNC_3 (struct device*) ;
 struct sunxi_rsb_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3)
{
 const struct sunxi_rsb_driver *VAR_4 = FUNC_4(VAR_3->driver);
 struct sunxi_rsb_device *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if (!VAR_4->probe)
  return -VAR_0;

 if (!VAR_5->irq) {
  int VAR_7 = -VAR_1;

  if (VAR_3->of_node)
   VAR_7 = FUNC_1(VAR_3->of_node, 0);

  if (VAR_7 == -VAR_2)
   return VAR_7;
  if (VAR_7 < 0)
   VAR_7 = 0;

  VAR_5->irq = VAR_7;
 }

 VAR_6 = FUNC_0(VAR_3->of_node, 0);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_4->probe(VAR_5);
}
