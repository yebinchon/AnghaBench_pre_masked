
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*,char*) ;
 int FUNC_5 (struct pt_regs*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned long) ;

__attribute__((used)) static void FUNC_15(unsigned long VAR_8, struct pt_regs *VAR_9,
          int VAR_10)
{
 FUNC_3(0);
 FUNC_1(VAR_2, VAR_0);
 VAR_5--;
 FUNC_11();
 FUNC_13("\n");
 if (!VAR_5) {

  VAR_6 = -1;
  FUNC_2(&VAR_4);
 }
 FUNC_14(VAR_8);




 if (FUNC_0(VAR_9) == 0x100)
  return;

 FUNC_4(VAR_9, "die oops");

 if (FUNC_9(VAR_3))
  FUNC_5(VAR_9);

 if (!VAR_10)
  return;







 if (FUNC_7() || VAR_7 || !VAR_3->pid ||
     FUNC_8(VAR_3)) {
  FUNC_10(VAR_1);
 }

 if (VAR_7)
  FUNC_12("Fatal exception");
 FUNC_6(VAR_10);
}
