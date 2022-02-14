
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct vc4_crtc {int channel; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_2__ {int * event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct drm_crtc*,int *) ;
 int FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct vc4_crtc* FUNC_14 (struct drm_crtc*) ;
 struct vc4_dev* FUNC_15 (struct drm_device*) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17(struct drm_crtc *VAR_8,
        struct drm_crtc_state *VAR_9)
{
 struct drm_device *VAR_10 = VAR_8->dev;
 struct vc4_dev *VAR_11 = FUNC_15(VAR_10);
 struct vc4_crtc *VAR_12 = FUNC_14(VAR_8);
 u32 VAR_13 = VAR_12->channel;
 int VAR_14;
 FUNC_11(VAR_10);


 FUNC_10(VAR_8);

 FUNC_1(VAR_1,
     FUNC_0(VAR_1) & ~VAR_0);
 VAR_14 = FUNC_16(!(FUNC_0(VAR_1) & VAR_0), 1);
 FUNC_7(VAR_14, "Timeout waiting for !PV_VCONTROL_VIDEN\n");

 if (FUNC_2(FUNC_4(VAR_13)) &
     VAR_2) {
  FUNC_3(FUNC_4(VAR_13),
     VAR_3);




  FUNC_3(FUNC_4(VAR_13), 0);
 }



 FUNC_8(FUNC_2(FUNC_4(VAR_13)) & VAR_3);

 FUNC_8(FUNC_6(FUNC_2(FUNC_5(VAR_13)),
       VAR_6) !=
       VAR_7);

 FUNC_8((FUNC_2(FUNC_5(VAR_13)) &
        (VAR_5 | VAR_4)) !=
       VAR_4);





 if (VAR_8->state->event) {
  unsigned long VAR_15;

  FUNC_12(&VAR_10->event_lock, VAR_15);
  FUNC_9(VAR_8, VAR_8->state->event);
  VAR_8->state->event = ((void*)0);
  FUNC_13(&VAR_10->event_lock, VAR_15);
 }
}
