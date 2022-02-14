
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ivor; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int * ivor_low; int features; } ;
struct TYPE_5__ {TYPE_1__ e; } ;
struct kvm_sregs {TYPE_2__ u; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;

int FUNC_0(struct kvm_vcpu *VAR_17, struct kvm_sregs *VAR_18)
{
 VAR_18->u.e.features |= VAR_16;

 VAR_18->u.e.ivor_low[0] = VAR_17->arch.ivor[VAR_2];
 VAR_18->u.e.ivor_low[1] = VAR_17->arch.ivor[VAR_12];
 VAR_18->u.e.ivor_low[2] = VAR_17->arch.ivor[VAR_3];
 VAR_18->u.e.ivor_low[3] = VAR_17->arch.ivor[VAR_10];
 VAR_18->u.e.ivor_low[4] = VAR_17->arch.ivor[VAR_7];
 VAR_18->u.e.ivor_low[5] = VAR_17->arch.ivor[VAR_0];
 VAR_18->u.e.ivor_low[6] = VAR_17->arch.ivor[VAR_13];
 VAR_18->u.e.ivor_low[7] = VAR_17->arch.ivor[VAR_9];
 VAR_18->u.e.ivor_low[8] = VAR_17->arch.ivor[VAR_14];
 VAR_18->u.e.ivor_low[9] = VAR_17->arch.ivor[VAR_1];
 VAR_18->u.e.ivor_low[10] = VAR_17->arch.ivor[VAR_5];
 VAR_18->u.e.ivor_low[11] = VAR_17->arch.ivor[VAR_8];
 VAR_18->u.e.ivor_low[12] = VAR_17->arch.ivor[VAR_15];
 VAR_18->u.e.ivor_low[13] = VAR_17->arch.ivor[VAR_6];
 VAR_18->u.e.ivor_low[14] = VAR_17->arch.ivor[VAR_11];
 VAR_18->u.e.ivor_low[15] = VAR_17->arch.ivor[VAR_4];
 return 0;
}
