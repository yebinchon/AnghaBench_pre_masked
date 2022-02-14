
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct kcs_bmc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,int ,int ,int ,struct kcs_bmc*) ;
 int FUNC_2 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct kcs_bmc *VAR_2,
   struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_4, VAR_5, VAR_1, VAR_0,
    FUNC_0(VAR_4), VAR_2);
}
