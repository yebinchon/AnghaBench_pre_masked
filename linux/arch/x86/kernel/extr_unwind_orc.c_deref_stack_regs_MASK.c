
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;
struct pt_regs {unsigned long ip; unsigned long sp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct unwind_state*,unsigned long,int) ;

__attribute__((used)) static bool FUNC_3(struct unwind_state *VAR_1, unsigned long VAR_2,
        unsigned long *VAR_3, unsigned long *VAR_4)
{
 struct pt_regs *VAR_5 = (struct pt_regs *)VAR_2;


 FUNC_0(FUNC_1(VAR_0));

 if (!FUNC_2(VAR_1, VAR_2, sizeof(struct pt_regs)))
  return 0;

 *VAR_3 = VAR_5->ip;
 *VAR_4 = VAR_5->sp;
 return 1;
}
