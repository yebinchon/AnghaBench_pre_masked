
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int cputype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 char** VAR_3 ;
 int FUNC_0 (struct cpuinfo_mips*) ;
 int FUNC_1 (struct cpuinfo_mips*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct cpuinfo_mips *VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_4);
 switch (VAR_4->processor_id & VAR_2) {
 case 128:
  VAR_4->cputype = VAR_0;
  VAR_3[VAR_5] = "Philips PR4450";
  FUNC_1(VAR_4, VAR_1);
  break;
 }
}
