
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int unknown; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(unsigned char VAR_4, struct pt_regs *VAR_5)
{
 int VAR_6;







 VAR_6 = FUNC_1(VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_1.unknown, VAR_6);
  return;
 }

 FUNC_0(VAR_1.unknown, 1);

 FUNC_3("Uhhuh. NMI received for unknown reason %02x on CPU %d.\n",
   VAR_4, FUNC_4());

 FUNC_3("Do you have a strange power saving mode enabled?\n");
 if (VAR_3 || VAR_2)
  FUNC_2(VAR_5, "NMI: Not continuing");

 FUNC_3("Dazed and confused, but trying to continue\n");
}
