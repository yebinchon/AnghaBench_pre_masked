
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;


 char const* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,char const**) ;

__attribute__((used)) static inline const char *FUNC_2(struct device *VAR_0)
{
 const char *VAR_1;

 if (!FUNC_1(VAR_0->of_node, "compatible", &VAR_1))
  return VAR_1;

 return FUNC_0(VAR_0);
}
