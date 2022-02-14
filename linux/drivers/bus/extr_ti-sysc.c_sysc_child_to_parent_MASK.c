
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int dummy; } ;
struct device {int * type; struct device* parent; } ;


 struct sysc* FUNC_0 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static struct sysc *FUNC_1(struct device *VAR_1)
{
 struct device *VAR_2 = VAR_1->parent;

 if (!VAR_2 || VAR_2->type != &VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_2);
}
