
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct amba_driver {int (* remove ) (struct amba_device*) ;} ;
struct amba_device {int dummy; } ;


 int FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct amba_device*) ;
 struct amba_device* FUNC_7 (struct device*) ;
 struct amba_driver* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0)
{
 struct amba_device *VAR_1 = FUNC_7(VAR_0);
 struct amba_driver *VAR_2 = FUNC_8(VAR_0->driver);
 int VAR_3;

 FUNC_3(VAR_0);
 VAR_3 = VAR_2->remove(VAR_1);
 FUNC_4(VAR_0);


 FUNC_2(VAR_0);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_0, 1);

 return VAR_3;
}
