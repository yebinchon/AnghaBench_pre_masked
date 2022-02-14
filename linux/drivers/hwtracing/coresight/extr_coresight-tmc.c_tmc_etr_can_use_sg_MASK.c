
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int fwnode; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline bool FUNC_1(struct device *VAR_0)
{
 return FUNC_0(VAR_0->fwnode, "arm,scatter-gather");
}
