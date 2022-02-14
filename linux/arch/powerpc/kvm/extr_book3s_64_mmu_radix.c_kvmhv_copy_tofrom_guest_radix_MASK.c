
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pid; TYPE_1__* nested; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_3__* kvm; } ;
typedef int gva_t ;
struct TYPE_6__ {int lpid; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;
struct TYPE_5__ {int shadow_lpid; } ;


 long VAR_0 ;
 long FUNC_0 (int,int,int,void*,void*,unsigned long) ;

__attribute__((used)) static long FUNC_1(struct kvm_vcpu *VAR_1, gva_t VAR_2,
       void *VAR_3, void *VAR_4, unsigned long VAR_5)
{
 int VAR_6 = VAR_1->kvm->arch.lpid;
 int VAR_7 = VAR_1->arch.pid;


 if (VAR_2 & (0x3FFUL << 52))
  return -VAR_0;


 if (VAR_1->arch.nested)
  VAR_6 = VAR_1->arch.nested->shadow_lpid;


 if (((VAR_2 >> 62) & 0x3) == 0x3)
  VAR_7 = 0;

 VAR_2 &= ~(0xFFFUL << 52);

 return FUNC_0(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
}
