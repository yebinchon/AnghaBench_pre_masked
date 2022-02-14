
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct device {int dummy; } ;
struct attribute_group {struct attribute** attrs; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (struct device*,struct attribute*,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
    const struct attribute_group *VAR_1,
    umode_t VAR_2)
{
 struct attribute **VAR_3;

 for (VAR_3 = VAR_1->attrs; *VAR_3; VAR_3++)
  FUNC_0(VAR_0, *VAR_3, VAR_2);
}
