
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport_driver {int (* disconnect ) (struct gameport*) ;} ;
struct gameport {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct gameport*) ;
 struct gameport_driver* FUNC_1 (int ) ;
 struct gameport* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct gameport *VAR_1 = FUNC_2(VAR_0);
 struct gameport_driver *VAR_2 = FUNC_1(VAR_0->driver);

 VAR_2->disconnect(VAR_1);
 return 0;
}
