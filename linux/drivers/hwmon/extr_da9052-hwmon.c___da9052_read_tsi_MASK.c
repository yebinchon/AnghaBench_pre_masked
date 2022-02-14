
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct da9052_hwmon {int tsidone; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct da9052_hwmon*,int) ;
 int FUNC_1 (struct da9052_hwmon*,int) ;
 struct da9052_hwmon* FUNC_2 (struct device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, int VAR_2)
{
 struct da9052_hwmon *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 FUNC_4(&VAR_3->tsidone);

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 if (!FUNC_5(&VAR_3->tsidone,
      FUNC_3(500)))
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_2);
}
