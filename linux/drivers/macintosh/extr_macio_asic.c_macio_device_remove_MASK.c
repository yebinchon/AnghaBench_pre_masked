
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_driver {int (* remove ) (struct macio_dev*) ;} ;
struct macio_dev {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct macio_dev*) ;
 int FUNC_1 (struct macio_dev*) ;
 struct macio_dev* FUNC_2 (struct device*) ;
 struct macio_driver* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct macio_dev * VAR_1 = FUNC_2(VAR_0);
 struct macio_driver * VAR_2 = FUNC_3(VAR_0->driver);

 if (VAR_0->driver && VAR_2->remove)
  VAR_2->remove(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
