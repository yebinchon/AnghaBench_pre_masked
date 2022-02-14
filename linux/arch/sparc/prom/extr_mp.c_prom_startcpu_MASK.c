
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_prom_registers {int dummy; } ;
struct TYPE_2__ {int (* v3_cpustart ) (int,int,int,char*) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int,int,char*) ;

int
FUNC_4(int VAR_3, struct linux_prom_registers *VAR_4, int VAR_5, char *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_0, VAR_8);
 switch(VAR_1) {
 case 130:
 case 129:
 default:
  VAR_7 = -1;
  break;
 case 128:
  VAR_7 = (*(VAR_2->v3_cpustart))(VAR_3, (int) VAR_4, VAR_5, VAR_6);
  break;
 }
 FUNC_0();
 FUNC_2(&VAR_0, VAR_8);

 return VAR_7;
}
