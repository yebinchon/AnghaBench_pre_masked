
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bitmask; } ;
struct TYPE_6__ {int regs_avail; } ;
struct TYPE_5__ {TYPE_3__ arch; } ;
struct vcpu_vmx {TYPE_1__ segment_cache; TYPE_2__ vcpu; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct vcpu_vmx *VAR_2, unsigned VAR_3,
           unsigned VAR_4)
{
 bool VAR_5;
 u32 VAR_6 = 1 << (VAR_3 * VAR_0 + VAR_4);

 if (!(VAR_2->vcpu.arch.regs_avail & (1 << VAR_1))) {
  VAR_2->vcpu.arch.regs_avail |= (1 << VAR_1);
  VAR_2->segment_cache.bitmask = 0;
 }
 VAR_5 = VAR_2->segment_cache.bitmask & VAR_6;
 VAR_2->segment_cache.bitmask |= VAR_6;
 return VAR_5;
}
