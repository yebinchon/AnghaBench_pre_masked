
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct property* FUNC_0 (char*,int,unsigned char*,int *) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 int * FUNC_2 (char*,char*,char**,int*,unsigned char**) ;
 char* FUNC_3 (char*,size_t,struct device_node**) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, size_t VAR_4)
{
 struct property *VAR_5 = ((void*)0);
 struct device_node *VAR_6;
 unsigned char *VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;
 VAR_9 = VAR_3 + VAR_4;
 VAR_3 = FUNC_3(VAR_3, VAR_4, &VAR_6);

 if (!VAR_6)
  return -VAR_1;

 if (FUNC_2(VAR_3, VAR_9, &VAR_8, &VAR_10, &VAR_7) == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_8, VAR_10, VAR_7, ((void*)0));
 if (!VAR_5)
  return -VAR_2;

 FUNC_1(VAR_6, VAR_5);

 return 0;
}
