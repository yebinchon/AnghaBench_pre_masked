
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct unwind_state {int fp; int sp; int pc; } ;


 int FUNC_0 (int) ;

int
FUNC_1(struct unwind_state *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = VAR_0->fp;

 if (!FUNC_0(VAR_1))
  return (-1);

 VAR_0->sp = VAR_1;
 VAR_0->fp = *(uint64_t *)(VAR_1 - 16);
 VAR_0->pc = *(uint64_t *)(VAR_1 - 8) - 4;

 return (0);
}
