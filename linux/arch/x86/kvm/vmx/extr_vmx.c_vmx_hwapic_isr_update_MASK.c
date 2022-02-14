
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, int VAR_2)
{
 u16 VAR_3;
 u8 VAR_4;

 if (VAR_2 == -1)
  VAR_2 = 0;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_3 >> 8;
 if (VAR_2 != VAR_4) {
  VAR_3 &= 0xff;
  VAR_3 |= VAR_2 << 8;
  FUNC_1(VAR_0, VAR_3);
 }
}
