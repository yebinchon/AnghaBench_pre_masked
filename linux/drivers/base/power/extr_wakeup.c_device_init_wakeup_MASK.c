
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

int FUNC_3(struct device *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1)
  return -VAR_0;

 if (VAR_2) {
  FUNC_0(VAR_1, 1);
  VAR_3 = FUNC_2(VAR_1);
 } else {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, 0);
 }

 return VAR_3;
}
