
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ip; unsigned long sp; unsigned int cs; unsigned int ss; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct pt_regs* FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct pt_regs *VAR_6, unsigned long VAR_7,
      unsigned long VAR_8,
      unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 FUNC_0(VAR_6 != FUNC_1());

 if (FUNC_5(VAR_0)) {

  FUNC_4(VAR_5, VAR_2);
  FUNC_3(VAR_2);
 }

 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_4, VAR_11);
 FUNC_4(VAR_3, VAR_11);
 FUNC_3(0);

 VAR_6->ip = VAR_7;
 VAR_6->sp = VAR_8;
 VAR_6->cs = VAR_9;
 VAR_6->ss = VAR_10;
 VAR_6->flags = VAR_1;
 FUNC_2();
}
