
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {int sa_flags; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct ksignal {TYPE_2__ ka; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksignal*,int *,struct pt_regs*) ;
 int FUNC_1 (struct ksignal*,int *,struct pt_regs*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int,struct ksignal*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ksignal *VAR_2, struct pt_regs *VAR_3)
{
 sigset_t *VAR_4 = FUNC_2();
 int VAR_5;


 if (VAR_2->ka.sa.sa_flags & VAR_0)
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
 else
  VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3);

 FUNC_3(VAR_5, VAR_2, FUNC_4(VAR_1));
}
