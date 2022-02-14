
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device* parent; } ;


 scalar_t__ FUNC_0 (struct device*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
     struct device **VAR_1)
{
 if (!VAR_0) {
  *VAR_1 = ((void*)0);
 } else if (!FUNC_0(VAR_0)) {
  *VAR_1 = ((void*)0);
 } else {
  *VAR_1 = VAR_0;
  while (FUNC_0((*VAR_1)->parent))
   *VAR_1 = (*VAR_1)->parent;
 }
}
