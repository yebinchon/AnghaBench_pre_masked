
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int nip; } ;
struct mce_error_info {int ignore_event; } ;
struct exception_table_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* mce_check_early_recovery ) (struct pt_regs*) ;} ;


 int FUNC_0 (struct exception_table_entry const*) ;
 TYPE_1__ VAR_0 ;
 struct exception_table_entry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static long FUNC_3(struct pt_regs *VAR_1,
    struct mce_error_info *VAR_2)
{
 long VAR_3 = 0;
 const struct exception_table_entry *VAR_4;

 VAR_4 = FUNC_1(VAR_1->nip);
 if (VAR_4) {
  VAR_2->ignore_event = 1;
  VAR_1->nip = FUNC_0(VAR_4);
  return 1;
 }
 if (VAR_0.mce_check_early_recovery) {
  if (VAR_0.mce_check_early_recovery(VAR_1))
   VAR_3 = 1;
 }
 return VAR_3;
}
