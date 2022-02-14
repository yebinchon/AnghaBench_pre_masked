
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ clock_stretcher_support; scalar_t__ power_containment_support; scalar_t__ psm_didt_support; scalar_t__ gc_didt_support; scalar_t__ edc_didt_support; scalar_t__ dbr_ramping_support; scalar_t__ tcp_ramping_support; scalar_t__ td_ramping_support; scalar_t__ db_ramping_support; scalar_t__ sq_ramping_support; scalar_t__ didt_support; } ;
struct vega10_hwmgr {scalar_t__ vddci_control; TYPE_2__ registry_data; } ;
struct TYPE_6__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_3__ platform_descriptor; struct amdgpu_device* adev; scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {TYPE_1__* tdp_table; } ;
struct amdgpu_device {int pg_flags; } ;
struct TYPE_4__ {scalar_t__ usClockStretchAmount; } ;


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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_30)
{
 struct vega10_hwmgr *VAR_31 = VAR_30->backend;
 struct phm_ppt_v2_information *VAR_32 =
   (struct phm_ppt_v2_information *)VAR_30->pptable;
 struct amdgpu_device *VAR_33 = VAR_30->adev;

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_21);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_10);

 if (VAR_31->vddci_control == VAR_29)
  FUNC_1(VAR_30->platform_descriptor.platformCaps,
    VAR_5);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_12);

 if (VAR_33->pg_flags & VAR_0)
  FUNC_0(VAR_30->platform_descriptor.platformCaps,
    VAR_25);

 if (VAR_33->pg_flags & VAR_1)
  FUNC_0(VAR_30->platform_descriptor.platformCaps,
    VAR_28);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_26);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_13);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_15);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
    VAR_11);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_19);



 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_17);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_9);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_20);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_7);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_23);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_22);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_6);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_8);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_14);
 FUNC_1(VAR_30->platform_descriptor.platformCaps,
   VAR_16);

 if (VAR_31->registry_data.didt_support) {
  FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_9);
  if (VAR_31->registry_data.sq_ramping_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_20);
  if (VAR_31->registry_data.db_ramping_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_7);
  if (VAR_31->registry_data.td_ramping_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_23);
  if (VAR_31->registry_data.tcp_ramping_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_22);
  if (VAR_31->registry_data.dbr_ramping_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_6);
  if (VAR_31->registry_data.edc_didt_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_8);
  if (VAR_31->registry_data.gc_didt_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_14);
  if (VAR_31->registry_data.psm_didt_support)
   FUNC_0(VAR_30->platform_descriptor.platformCaps, VAR_16);
 }

 if (VAR_31->registry_data.power_containment_support)
  FUNC_0(VAR_30->platform_descriptor.platformCaps,
    VAR_17);
 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_3);

 if (VAR_32->tdp_table->usClockStretchAmount &&
   VAR_31->registry_data.clock_stretcher_support)
  FUNC_0(VAR_30->platform_descriptor.platformCaps,
    VAR_4);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_18);
 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_2);

 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_24);
 FUNC_0(VAR_30->platform_descriptor.platformCaps,
   VAR_27);

 return 0;
}
