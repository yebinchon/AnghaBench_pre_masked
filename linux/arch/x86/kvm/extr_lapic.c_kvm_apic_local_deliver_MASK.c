
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_lapic*,int,int,int,int,int *) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int) ;

int FUNC_3(struct kvm_lapic *VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_4, VAR_5);
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_1(VAR_4) && !(VAR_6 & VAR_1)) {
  VAR_7 = VAR_6 & VAR_3;
  VAR_8 = VAR_6 & VAR_2;
  VAR_9 = VAR_6 & VAR_0;
  return FUNC_0(VAR_4, VAR_8, VAR_7, 1, VAR_9,
     ((void*)0));
 }
 return 0;
}
