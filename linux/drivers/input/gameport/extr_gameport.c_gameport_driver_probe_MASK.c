
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {int (* connect ) (struct gameport*,struct gameport_driver*) ;} ;
struct gameport {int drv; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct gameport*,struct gameport_driver*) ;
 struct gameport_driver* FUNC_1 (int ) ;
 struct gameport* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct gameport *VAR_2 = FUNC_2(VAR_1);
 struct gameport_driver *VAR_3 = FUNC_1(VAR_1->driver);

 VAR_3->connect(VAR_2, VAR_3);
 return VAR_2->drv ? 0 : -VAR_0;
}
