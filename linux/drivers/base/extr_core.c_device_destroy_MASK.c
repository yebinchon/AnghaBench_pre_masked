
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct class {int dummy; } ;
typedef int dev_t ;


 struct device* FUNC_0 (struct class*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

void FUNC_3(struct class *VAR_0, dev_t VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
 }
}
