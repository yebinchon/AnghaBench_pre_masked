
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ,unsigned int) ;
 int FUNC_7 (struct kvm_vcpu*,scalar_t__,int ,unsigned int) ;
 int FUNC_8 (struct kvm_vcpu*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_4, u64 VAR_5, bool VAR_6)
{
 u64 VAR_7;
 bool VAR_8;

 if (FUNC_5(VAR_4, VAR_5, VAR_6))
  return VAR_1;

 VAR_8 = FUNC_8(VAR_4, VAR_5, &VAR_7);
 if (FUNC_0(VAR_8))
  return -VAR_0;

 if (FUNC_4(VAR_7)) {
  gfn_t VAR_9 = FUNC_3(VAR_7);
  unsigned VAR_10 = FUNC_2(VAR_7);

  if (!FUNC_1(VAR_4, VAR_7))
   return VAR_2;

  if (VAR_6)
   VAR_5 = 0;

  FUNC_6(VAR_5, VAR_9, VAR_10);
  FUNC_7(VAR_4, VAR_5, VAR_9, VAR_10);
  return VAR_1;
 }





 return VAR_3;
}
