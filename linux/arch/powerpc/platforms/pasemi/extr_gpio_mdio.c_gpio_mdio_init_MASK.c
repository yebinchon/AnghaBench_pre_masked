
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device_node*,int ) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct device_node *VAR_3;

 VAR_3 = FUNC_0(((void*)0), ((void*)0), "1682m-gpio");
 if (!VAR_3)
  VAR_3 = FUNC_0(((void*)0), ((void*)0),
          "pasemi,pwrficient-gpio");
 if (!VAR_3)
  return -VAR_0;
 VAR_2 = FUNC_1(VAR_3, 0);
 FUNC_2(VAR_3);

 if (!VAR_2)
  return -VAR_0;

 return FUNC_3(&VAR_1);
}
