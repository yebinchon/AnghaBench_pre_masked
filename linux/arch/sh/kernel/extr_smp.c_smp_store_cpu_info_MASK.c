
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cpuinfo {int loops_per_jiffy; } ;


 int VAR_0 ;
 struct sh_cpuinfo* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_cpuinfo*,int *,int) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_3)
{
 struct sh_cpuinfo *VAR_4 = VAR_1 + VAR_3;

 FUNC_0(VAR_4, &VAR_0, sizeof(struct sh_cpuinfo));

 VAR_4->loops_per_jiffy = VAR_2;
}
