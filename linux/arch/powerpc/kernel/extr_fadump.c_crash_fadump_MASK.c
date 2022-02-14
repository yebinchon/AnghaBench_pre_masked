
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fadump_crash_info_header {int online_mask; struct pt_regs regs; int crashing_cpu; } ;
struct TYPE_4__ {TYPE_1__* ops; int fadumphdr_addr; scalar_t__ dump_registered; } ;
struct TYPE_3__ {int (* fadump_trigger ) (struct fadump_crash_info_header*,char const*) ;} ;


 struct fadump_crash_info_header* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;
 int * VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct fadump_crash_info_header*,char const*) ;

void FUNC_8(struct pt_regs *VAR_3, const char *VAR_4)
{
 struct fadump_crash_info_header *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 if (!FUNC_5())
  return;
 VAR_7 = FUNC_6();
 VAR_6 = FUNC_1(&VAR_1, -1, VAR_7);

 if (VAR_6 != -1) {







  while (VAR_2.dump_registered)
   FUNC_2();
  return;
 }

 VAR_5 = FUNC_0(VAR_2.fadumphdr_addr);
 VAR_5->crashing_cpu = VAR_1;
 FUNC_3();

 if (VAR_3)
  VAR_5->regs = *VAR_3;
 else
  FUNC_4(&VAR_5->regs);

 VAR_5->online_mask = *VAR_0;

 VAR_2.ops->fadump_trigger(VAR_5, VAR_4);
}
