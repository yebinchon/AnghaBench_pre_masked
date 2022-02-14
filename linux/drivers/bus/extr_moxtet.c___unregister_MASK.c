
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 if (VAR_1->of_node) {
  FUNC_1(VAR_1->of_node, VAR_0);
  FUNC_2(VAR_1->of_node);
 }

 FUNC_0(VAR_1);

 return 0;
}
