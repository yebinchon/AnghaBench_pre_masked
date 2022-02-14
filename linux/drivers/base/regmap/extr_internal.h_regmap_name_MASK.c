
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {char const* name; scalar_t__ dev; } ;


 char const* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline const char *FUNC_1(const struct regmap *VAR_0)
{
 if (VAR_0->dev)
  return FUNC_0(VAR_0->dev);

 return VAR_0->name;
}
