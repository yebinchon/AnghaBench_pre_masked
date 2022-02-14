
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct kvm_sev_info {unsigned long pages_locked; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int FUNC_0 (struct page**) ;
 int FUNC_1 (struct page**,unsigned long) ;
 TYPE_1__* FUNC_2 (struct kvm*) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0, struct page **VAR_1,
        unsigned long VAR_2)
{
 struct kvm_sev_info *VAR_3 = &FUNC_2(VAR_0)->sev_info;

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 VAR_3->pages_locked -= VAR_2;
}
