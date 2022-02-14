
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct tpm_info {int irq; struct resource res; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct platform_device* VAR_2 ;
 int FUNC_1 (struct platform_device*,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int *,struct tpm_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct tpm_info VAR_4 = {};
 struct resource *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, 0);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(&VAR_3->dev, "no memory resource defined\n");
  return -VAR_0;
 }
 VAR_4.res = *VAR_5;

 VAR_4.irq = FUNC_1(VAR_3, 0);
 if (VAR_4.irq <= 0) {
  if (VAR_3 != VAR_2)
   VAR_4.irq = -1;
  else

   VAR_4.irq = 0;
 }

 return FUNC_3(&VAR_3->dev, &VAR_4);
}
