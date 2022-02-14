
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pages_devres {scalar_t__ addr; } ;
struct device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct pages_devres *VAR_3 = VAR_1;
 struct pages_devres *VAR_4 = VAR_2;

 return VAR_3->addr == VAR_4->addr;
}
