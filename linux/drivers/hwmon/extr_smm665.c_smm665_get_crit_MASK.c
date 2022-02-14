
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm665_data {int* critical_max_limit; } ;
struct device {int dummy; } ;


 struct smm665_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, int VAR_1)
{
 struct smm665_data *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->critical_max_limit[VAR_1];
}
