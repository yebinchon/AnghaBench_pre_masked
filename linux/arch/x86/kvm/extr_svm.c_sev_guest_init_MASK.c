
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_sev_info {int active; int asid; int regions_list; } ;
struct kvm_sev_cmd {int error; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct kvm*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_1, struct kvm_sev_cmd *VAR_2)
{
 struct kvm_sev_info *VAR_3 = &FUNC_4(VAR_1)->sev_info;
 int VAR_4, VAR_5;

 VAR_5 = -VAR_0;
 if (FUNC_5(VAR_3->active))
  return VAR_5;

 VAR_4 = FUNC_2();
 if (VAR_4 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_2->error);
 if (VAR_5)
  goto e_free;

 VAR_3->active = 1;
 VAR_3->asid = VAR_4;
 FUNC_0(&VAR_3->regions_list);

 return 0;

e_free:
 FUNC_1(VAR_4);
 return VAR_5;
}
