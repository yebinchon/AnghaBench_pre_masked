
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int cs_setup; int write_setup; int write_cycle; int write_strobe; int read_latch; int read_setup; int read_cycle; int read_strobe; scalar_t__ vsync_dir_input; scalar_t__ vsync_active_high; } ;
struct shmob_drm_interface_data {int flags; scalar_t__ interface; TYPE_3__ sys; } ;
struct shmob_drm_device {int ldmt1r; TYPE_2__* pdata; } ;
struct drm_display_mode {int flags; int hdisplay; int htotal; int hsync_end; int hsync_start; int vdisplay; int vtotal; int vsync_end; int vsync_start; } ;
struct drm_crtc {struct drm_display_mode mode; TYPE_1__* dev; } ;
struct shmob_drm_crtc {struct drm_crtc crtc; } ;
struct TYPE_5__ {struct shmob_drm_interface_data iface; } ;
struct TYPE_4__ {struct shmob_drm_device* dev_private; } ;


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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (struct shmob_drm_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct shmob_drm_crtc *VAR_34)
{
 struct drm_crtc *VAR_35 = &VAR_34->crtc;
 struct shmob_drm_device *VAR_36 = VAR_35->dev->dev_private;
 const struct shmob_drm_interface_data *VAR_37 = &VAR_36->pdata->iface;
 const struct drm_display_mode *VAR_38 = &VAR_35->mode;
 u32 VAR_39;

 VAR_39 = VAR_36->ldmt1r
       | ((VAR_38->flags & VAR_1) ? 0 : VAR_12)
       | ((VAR_38->flags & VAR_0) ? 0 : VAR_10)
       | ((VAR_37->flags & VAR_30) ? VAR_9 : 0)
       | ((VAR_37->flags & VAR_28) ? VAR_7 : 0)
       | ((VAR_37->flags & VAR_27) ? VAR_6 : 0)
       | ((VAR_37->flags & VAR_31) ? VAR_11 : 0)
       | ((VAR_37->flags & VAR_29) ? VAR_8 : 0);
 FUNC_0(VAR_36, VAR_5, VAR_39);

 if (VAR_37->interface >= VAR_33 &&
     VAR_37->interface <= VAR_32) {

  VAR_39 = (VAR_37->sys.cs_setup << VAR_14)
        | (VAR_37->sys.vsync_active_high ? VAR_15 : 0)
        | (VAR_37->sys.vsync_dir_input ? VAR_16 : 0)
        | (VAR_37->sys.write_setup << VAR_19)
        | (VAR_37->sys.write_cycle << VAR_17)
        | (VAR_37->sys.write_strobe << VAR_18);
  FUNC_0(VAR_36, VAR_13, VAR_39);

  VAR_39 = (VAR_37->sys.read_latch << VAR_24)
        | (VAR_37->sys.read_setup << VAR_23)
        | (VAR_37->sys.read_cycle << VAR_21)
        | (VAR_37->sys.read_strobe << VAR_22);
  FUNC_0(VAR_36, VAR_20, VAR_39);
 }

 VAR_39 = ((VAR_38->hdisplay / 8) << 16)
       | (VAR_38->htotal / 8);
 FUNC_0(VAR_36, VAR_3, VAR_39);

 VAR_39 = (((VAR_38->hsync_end - VAR_38->hsync_start) / 8) << 16)
       | (VAR_38->hsync_start / 8);
 FUNC_0(VAR_36, VAR_4, VAR_39);

 VAR_39 = ((VAR_38->hdisplay & 7) << 24) | ((VAR_38->htotal & 7) << 16)
       | (((VAR_38->hsync_end - VAR_38->hsync_start) & 7) << 8)
       | (VAR_38->hsync_start & 7);
 FUNC_0(VAR_36, VAR_2, VAR_39);

 VAR_39 = ((VAR_38->vdisplay) << 16)
       | VAR_38->vtotal;
 FUNC_0(VAR_36, VAR_25, VAR_39);

 VAR_39 = ((VAR_38->vsync_end - VAR_38->vsync_start) << 16)
       | VAR_38->vsync_start;
 FUNC_0(VAR_36, VAR_26, VAR_39);
}
