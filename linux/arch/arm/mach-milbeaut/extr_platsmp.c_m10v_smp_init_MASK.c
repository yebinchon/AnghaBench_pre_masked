
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_2 ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 struct device_node *VAR_7;

 VAR_7 = FUNC_1(((void*)0), ((void*)0), "socionext,milbeaut-smp-sram");
 if (!VAR_7)
  return;

 VAR_2 = FUNC_2(VAR_7, 0);
 if (!VAR_2)
  return;

 VAR_4 = FUNC_4();
 VAR_5 = FUNC_0(VAR_4, 0);
 VAR_6 = FUNC_0(VAR_4, 1);
 FUNC_3("MCPM boot on cpu_%u cluster_%u\n", VAR_5, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_5(VAR_0, VAR_2 + VAR_5 * 4);
}
