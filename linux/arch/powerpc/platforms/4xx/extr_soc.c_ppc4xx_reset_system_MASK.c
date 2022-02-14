
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct device_node* FUNC_2 (int ,int *) ;
 int* FUNC_3 (struct device_node*,char*,int *) ;

void FUNC_4(char *VAR_2)
{
 struct device_node *VAR_3;
 u32 VAR_4 = VAR_0;
 const u32 *VAR_5;

 VAR_3 = FUNC_2(0, ((void*)0));
 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_3, "reset-type", ((void*)0));







  if ((VAR_5) && ((VAR_5[0] >= 1) && (VAR_5[0] <= 3)))
   VAR_4 = VAR_5[0] << 28;
 }

 FUNC_1(VAR_1, FUNC_0(VAR_1) | VAR_4);

 while (1)
  ;
}
