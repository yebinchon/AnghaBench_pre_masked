
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct k_sigaction *VAR_2, struct k_sigaction *VAR_3)
{
 FUNC_2();


 if (VAR_3)
  VAR_3->sa.sa_flags &= ~(VAR_0 | VAR_1);

 if (!VAR_2)
  return;


 VAR_2->sa.sa_flags &= ~(VAR_0 | VAR_1);

 if (FUNC_0())
  VAR_2->sa.sa_flags |= VAR_0;
 if (FUNC_1())
  VAR_2->sa.sa_flags |= VAR_1;
}
