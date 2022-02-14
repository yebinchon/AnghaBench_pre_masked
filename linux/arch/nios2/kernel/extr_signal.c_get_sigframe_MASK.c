
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; } ;
struct ksignal {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,struct ksignal*) ;

__attribute__((used)) static inline void *FUNC_1(struct ksignal *VAR_0, struct pt_regs *VAR_1,
     size_t VAR_2)
{
 unsigned long VAR_3;


 VAR_3 = VAR_1->sp;


 VAR_3 = FUNC_0(VAR_3, VAR_0);


 return (void *)((VAR_3 - VAR_2) & -8UL);
}
