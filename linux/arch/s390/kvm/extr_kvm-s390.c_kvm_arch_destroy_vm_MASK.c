
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gmap; scalar_t__ sie_page2; int dbf; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int,char*,struct kvm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*) ;
 int FUNC_8 (struct kvm*) ;
 int FUNC_9 (struct kvm*) ;
 int FUNC_10 (struct kvm*) ;

void FUNC_11(struct kvm *VAR_0)
{
 FUNC_4(VAR_0);
 FUNC_10(VAR_0);
 FUNC_1(VAR_0->arch.dbf);
 FUNC_8(VAR_0);
 FUNC_2((unsigned long)VAR_0->arch.sie_page2);
 if (!FUNC_5(VAR_0))
  FUNC_3(VAR_0->arch.gmap);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 FUNC_9(VAR_0);
 FUNC_0(3, "vm 0x%pK destroyed", VAR_0);
}
