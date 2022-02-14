
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct device *VAR_1)
{




 if (FUNC_1(VAR_0) && VAR_1->of_node)
  return 1;

 return FUNC_2(FUNC_0(VAR_1));
}
