
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

void FUNC_7(int VAR_3, bool VAR_4)
{
 unsigned int VAR_5;
 struct device_node *VAR_6;

 if (!VAR_2) {
  VAR_6 = FUNC_1(((void*)0), ((void*)0), "hisilicon,hip01-sysctrl");
  FUNC_0(!VAR_6);
  VAR_2 = FUNC_2(VAR_6, 0);
  FUNC_3(VAR_6);
  FUNC_0(!VAR_2);
 }

 if (VAR_4) {

  VAR_5 = FUNC_4(VAR_2 + VAR_0);
  VAR_5 |= VAR_1;
  FUNC_6(VAR_5, VAR_2 + VAR_0);

  FUNC_5(50);


  VAR_5 = FUNC_4(VAR_2 + VAR_0);
  VAR_5 &= ~VAR_1;
  FUNC_6(VAR_5, VAR_2 + VAR_0);
 }
}
