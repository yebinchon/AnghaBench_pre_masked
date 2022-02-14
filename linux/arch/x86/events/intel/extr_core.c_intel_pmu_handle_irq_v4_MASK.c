
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct cpu_hw_events {int enabled; int active_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct pt_regs*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int ) ;
 struct cpu_hw_events* FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct pt_regs *VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_13(&VAR_3);
 int VAR_6 = 0;
 bool VAR_7 = 0;
 u64 VAR_8;
 int VAR_9 = VAR_5->enabled;
 int VAR_10 = 0;


 VAR_5->enabled = 0;
 if (FUNC_12(VAR_2, VAR_5->active_mask)) {
  VAR_7 = 1;
  FUNC_3();
  VAR_6 = FUNC_7();
  VAR_6 += FUNC_5();
 }
 VAR_8 = FUNC_8();
 if (!VAR_8)
  goto done;
again:
 FUNC_9();
 if (++VAR_10 > 100) {
  static bool VAR_11;

  if (!VAR_11) {
   FUNC_0(1, "perfevents: irq loop stuck!\n");
   FUNC_11();
   VAR_11 = 1;
  }
  FUNC_10();
  goto done;
 }


 VAR_6 += FUNC_2(VAR_4, VAR_8);
done:

 FUNC_1(VAR_1, VAR_0);






 if (VAR_8) {
  FUNC_6(VAR_8);
 } else {
  VAR_8 = FUNC_8();
  if (VAR_8)
   goto again;
 }

 if (VAR_7)
  FUNC_4();
 VAR_5->enabled = VAR_9;
 return VAR_6;
}
