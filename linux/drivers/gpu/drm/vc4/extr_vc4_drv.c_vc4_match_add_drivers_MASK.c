
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct platform_driver {struct device_driver driver; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct component_match**,int ,struct device*) ;
 struct device* FUNC_1 (struct device*,struct device_driver*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1,
      struct component_match **VAR_2,
      struct platform_driver *const *VAR_3,
      int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct device_driver *VAR_6 = &VAR_3[VAR_5]->driver;
  struct device *VAR_7 = ((void*)0), *VAR_8;

  while ((VAR_8 = FUNC_1(VAR_7, VAR_6))) {
   FUNC_2(VAR_7);
   FUNC_0(VAR_1, VAR_2, VAR_0, VAR_8);
   VAR_7 = VAR_8;
  }
  FUNC_2(VAR_7);
 }
}
