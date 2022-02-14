
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_interrupt_params {size_t irq_source; void* int_context; void* current_polarity; void* requested_polarity; int member_0; } ;
struct dc {int dummy; } ;
struct common_irq_params {size_t irq_src; struct amdgpu_device* adev; } ;
struct TYPE_2__ {struct common_irq_params* pflip_params; struct common_irq_params* vupdate_params; struct common_irq_params* vblank_params; struct dc* dc; } ;
struct amdgpu_device {scalar_t__ asic_type; int hpd_irq; TYPE_1__ dm; int pageflip_irq; int vupdate_irq; int crtc_irq; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct amdgpu_device*,struct dc_interrupt_params*,int ,struct common_irq_params*) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int,int,int *) ;
 void* FUNC_3 (struct dc*,int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_18)
{
 struct dc *VAR_19 = VAR_18->dm.dc;
 struct common_irq_params *VAR_20;
 struct dc_interrupt_params VAR_21 = {0};
 int VAR_22;
 int VAR_23;
 unsigned VAR_24 = VAR_0;

 if (VAR_18->asic_type >= VAR_1)
  VAR_24 = VAR_7;

 VAR_21.requested_polarity = VAR_6;
 VAR_21.current_polarity = VAR_6;
 for (VAR_23 = VAR_9; VAR_23 <= VAR_12; VAR_23++) {
  VAR_22 = FUNC_2(VAR_18, VAR_24, VAR_23, &VAR_18->crtc_irq);
  if (VAR_22) {
   FUNC_0("Failed to add crtc irq id!\n");
   return VAR_22;
  }

  VAR_21.int_context = VAR_5;
  VAR_21.irq_source =
   FUNC_3(VAR_19, VAR_23, 0);

  VAR_20 = &VAR_18->dm.vblank_params[VAR_21.irq_source - VAR_3];

  VAR_20->adev = VAR_18;
  VAR_20->irq_src = VAR_21.irq_source;

  FUNC_1(VAR_18, &VAR_21,
    VAR_15, VAR_20);
 }


 for (VAR_23 = VAR_10; VAR_23 <= VAR_13; VAR_23 += 2) {
  VAR_22 = FUNC_2(VAR_18, VAR_24, VAR_23, &VAR_18->vupdate_irq);
  if (VAR_22) {
   FUNC_0("Failed to add vupdate irq id!\n");
   return VAR_22;
  }

  VAR_21.int_context = VAR_5;
  VAR_21.irq_source =
   FUNC_3(VAR_19, VAR_23, 0);

  VAR_20 = &VAR_18->dm.vupdate_params[VAR_21.irq_source - VAR_4];

  VAR_20->adev = VAR_18;
  VAR_20->irq_src = VAR_21.irq_source;

  FUNC_1(VAR_18, &VAR_21,
    VAR_17, VAR_20);
 }


 for (VAR_23 = VAR_8;
   VAR_23 <= VAR_11; VAR_23 += 2) {
  VAR_22 = FUNC_2(VAR_18, VAR_24, VAR_23, &VAR_18->pageflip_irq);
  if (VAR_22) {
   FUNC_0("Failed to add page flip irq id!\n");
   return VAR_22;
  }

  VAR_21.int_context = VAR_5;
  VAR_21.irq_source =
   FUNC_3(VAR_19, VAR_23, 0);

  VAR_20 = &VAR_18->dm.pflip_params[VAR_21.irq_source - VAR_2];

  VAR_20->adev = VAR_18;
  VAR_20->irq_src = VAR_21.irq_source;

  FUNC_1(VAR_18, &VAR_21,
    VAR_16, VAR_20);

 }


 VAR_22 = FUNC_2(VAR_18, VAR_24,
   VAR_14, &VAR_18->hpd_irq);
 if (VAR_22) {
  FUNC_0("Failed to add hpd irq id!\n");
  return VAR_22;
 }

 FUNC_4(VAR_18);

 return 0;
}
