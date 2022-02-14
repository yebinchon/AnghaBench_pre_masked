
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_vdisplay; int crtc_vtotal; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_4__ {TYPE_1__** crtcs; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
typedef int ktime_t ;
struct TYPE_3__ {scalar_t__ lb_vblank_lead_lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,unsigned int,int*,int*) ;
 int FUNC_1 () ;

int FUNC_2(struct drm_device *VAR_5,
   unsigned int VAR_6, unsigned int VAR_7, int *VAR_8,
   int *VAR_9, ktime_t *VAR_10, ktime_t *VAR_11,
   const struct drm_display_mode *VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 bool VAR_19 = 1;

 struct amdgpu_device *VAR_20 = VAR_5->dev_private;




 if (VAR_10)
  *VAR_10 = FUNC_1();

 if (FUNC_0(VAR_20, VAR_6, &VAR_13, &VAR_14) == 0)
  VAR_18 |= VAR_2;


 if (VAR_11)
  *VAR_11 = FUNC_1();




 *VAR_8 = VAR_14 & 0x1fff;
 *VAR_9 = (VAR_14 >> 16) & 0x1fff;


 if (VAR_13 > 0) {

  VAR_18 |= VAR_0;
  VAR_15 = VAR_13 & 0x1fff;
  VAR_16 = (VAR_13 >> 16) & 0x1fff;
 }
 else {

  VAR_15 = VAR_12->crtc_vdisplay;
  VAR_16 = 0;
 }


 if (VAR_7 & VAR_3) {

     *VAR_9 = *VAR_8 - VAR_15;
 }
 if (!(VAR_7 & VAR_4))
  VAR_15 -= VAR_20->mode_info.crtcs[VAR_6]->lb_vblank_lead_lines;


 if ((*VAR_8 < VAR_15) && (*VAR_8 >= VAR_16))
  VAR_19 = 0;


 if (VAR_19)
     VAR_18 |= VAR_1;


 if (VAR_7 & VAR_3) {

  *VAR_8 -= VAR_15;
  return VAR_18;
 }
 if (VAR_19 && (*VAR_8 >= VAR_15)) {
  VAR_17 = VAR_12->crtc_vtotal;





  *VAR_8 = (*VAR_8 < VAR_17) ? (*VAR_8 - VAR_17) : 0;
 }


 *VAR_8 = *VAR_8 - VAR_16;

 return VAR_18;
}
