
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pcpu {int pc_clock; } ;


 int VAR_0 ;
 struct pcpu* FUNC_0 (int) ;

int
FUNC_1(int VAR_1, uint64_t *VAR_2)
{
 struct pcpu *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
  return (VAR_0);
 *VAR_2 = VAR_3->pc_clock;
 return (0);
}
