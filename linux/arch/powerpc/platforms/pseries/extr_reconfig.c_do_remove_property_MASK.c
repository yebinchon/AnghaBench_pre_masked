
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct device_node*,int ) ;
 char* FUNC_2 (char*,size_t,struct device_node**) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, size_t VAR_3)
{
 struct device_node *VAR_4;
 char *VAR_5;
 VAR_2 = FUNC_2(VAR_2, VAR_3, &VAR_4);

 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_2,' ');
 if (VAR_5)
  *VAR_5 = '\0';

 if (FUNC_4(VAR_2) == 0)
  return -VAR_0;

 return FUNC_1(VAR_4, FUNC_0(VAR_4, VAR_2, ((void*)0)));
}
