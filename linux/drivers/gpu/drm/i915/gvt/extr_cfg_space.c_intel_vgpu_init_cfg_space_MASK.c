
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {TYPE_2__* bar; } ;
struct intel_vgpu {TYPE_3__ cfg_space; struct intel_gvt* gvt; } ;
struct intel_gvt_device_info {int cfg_space_size; } ;
struct TYPE_6__ {int cfg_space; } ;
struct intel_gvt {TYPE_5__* dev_priv; TYPE_1__ firmware; struct intel_gvt_device_info device_info; } ;
struct TYPE_9__ {int pdev; } ;
struct TYPE_10__ {TYPE_4__ drm; } ;
struct TYPE_7__ {void* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct intel_gvt*) ;
 int FUNC_1 (struct intel_vgpu*,int ,int ,int) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int*,int ,int) ;
 void* FUNC_4 (int ,int) ;
 int* FUNC_5 (struct intel_vgpu*) ;

void FUNC_6(struct intel_vgpu *VAR_18,
          bool VAR_19)
{
 struct intel_gvt *VAR_20 = VAR_18->gvt;
 const struct intel_gvt_device_info *VAR_21 = &VAR_20->device_info;
 u16 *VAR_22;

 FUNC_2(FUNC_5(VAR_18), VAR_20->firmware.cfg_space,
        VAR_21->cfg_space_size);

 if (!VAR_19) {
  FUNC_5(VAR_18)[VAR_11] =
   VAR_4;
  FUNC_5(VAR_18)[VAR_12] =
   VAR_4;
 }


 VAR_22 = (u16 *)(FUNC_5(VAR_18) + VAR_5);
 *VAR_22 &= ~(VAR_0 << VAR_1);

 FUNC_1(VAR_18, VAR_8,
     FUNC_0(VAR_20), 1);

 FUNC_5(VAR_18)[VAR_13] &= ~(VAR_14
          | VAR_16
          | VAR_15);



 FUNC_3(FUNC_5(VAR_18) + VAR_7, 0, 4);
 FUNC_3(FUNC_5(VAR_18) + VAR_9, 0, 4);
 FUNC_3(FUNC_5(VAR_18) + VAR_10, 0, 8);
 FUNC_3(FUNC_5(VAR_18) + VAR_6, 0, 4);

 VAR_18->cfg_space.bar[VAR_3].size =
    FUNC_4(VAR_20->dev_priv->drm.pdev, 0);
 VAR_18->cfg_space.bar[VAR_2].size =
    FUNC_4(VAR_20->dev_priv->drm.pdev, 2);

 FUNC_3(FUNC_5(VAR_18) + VAR_17, 0, 4);
}
