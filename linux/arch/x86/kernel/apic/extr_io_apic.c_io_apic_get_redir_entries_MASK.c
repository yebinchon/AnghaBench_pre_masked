
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entries; } ;
union IO_APIC_reg_01 {TYPE_1__ bits; int raw; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 union IO_APIC_reg_01 VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(VAR_1, 1);
 FUNC_2(&VAR_0, VAR_3);





 return VAR_2 + 1;
}
