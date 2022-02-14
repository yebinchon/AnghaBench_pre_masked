
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int ctl; } ;
struct TYPE_6__ {int addr_range; TYPE_2__ guest; } ;
struct TYPE_4__ {unsigned long* msr_bitmap; } ;
struct vcpu_vmx {TYPE_3__ pt_desc; TYPE_1__ vmcs01; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long*,scalar_t__,int ,int) ;

void FUNC_1(struct vcpu_vmx *VAR_8)
{
 unsigned long *VAR_9 = VAR_8->vmcs01.msr_bitmap;
 bool VAR_10 = !(VAR_8->pt_desc.guest.ctl & VAR_7);
 u32 VAR_11;

 FUNC_0(VAR_9, VAR_5,
       VAR_6, VAR_10);
 FUNC_0(VAR_9, VAR_3,
       VAR_6, VAR_10);
 FUNC_0(VAR_9, VAR_4,
       VAR_6, VAR_10);
 FUNC_0(VAR_9, VAR_2,
       VAR_6, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_8->pt_desc.addr_range; VAR_11++) {
  FUNC_0(VAR_9,
   VAR_0 + VAR_11 * 2, VAR_6, VAR_10);
  FUNC_0(VAR_9,
   VAR_1 + VAR_11 * 2, VAR_6, VAR_10);
 }
}
