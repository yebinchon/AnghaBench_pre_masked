
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct regmap** FUNC_0 (struct device*,int ,int ,void*) ;

struct regmap *FUNC_1(struct device *VAR_2, const char *VAR_3)
{
 struct regmap **VAR_4 = FUNC_0(VAR_2, VAR_1,
     VAR_0, (void *)VAR_3);

 if (!VAR_4)
  return ((void*)0);
 return *VAR_4;
}
