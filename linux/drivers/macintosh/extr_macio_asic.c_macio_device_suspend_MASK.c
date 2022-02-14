
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_driver {int (* suspend ) (struct macio_dev*,int ) ;} ;
struct macio_dev {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct macio_dev*,int ) ;
 struct macio_dev* FUNC_1 (struct device*) ;
 struct macio_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct macio_dev * VAR_2 = FUNC_1(VAR_0);
 struct macio_driver * VAR_3 = FUNC_2(VAR_0->driver);

 if (VAR_0->driver && VAR_3->suspend)
  return VAR_3->suspend(VAR_2, VAR_1);
 return 0;
}
