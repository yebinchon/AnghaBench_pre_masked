
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analogix_dp_device {scalar_t__ drm_dev; int dev; } ;
typedef int irqreturn_t ;
typedef enum dp_irq_type { ____Placeholder_dp_irq_type } dp_irq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct analogix_dp_device*) ;
 int FUNC_1 (struct analogix_dp_device*) ;
 int FUNC_2 (struct analogix_dp_device*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct analogix_dp_device *VAR_6 = VAR_5;
 enum dp_irq_type VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 & VAR_0 ||
     VAR_7 & VAR_1) {
  FUNC_3(VAR_6->dev, "Detected cable status changed!\n");
  if (VAR_6->drm_dev)
   FUNC_4(VAR_6->drm_dev);
 }

 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_6);
  FUNC_2(VAR_6);
 }

 return VAR_3;
}
