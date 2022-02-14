
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int ctl; } ;
struct TYPE_4__ {int ctl_bitmask; int addr_range; int caps; TYPE_1__ guest; } ;
struct vcpu_vmx {TYPE_2__ pt_desc; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int,unsigned long*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_23, u64 VAR_24)
{
 struct vcpu_vmx *VAR_25 = FUNC_2(VAR_23);
 unsigned long VAR_26;





 if (VAR_24 & VAR_25->pt_desc.ctl_bitmask)
  return 1;





 if ((VAR_25->pt_desc.guest.ctl & VAR_22) &&
  ((VAR_25->pt_desc.guest.ctl ^ VAR_24) & ~VAR_22))
  return 1;






 if ((VAR_24 & VAR_22) && !(VAR_24 & VAR_21) &&
  !(VAR_24 & VAR_16) &&
  !FUNC_0(VAR_25->pt_desc.caps,
     VAR_5))
  return 1;





 VAR_26 = FUNC_0(VAR_25->pt_desc.caps, VAR_2);
 if (FUNC_0(VAR_25->pt_desc.caps, VAR_1) &&
   !FUNC_1((VAR_24 & VAR_17) >>
   VAR_18, &VAR_26))
  return 1;
 VAR_26 = FUNC_0(VAR_25->pt_desc.caps,
      VAR_0);
 if (FUNC_0(VAR_25->pt_desc.caps, VAR_3) &&
   !FUNC_1((VAR_24 & VAR_14) >>
   VAR_15, &VAR_26))
  return 1;
 VAR_26 = FUNC_0(VAR_25->pt_desc.caps, VAR_4);
 if (FUNC_0(VAR_25->pt_desc.caps, VAR_3) &&
   !FUNC_1((VAR_24 & VAR_19) >>
   VAR_20, &VAR_26))
  return 1;





 VAR_26 = (VAR_24 & VAR_6) >> VAR_7;
 if ((VAR_26 && (VAR_25->pt_desc.addr_range < 1)) || (VAR_26 > 2))
  return 1;
 VAR_26 = (VAR_24 & VAR_8) >> VAR_9;
 if ((VAR_26 && (VAR_25->pt_desc.addr_range < 2)) || (VAR_26 > 2))
  return 1;
 VAR_26 = (VAR_24 & VAR_10) >> VAR_11;
 if ((VAR_26 && (VAR_25->pt_desc.addr_range < 3)) || (VAR_26 > 2))
  return 1;
 VAR_26 = (VAR_24 & VAR_12) >> VAR_13;
 if ((VAR_26 && (VAR_25->pt_desc.addr_range < 4)) || (VAR_26 > 2))
  return 1;

 return 0;
}
