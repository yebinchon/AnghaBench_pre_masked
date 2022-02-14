
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int efer; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;
struct vcpu_vmx {TYPE_3__* guest_msrs; TYPE_2__ vcpu; } ;
struct TYPE_6__ {int data; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vcpu_vmx*,int ,int,int,int) ;
 int FUNC_1 (struct vcpu_vmx*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_3(struct vcpu_vmx *VAR_7, int VAR_8)
{
 u64 VAR_9 = VAR_7->vcpu.arch.efer;
 u64 VAR_10 = 0;


 if (!VAR_5)
  VAR_9 |= VAR_2;




 VAR_10 |= VAR_3;
 if (FUNC_2() ||
     (VAR_5 && ((VAR_7->vcpu.arch.efer ^ VAR_6) & VAR_2))) {
  if (!(VAR_9 & VAR_0))
   VAR_9 &= ~VAR_1;
  if (VAR_9 != VAR_6)
   FUNC_0(VAR_7, VAR_4,
           VAR_9, VAR_6, 0);
  else
   FUNC_1(VAR_7, VAR_4);
  return 0;
 } else {
  FUNC_1(VAR_7, VAR_4);

  VAR_9 &= ~VAR_10;
  VAR_9 |= VAR_6 & VAR_10;

  VAR_7->guest_msrs[VAR_8].data = VAR_9;
  VAR_7->guest_msrs[VAR_8].mask = ~VAR_10;

  return 1;
 }
}
