
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int globalnumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;

void FUNC_2(struct cpuinfo_mips *VAR_4, unsigned int VAR_5)
{

 FUNC_1(VAR_5 > (VAR_2 >> VAR_3));


 FUNC_1(VAR_5 && !FUNC_0(VAR_1) &&
  !FUNC_0(VAR_0));

 VAR_4->globalnumber &= ~VAR_2;
 VAR_4->globalnumber |= VAR_5 << VAR_3;
}
