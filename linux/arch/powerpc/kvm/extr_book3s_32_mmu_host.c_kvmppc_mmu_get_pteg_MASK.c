
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 *FUNC_1(struct kvm_vcpu *VAR_3, u32 VAR_4, u32 VAR_5,
    bool VAR_6)
{
 u32 VAR_7, VAR_8;
 ulong VAR_9 = VAR_1;

 VAR_7 = (VAR_5 & ~VAR_0) >> 12;

 VAR_8 = ((VAR_4 ^ VAR_7) << 6);
 if (!VAR_6)
  VAR_8 = ~VAR_8;

 VAR_8 &= VAR_2;

 VAR_9 |= VAR_8;

 FUNC_0("htab: %lx | hash: %x | htabmask: %x | pteg: %lx\n",
  VAR_1, VAR_8, VAR_2, VAR_9);

 return (u32*)VAR_9;
}
