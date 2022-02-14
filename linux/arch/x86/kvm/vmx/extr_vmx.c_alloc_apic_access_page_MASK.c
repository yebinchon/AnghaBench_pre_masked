
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int apic_access_page_done; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm*,int ,int,int ) ;
 struct page* FUNC_1 (struct kvm*,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_5)
{
 struct page *VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_5->slots_lock);
 if (VAR_5->arch.apic_access_page_done)
  goto out;
 VAR_7 = FUNC_0(VAR_5, VAR_0,
        VAR_1, VAR_4);
 if (VAR_7)
  goto out;

 VAR_6 = FUNC_1(VAR_5, VAR_1 >> VAR_3);
 if (FUNC_2(VAR_6)) {
  VAR_7 = -VAR_2;
  goto out;
 }





 FUNC_5(VAR_6);
 VAR_5->arch.apic_access_page_done = 1;
out:
 FUNC_4(&VAR_5->slots_lock);
 return VAR_7;
}
