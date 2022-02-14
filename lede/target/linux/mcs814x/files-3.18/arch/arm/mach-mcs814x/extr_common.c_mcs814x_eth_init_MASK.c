
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (unsigned int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 struct device_node* FUNC_4 (int *,int ) ;
 unsigned int* FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct device_node *VAR_1;
 const unsigned int *VAR_2;

 VAR_1 = FUNC_4(((void*)0), VAR_0);
 if (!VAR_1)
  return;


 FUNC_2(1);

 VAR_2 = FUNC_5(VAR_1, "nuport-mac,buffer-shifting", ((void*)0));
 if (!VAR_2)
  FUNC_1(0);
 else
  FUNC_1(1);

 VAR_2 = FUNC_5(VAR_1, "nuport-mac,link-activity", ((void*)0));
 if (VAR_2)
  FUNC_3(FUNC_0(VAR_2));

 FUNC_6(VAR_1);
}
