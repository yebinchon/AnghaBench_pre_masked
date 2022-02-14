
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct cpuinfo_mips *VAR_2)
{
 if (FUNC_0() & VAR_1)
  VAR_2->options |= VAR_0;
}
