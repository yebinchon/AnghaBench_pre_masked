
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct cpu_hw_events {int enabled; } ;
struct TYPE_2__ {scalar_t__ late_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct pt_regs*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 struct cpu_hw_events* FUNC_14 (int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_15(struct pt_regs *VAR_4)
{
 struct cpu_hw_events *VAR_5;
 int VAR_6;
 u64 VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_14(&VAR_2);





 VAR_9 = VAR_5->enabled;




 if (!VAR_3.late_ack)
  FUNC_3(VAR_1, VAR_0);
 FUNC_5();
 VAR_5->enabled = 0;
 FUNC_1();
 VAR_8 = FUNC_9();
 VAR_8 += FUNC_7();
 VAR_7 = FUNC_10();
 if (!VAR_7)
  goto done;

 VAR_6 = 0;
again:
 FUNC_11();
 FUNC_8(VAR_7);
 if (++VAR_6 > 100) {
  static bool VAR_10;

  if (!VAR_10) {
   FUNC_0(1, "perfevents: irq loop stuck!\n");
   FUNC_13();
   VAR_10 = 1;
  }
  FUNC_12();
  goto done;
 }

 VAR_8 += FUNC_4(VAR_4, VAR_7);




 VAR_7 = FUNC_10();
 if (VAR_7)
  goto again;

done:

 VAR_5->enabled = VAR_9;
 if (VAR_9)
  FUNC_2(0, 1);
 FUNC_6();






 if (VAR_3.late_ack)
  FUNC_3(VAR_1, VAR_0);
 return VAR_8;
}
