
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct device_node* FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct device_node *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, ((void*)0));
 if (!VAR_3)
  return -VAR_0;




 VAR_4 = FUNC_2(VAR_3, "cpu-release-addr",
       &VAR_1[VAR_2]);
 if (VAR_4)
  FUNC_3("CPU %d: missing or invalid cpu-release-addr property\n",
         VAR_2);

 FUNC_1(VAR_3);

 return VAR_4;
}
