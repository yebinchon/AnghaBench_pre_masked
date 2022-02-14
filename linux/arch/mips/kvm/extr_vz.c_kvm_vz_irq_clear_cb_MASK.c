
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pending_exceptions_clr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;






 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3, unsigned int VAR_4,
          u32 VAR_5)
{
 u32 VAR_6 = (VAR_4 < VAR_0) ?
  VAR_2[VAR_4] : 0;

 switch (VAR_4) {
 case 128:






  if (VAR_1) {
   if (!(FUNC_3() & (VAR_6 << 14)))
    FUNC_1(VAR_6);
  } else {
   FUNC_2(VAR_6);
  }
  break;

 case 131:
 case 130:
 case 129:

  if (VAR_1) {
   if (!(FUNC_3() & (VAR_6 << 14)))
    FUNC_1(VAR_6);
  } else {
   FUNC_2(VAR_6);
  }
  break;

 default:
  break;
 }

 FUNC_0(VAR_4, &VAR_3->arch.pending_exceptions_clr);
 return 1;
}
