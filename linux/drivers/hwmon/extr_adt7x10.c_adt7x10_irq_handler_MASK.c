
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct device *VAR_7 = VAR_6;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 if (VAR_8 < 0)
  return VAR_4;

 if (VAR_8 & VAR_2)
  FUNC_1(&VAR_7->kobj, ((void*)0), "temp1_max_alarm");
 if (VAR_8 & VAR_3)
  FUNC_1(&VAR_7->kobj, ((void*)0), "temp1_min_alarm");
 if (VAR_8 & VAR_1)
  FUNC_1(&VAR_7->kobj, ((void*)0), "temp1_crit_alarm");

 return VAR_4;
}
