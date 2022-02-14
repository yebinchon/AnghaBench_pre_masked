
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
 char* FUNC_2 (char*,char*,char**,int*,unsigned char**) ;
 char* FUNC_3 (char*,size_t,struct device_node**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_3, size_t VAR_4)
{
 struct device_node *VAR_5;
 unsigned char *VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;
 struct property *VAR_11;
 VAR_3 = FUNC_3(VAR_3, VAR_4, &VAR_5);
 VAR_8 = VAR_3 + VAR_4;

 if (!VAR_5)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3, VAR_8, &VAR_7, &VAR_10, &VAR_6);
 if (!VAR_9)
  return -VAR_0;

 if (!FUNC_6(VAR_7))
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_7, VAR_10, VAR_6, ((void*)0));
 if (!VAR_11)
  return -VAR_2;

 if (!FUNC_5(VAR_7, "slb-size") || !FUNC_5(VAR_7, "ibm,slb-size"))
  FUNC_4(*(int *)VAR_6);

 return FUNC_1(VAR_5, VAR_11);
}
