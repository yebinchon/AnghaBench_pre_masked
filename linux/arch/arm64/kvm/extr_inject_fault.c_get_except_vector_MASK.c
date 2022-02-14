
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
typedef enum exception_type { ____Placeholder_exception_type } exception_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_7, enum exception_type VAR_8)
{
 u64 VAR_9;

 switch (*FUNC_0(VAR_7) & (VAR_5 | VAR_4)) {
 case 128:
  VAR_9 = VAR_0;
  break;
 case 129:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 default:
  VAR_9 = VAR_2;
 }

 return FUNC_1(VAR_7, VAR_6) + VAR_9 + VAR_8;
}
