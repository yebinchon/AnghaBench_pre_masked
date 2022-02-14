
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_1,
          struct attribute *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_1);





 if (!FUNC_0(VAR_4, VAR_0))
  return 0;

 return VAR_2->mode;
}
