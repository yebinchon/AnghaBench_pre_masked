
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lpid; scalar_t__ process_table; int hpt; int threads_indep; int debugfs_dir; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct kvm*) ;
 int FUNC_9 (struct kvm*) ;
 int FUNC_10 (struct kvm*) ;
 scalar_t__ FUNC_11 (struct kvm*) ;

__attribute__((used)) static void FUNC_12(struct kvm *VAR_1)
{
 FUNC_1(VAR_1->arch.debugfs_dir);

 if (!VAR_1->arch.threads_indep)
  FUNC_2();

 FUNC_10(VAR_1);


 if (FUNC_3(VAR_1))
  FUNC_9(VAR_1);
 else
  FUNC_6(&VAR_1->arch.hpt);


 if (FUNC_0(VAR_0)) {
  if (FUNC_11(VAR_1))
   FUNC_4(VAR_1);
  VAR_1->arch.process_table = 0;
  FUNC_5(VAR_1->arch.lpid, 0, 0);
 }
 FUNC_7(VAR_1->arch.lpid);

 FUNC_8(VAR_1);
}
