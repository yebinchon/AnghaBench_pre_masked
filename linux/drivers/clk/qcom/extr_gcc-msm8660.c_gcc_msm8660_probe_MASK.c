
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int *) ;
 int FUNC_1 (struct device*,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->dev;

 VAR_2 = FUNC_1(VAR_3, "cxo_board", "cxo", 19200000);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_3, "pxo_board", "pxo", 27000000);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1, &VAR_0);
}
