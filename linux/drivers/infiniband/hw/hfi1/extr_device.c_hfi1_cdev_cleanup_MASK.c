
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct cdev *VAR_0, struct device **VAR_1)
{
 struct device *VAR_2 = *VAR_1;

 if (VAR_2) {
  FUNC_1(VAR_2);
  *VAR_1 = ((void*)0);

  FUNC_0(VAR_0);
 }
}
