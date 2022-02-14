
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int globalnumber; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(struct cpuinfo_mips *VAR_2, unsigned int VAR_3)
{

 FUNC_0(VAR_3 > (VAR_0 >> VAR_1));

 VAR_2->globalnumber &= ~VAR_0;
 VAR_2->globalnumber |= VAR_3 << VAR_1;
}
