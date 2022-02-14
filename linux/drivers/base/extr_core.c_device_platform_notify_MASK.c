
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_2, enum kobject_action VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (&FUNC_1 && VAR_3 == VAR_0)
  FUNC_1(VAR_2);
 else if (&FUNC_2 && VAR_3 == VAR_1)
  FUNC_2(VAR_2);
 return 0;
}
