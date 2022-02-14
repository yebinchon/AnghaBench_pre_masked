
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct device *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->of_node, "fimc");

 if (VAR_3 >= 0 && (FUNC_0(VAR_3) & VAR_1))
  return 0;
 return -VAR_0;
}
