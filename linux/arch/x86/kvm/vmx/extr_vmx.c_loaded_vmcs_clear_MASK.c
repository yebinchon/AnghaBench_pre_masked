
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loaded_vmcs {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct loaded_vmcs*,int) ;

void FUNC_1(struct loaded_vmcs *VAR_1)
{
 int VAR_2 = VAR_1->cpu;

 if (VAR_2 != -1)
  FUNC_0(VAR_2,
    VAR_0, VAR_1, 1);
}
