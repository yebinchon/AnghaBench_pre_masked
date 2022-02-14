
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 struct device* FUNC_1 (struct device*,char const*,void*,int *,struct attribute_group const**) ;

struct device *
FUNC_2(struct device *VAR_1, const char *VAR_2,
      void *VAR_3,
      const struct attribute_group **VAR_4)
{
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4);
}
