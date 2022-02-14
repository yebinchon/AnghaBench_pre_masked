
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int phandle ;


 struct device_node* FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, size_t VAR_1, struct device_node **VAR_2)
{
 char *VAR_3;
 phandle VAR_4;
 *VAR_2 = ((void*)0);

 VAR_3 = VAR_0;

 VAR_0 = FUNC_2(VAR_0, ' ');
 if (!VAR_0)
  return ((void*)0);
 *VAR_0 = '\0';
 VAR_0++;

 VAR_4 = FUNC_1(VAR_3, ((void*)0), 0);

 *VAR_2 = FUNC_0(VAR_4);
 return VAR_0;
}
