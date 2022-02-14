
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cs; int ip; } ;
struct mce {scalar_t__ finished; int cs; int ip; } ;


 int FUNC_0 (struct pt_regs*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pt_regs*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mce *VAR_0, struct pt_regs *VAR_1)
{
 struct pt_regs VAR_2;
 unsigned long VAR_3;

 if (!VAR_1) {
  FUNC_3(&VAR_2, 0, sizeof(struct pt_regs));
  VAR_2.ip = VAR_0->ip;
  VAR_2.cs = VAR_0->cs;
  VAR_1 = &VAR_2;
 }

 FUNC_2(VAR_3);
 FUNC_0(VAR_1, 0);
 FUNC_1(VAR_3);
 VAR_0->finished = 0;
}
