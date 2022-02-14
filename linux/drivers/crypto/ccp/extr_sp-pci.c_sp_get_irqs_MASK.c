
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sp_device*) ;
 int FUNC_2 (struct sp_device*) ;

__attribute__((used)) static int FUNC_3(struct sp_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return 0;


 FUNC_0(VAR_1, "could not enable MSI-X (%d), trying MSI\n", VAR_2);
 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return 0;


 FUNC_0(VAR_1, "could not enable MSI (%d)\n", VAR_2);

 return VAR_2;
}
