
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; struct device* parent; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct device *VAR_1 = VAR_0;

 while (FUNC_0(VAR_1))
  VAR_1 = VAR_1->parent;

 return FUNC_1(VAR_0, VAR_1->of_node, 0);
}
