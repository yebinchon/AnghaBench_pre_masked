
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (struct kvm_lapic*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_lapic *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_0);
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_8 = FUNC_0(VAR_2);
 VAR_5 = (VAR_8 != -1) ? VAR_8 : 0;

 if ((VAR_4 & 0xf0) >= (VAR_5 & 0xf0))
  VAR_6 = VAR_4 & 0xff;
 else
  VAR_6 = VAR_5 & 0xf0;

 *VAR_3 = VAR_6;
 if (VAR_7 != VAR_6)
  FUNC_2(VAR_2, VAR_0, VAR_6);

 return VAR_6 < VAR_7;
}
