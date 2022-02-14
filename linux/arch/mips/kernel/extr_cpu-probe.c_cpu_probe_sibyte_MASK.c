
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int options; int cputype; int writecombine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 int FUNC_0 (struct cpuinfo_mips*) ;

__attribute__((used)) static inline void FUNC_1(struct cpuinfo_mips *VAR_8, unsigned int VAR_9)
{
 FUNC_0(VAR_8);

 VAR_8->writecombine = VAR_6;
 switch (VAR_8->processor_id & VAR_4) {
 case 129:
  VAR_8->cputype = VAR_0;
  VAR_7[VAR_9] = "SiByte SB1";

  if ((VAR_8->processor_id & VAR_5) < 0x02)
   VAR_8->options &= ~(VAR_3 | VAR_2);
  break;
 case 128:
  VAR_8->cputype = VAR_1;
  VAR_7[VAR_9] = "SiByte SB1A";
  break;
 }
}
